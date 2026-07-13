#include "Candidate.h"

Candidate::Candidate(string id, string n, string c, int a, string addr,
                     string constit, string pID)
    : Person(n, c, a, addr) {
    candidateID  = id;
    totalVotes   = 0;
    constituency = constit;
    partyID      = pID;
    hasWon       = false;
}

void Candidate::getDetails() {
    cout << "=============================" << endl;
    cout << "Candidate ID : " << candidateID  << endl;
    cout << "Name         : " << name         << endl;
    cout << "Age          : " << age          << endl;
    cout << "CNIC         : " << cnic         << endl;
    cout << "Constituency : " << constituency << endl;
    cout << "Party ID     : " << partyID      << endl;
    cout << "Total Votes  : " << totalVotes   << endl;
    if (hasWon == true)
        cout << "Status: WINNER" << endl;
    else
        cout << "Status: not Winner Yet" << endl;
    cout << "=============================" << endl;
}

bool Candidate::validateAge() {
    if (age >= 25) return true;
    else           return false;
}

int  Candidate::getVoteCount()   { return totalVotes; }
void Candidate::receiveVote()    { totalVotes = totalVotes + 1; }
bool Candidate::winStatus()      { return hasWon; }
void Candidate::setWinner()      { hasWon = true; }
void Candidate::getProfile()     { getDetails(); }
string Candidate::getCandidateID()  { return candidateID; }
string Candidate::getConstituency() { return constituency; }
string Candidate::getPartyID()      { return partyID; }
