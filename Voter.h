#ifndef VOTER_H
#define VOTER_H

#include "Person.h"
#include "Election.h"

class Voter : public Person {
private:
    string voterID;
    bool hasVoted;
    bool isEligible;
    string constituency;
public:
    Voter(string id, string n, string c, int a, string addr, string constit);
    void   getDetails();
    bool   validateAge();
    bool   checkEligibility();
    bool   castVote(Election &election, string candidateID);
    void   getVoterCard();
    string getVoterID();
    bool   getHasVoted();
    string getConstituency();
};

#endif
