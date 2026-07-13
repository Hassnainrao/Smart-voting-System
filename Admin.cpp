#include "Admin.h"

Admin::Admin(string id, string n, string c, int a, string addr,
             string r, int level)
    : Person(n, c, a, addr) {
    adminID     = id;
    role        = r;
    accessLevel = level;
}

void Admin::getDetails() {
    cout << "=============================" << endl;
    cout << "Admin ID     : " << adminID     << endl;
    cout << "Name         : " << name        << endl;
    cout << "Age          : " << age         << endl;
    cout << "Role         : " << role        << endl;
    cout << "Access Level : " << accessLevel << endl;
    cout << "=============================" << endl;
}

bool Admin::validateAge() {
    if (age >= 21) return true;
    else           return false;
}

void Admin::addVoter(Voter v) {
    for (int i = 0; i < voters.size(); i++) {
        if (voters[i].getCNIC() == v.getCNIC()) {
            cout << "Error: This CNIC is already registered!" << endl;
            return;
        }
    }
    voters.push_back(v);
    cout << "Voter [" << v.getName() << "] registered successfully!" << endl;
}

void Admin::addCandidate(Candidate c, Election &e) {
    if (c.validateAge() == false) {
        cout << "Error: [" << c.getName() << "] is below 25. Cannot register." << endl;
        return;
    }
    candidates.push_back(c);
    e.addCandidate(c);
    cout << "Candidate [" << c.getName() << "] registered successfully!" << endl;
}

void Admin::manageElection(Election &e, string action) {
    if (action == "start")
        e.startElection();
    else if (action == "pause")
        e.pauseElection();
    else if (action == "end")
        e.endElection();
    else
        cout << "Unknown action!" << endl;
}

void Admin::generateReport(Election &e) {
    e.generateReport(name);
}

void Admin::listAllVoters() {
    cout << "=============================" << endl;
    cout << "     ALL REGISTERED VOTERS   " << endl;
    cout << "=============================" << endl;
    for (int i = 0; i < voters.size(); i++)
        voters[i].getDetails();
}

void Admin::listAllCandidates() {
    cout << "=============================" << endl;
    cout << "   ALL REGISTERED CANDIDATES " << endl;
    cout << "=============================" << endl;
    for (int i = 0; i < candidates.size(); i++)
        candidates[i].getDetails();
}

string Admin::getAdminID() { return adminID; }
