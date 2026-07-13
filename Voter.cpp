#include "Voter.h"

Voter::Voter(string id, string n, string c, int a, string addr, string constit)
    : Person(n, c, a, addr) {
    voterID      = id;
    hasVoted     = false;
    constituency = constit;
    isEligible   = validateAge();
}

void Voter::getDetails() {
    cout << "=============================" << endl;
    cout << "Voter ID     : " << voterID      << endl;
    cout << "Name         : " << name         << endl;
    cout << "Age          : " << age          << endl;
    cout << "CNIC         : " << cnic         << endl;
    cout << "Address      : " << address      << endl;
    cout << "Constituency : " << constituency << endl;
    if (isEligible == true)
        cout << "Eligible     : Yes" << endl;
    else
        cout << "Eligible     : No (age below 18)" << endl;
    if (hasVoted == true)
        cout << "Voted        : Yes" << endl;
    else
        cout << "Voted        : No" << endl;
    cout << "=============================" << endl;
}

bool Voter::validateAge() {
    if (age >= 18) return true;
    else           return false;
}

bool Voter::checkEligibility() {
    if (isEligible == true && hasVoted == false)
        return true;
    else
        return false;
}

bool Voter::castVote(Election &election, string candidateID) {
    if (checkEligibility() == false) {
        cout << ">> " << name << " cannot vote!" << endl;
        if (isEligible == false)
            cout << "   Reason: Age is below 18." << endl;
        if (hasVoted == true)
            cout << "   Reason: Already voted once." << endl;
        return false;
    }
    bool success = election.castVote(voterID, candidateID);
    if (success == true)
        hasVoted = true;
    return success;
}

void Voter::getVoterCard() {
    cout << "=============================" << endl;
    cout << "         VOTER CARD          " << endl;
    getDetails();
}

string Voter::getVoterID()     { return voterID; }
bool   Voter::getHasVoted()    { return hasVoted; }
string Voter::getConstituency(){ return constituency; }
