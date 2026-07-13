#ifndef CANDIDATE_H
#define CANDIDATE_H

#include "Person.h"

class Candidate : public Person {
private:
    string candidateID;
    int totalVotes;
    string constituency;
    string partyID;
    bool hasWon;
public:
    Candidate(string id, string n, string c, int a, string addr,
              string constit, string pID);
    void   getDetails();
    bool   validateAge();
    int    getVoteCount();
    void   receiveVote();
    bool   winStatus();
    void   setWinner();
    void   getProfile();
    string getCandidateID();
    string getConstituency();
    string getPartyID();
};

#endif
