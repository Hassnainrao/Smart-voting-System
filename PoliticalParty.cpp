#include "PoliticalParty.h"

PoliticalParty::PoliticalParty(string id, string pName, string sym, string ldr) {
    partyID   = id;
    partyName = pName;
    symbol    = sym;
    leader    = ldr;
    totalSeats = 0;
}

void PoliticalParty::incrementSeats() {
    totalSeats = totalSeats + 1;
}

int    PoliticalParty::getTotalSeats() { return totalSeats; }
string PoliticalParty::getPartyID()    { return partyID; }
string PoliticalParty::getPartyName()  { return partyName; }
string PoliticalParty::getSymbol()     { return symbol; }
string PoliticalParty::getLeader()     { return leader; }

void PoliticalParty::displayParty() {
    cout << "=============================" << endl;
    cout << "Party ID   : " << partyID   << endl;
    cout << "Party Name : " << partyName << endl;
    cout << "Symbol     : " << symbol    << endl;
    cout << "Leader     : " << leader    << endl;
    cout << "=============================" << endl;
}
