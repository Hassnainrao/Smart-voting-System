#ifndef ADMIN_H
#define ADMIN_H

#include <vector>
#include "Person.h"
#include "Voter.h"
#include "Candidate.h"
#include "Election.h"

class Admin : public Person {
private:
    string adminID;
    string role;
    int accessLevel;
    vector<Voter> voters;
    vector<Candidate> candidates;
public:
    Admin(string id, string n, string c, int a, string addr,
          string r, int level);
    void   getDetails();
    bool   validateAge();
    void   addVoter(Voter v);
    void   addCandidate(Candidate c, Election &e);
    void   manageElection(Election &e, string action);
    void   generateReport(Election &e);
    void   listAllVoters();
    void   listAllCandidates();
    string getAdminID();
};

#endif
