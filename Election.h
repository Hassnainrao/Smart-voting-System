#ifndef ELECTION_H
#define ELECTION_H

#include <iostream>
#include <string>
#include <vector>
#include "Candidate.h"
#include "Vote.h"
#include "Result.h"
#include "Report.h"
using namespace std;

class Election {
private:
    string electionID;
    string date;
    string status;
    string electionType;
    vector<Candidate> candidates;
    vector<Vote> votes;
    Result result;
    int voteCounter;
public:
    Election(string id, string dt, string eType);
    void   addCandidate(Candidate c);
    void   startElection();
    void   pauseElection();
    void   endElection();
    bool   castVote(string voterID, string candidateID);
    void   declareResult();
    void   generateReport(string adminName);
    string getStatus();
    string getElectionID();
};

#endif
