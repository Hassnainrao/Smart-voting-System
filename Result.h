#ifndef RESULT_H
#define RESULT_H

#include <iostream>
#include <string>
#include <vector>
#include "Candidate.h"
using namespace std;

class Result {
private:
    string resultID;
    string winner;
    int totalVotesCast;
public:
    Result();
    void   calculateResult(vector<Candidate> candidates);
    void   displayWinner();
    string getWinner();
    int    getTotalVotesCast();
};

#endif
