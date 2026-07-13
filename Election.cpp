#include "Election.h"

Election::Election(string id, string dt, string eType) {
    electionID   = id;
    date         = dt;
    status       = "not started";
    electionType = eType;
    voteCounter  = 0;
}

void Election::addCandidate(Candidate c) {
    candidates.push_back(c);
}

void Election::startElection() {
    if (status == "not started" || status == "paused") {
        status = "ongoing";
        cout << "Election [" << electionID << "] STARTED!" << endl;
    } else {
        cout << "Election is already running or closed." << endl;
    }
}

void Election::pauseElection() {
    if (status == "ongoing") {
        status = "paused";
        cout << "Election [" << electionID << "] PAUSED." << endl;
    } else {
        cout << "Election is not running." << endl;
    }
}

void Election::endElection() {
    status = "closed";
    cout << "Election [" << electionID << "] CLOSED." << endl;
}

bool Election::castVote(string voterID, string candidateID) {
    if (status != "ongoing") {
        cout << "Voting is not open right now!" << endl;
        return false;
    }
    for (int i = 0; i < candidates.size(); i++) {
        if (candidates[i].getCandidateID() == candidateID) {
            voteCounter = voteCounter + 1;
            string voteID = "V00" + to_string(voteCounter);
            Vote v(voteID, voterID, candidateID);
            if (v.verifyVote() == true) {
                votes.push_back(v);
                candidates[i].receiveVote();
                v.recordVote();
                return true;
            }
        }
    }
    cout << "Candidate not found!" << endl;
    return false;
}

void Election::declareResult() {
    if (status != "closed") {
        cout << "Please close the election first!" << endl;
        return;
    }
    result.calculateResult(candidates);
    result.displayWinner();
}

void Election::generateReport(string adminName) {
    Report r("RPT-001", adminName, date, electionType);
    r.generateSummary(candidates, result);
    r.exportReport();
}

string Election::getStatus()     { return status; }
string Election::getElectionID() { return electionID; }
