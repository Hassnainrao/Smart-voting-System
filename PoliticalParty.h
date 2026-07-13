#ifndef POLITICALPARTY_H
#define POLITICALPARTY_H

#include <iostream>
#include <string>
using namespace std;

class PoliticalParty {
private:
    string partyID;
    string partyName;
    string symbol;
    string leader;
    int totalSeats;
public:
    PoliticalParty(string id, string pName, string sym, string ldr);
    void incrementSeats();
    int    getTotalSeats();
    string getPartyID();
    string getPartyName();
    string getSymbol();
    string getLeader();
    void displayParty();
};

#endif
