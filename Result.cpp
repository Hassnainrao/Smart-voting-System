#include "Result.h"

Result::Result() {
    resultID       = "";
    winner         = "";
    totalVotesCast = 0;
}

void Result::calculateResult(vector<Candidate> candidates) {
    int maxVotes = -1;
    totalVotesCast = 0;
    for (int i = 0; i < candidates.size(); i++) {
        totalVotesCast = totalVotesCast + candidates[i].getVoteCount();
        if (candidates[i].getVoteCount() > maxVotes) {
            maxVotes = candidates[i].getVoteCount();
            winner   = candidates[i].getName();
            candidates[i].setWinner();
        }
    }
    resultID = "RES-001";
}

void Result::displayWinner() {
    cout << "=============================" << endl;
    cout << "       ELECTION RESULT        " << endl;
    cout << "=============================" << endl;
    cout << "Result ID        : " << resultID       << endl;
    cout << "Winner           : " << winner         << endl;
    cout << "Total Votes Cast : " << totalVotesCast << endl;
    cout << "=============================" << endl;
}

string Result::getWinner()         { return winner; }
int    Result::getTotalVotesCast() { return totalVotesCast; }
