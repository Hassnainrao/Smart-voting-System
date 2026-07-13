#include <iostream>
#include "PoliticalParty.h"
#include "Admin.h"
#include "Voter.h"
#include "Candidate.h"
#include "Election.h"
using namespace std;

int main() {
    cout << "========================================" << endl;
    cout << "    SMART VOTING SYSTEM - OOP Project   " << endl;
    cout << "========================================" << endl;
    cout << endl;

    // Step 1: Create political parties
    cout << "--- Political Parties ---" << endl;
    PoliticalParty party1("P001", "Pakistan Tehreek-e-Insaf", "Bat",   "Imran Khan");
    PoliticalParty party2("P002", "Pakistan Muslim League-N",  "Tiger", "Nawaz Sharif");
    PoliticalParty party3("P003", "Pakistan Peoples Party",    "Arrow", "Asif Zardari");
    party1.displayParty();
    party2.displayParty();
    party3.displayParty();

    // Step 2: Create admin
    cout << "--- Admin ---" << endl;
    Admin admin("A001", "Ayesha Malik", "35202-1234567-1", 40,
                "Islamabad", "Chief Election Officer", 5);
    admin.getDetails();
    cout << endl;

    // Step 3: Create election
    Election election("E001", "2025-04-20", "General Election");

    // Step 4: Register candidates
    cout << "--- Registering Candidates ---" << endl;
    Candidate c1("C001", "Ali Hassan",  "35202-1111111-1", 30, "Lahore",   "NA-100", "P001");
    Candidate c2("C002", "Sara Ahmed",  "35202-2222222-2", 27, "Karachi",  "NA-100", "P002");
    Candidate c3("C003", "Usman Ali",   "35202-3333333-3", 35, "Peshawar", "NA-100", "P003");
    Candidate c4("C004", "Bilal Khan",  "35202-4444444-4", 22, "Multan",   "NA-100", "P001");
    admin.addCandidate(c1, election);
    admin.addCandidate(c2, election);
    admin.addCandidate(c3, election);
    admin.addCandidate(c4, election); // will be rejected, age is 22
    cout << endl;

    // Step 5: Register voters
    cout << "--- Registering Voters ---" << endl;
    Voter v1("V001", "Hira Ishfaq",  "35202-5555555-5", 22, "Lahore", "NA-100");
    Voter v2("V002", "Urwa Iqbal",   "35202-6666666-6", 20, "Lahore", "NA-100");
    Voter v3("V003", "Zain Raza",    "35202-7777777-7", 17, "Lahore", "NA-100");
    Voter v4("V004", "Nadia Tariq",  "35202-8888888-8", 25, "Lahore", "NA-100");
    Voter v5("V005", "Hamza Sheikh", "35202-9999999-9", 30, "Lahore", "NA-100");
    admin.addVoter(v1);
    admin.addVoter(v2);
    admin.addVoter(v3); // will be blocked when voting, age is 17
    admin.addVoter(v4);
    admin.addVoter(v5);
    cout << endl;

    // Step 6: Show all registered voters and candidates
    admin.listAllVoters();
    admin.listAllCandidates();

    // Step 7: Start election
    cout << "--- Starting Election ---" << endl;
    admin.manageElection(election, "start");
    cout << endl;

    // Step 8: Voting phase
    cout << "--- Voting Phase ---" << endl;
    v1.castVote(election, "C001"); // valid vote
    v2.castVote(election, "C001"); // valid vote
    v3.castVote(election, "C002"); // blocked, underage
    v4.castVote(election, "C002"); // valid vote
    v5.castVote(election, "C003"); // valid vote
    v1.castVote(election, "C003"); // blocked, already voted
    cout << endl;

    // Step 9: Close election
    cout << "--- Closing Election ---" << endl;
    admin.manageElection(election, "end");
    cout << endl;

    // Step 10: Declare result
    election.declareResult();
    cout << endl;

    // Step 11: Generate report
    admin.generateReport(election);
    cout << endl;

    // Step 12: Show voter cards
    cout << "--- Voter Cards ---" << endl;
    v1.getVoterCard();
    v3.getVoterCard();

    return 0;
}
