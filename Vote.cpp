#include "Vote.h"

Vote::Vote(string vid, string vID, string cID) {
    voteID      = vid;
    voterID     = vID;
    candidateID = cID;
}

void Vote::recordVote() {
    cout << "-----------------------------" << endl;
    cout << "Vote Recorded Successfully!"  << endl;
    cout << "Vote ID      : " << voteID      << endl;
    cout << "Voter ID     : " << voterID     << endl;
    cout << "Candidate ID : " << candidateID << endl;
    cout << "-----------------------------" << endl;
}

bool Vote::verifyVote() {
    if (voteID != "" && voterID != "" && candidateID != "")
        return true;
    else
        return false;
}

string Vote::getVoteID()      { return voteID; }
string Vote::getVoterID()     { return voterID; }
string Vote::getCandidateID() { return candidateID; }
