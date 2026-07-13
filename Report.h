#ifndef REPORT_H
#define REPORT_H

#include <iostream>
#include <string>
#include <vector>
#include "Candidate.h"
#include "Result.h"
using namespace std;

class Report {
private:
    string reportID;
    string generatedBy;
    string date;
    string reportType;
public:
    Report(string id, string genBy, string dt, string rType);
    void generateSummary(vector<Candidate> candidates, Result result);
    void exportReport();
};

#endif
