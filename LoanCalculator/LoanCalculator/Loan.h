//
//  Loan.h
//  LoanCalculator
//
//  Created by Alejandro Toledo on 6/1/26.
//

#pragma once
#include <string>

class Loan
{
public:
    Loan(std::string loanName, double loanTotal, double loanApr, int currentMonth, int whenInterestHits);
    double makePayment(double payment);
    // bool isPaidOff();
    // bool checkMonth(int month);
private:
    std::string name;
    double total;
    double apr;
    int month;
    int interestMonth;
    bool paidOff = false;
};

