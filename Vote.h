#ifndef VOTE_H
#define VOTE_H

#include <iostream>
#include <string>
using namespace std;

class Vote {
private:
    string voteID;
    string voterID;
    string candidateID;
public:
    Vote(string vid, string vID, string cID);
    void   recordVote();
    bool   verifyVote();
    string getVoteID();
    string getVoterID();
    string getCandidateID();
};

#endif
