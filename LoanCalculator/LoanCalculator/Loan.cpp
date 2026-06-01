//
//  Loan.cpp
//  LoanCalculator
//
//  Created by Alejandro Toledo on 6/1/26.
//

#include "Loan.h"
#include <iostream>
#include <string>

Loan::Loan(std::string loanName, double loanTotal, double loanApr, int currentMonth, int whenInterestHits) {
    name = loanName;
    total = loanTotal;
    apr = loanApr;
    month = currentMonth;
    interestMonth = whenInterestHits;
}

double Loan::makePayment(double payment) {

    // Establish change
    double change;
    
    // Check if full cycle has passed
    if (month == interestMonth) {
        total = (total * apr) + total;
    }
    
    // Makes the payment
    total -= payment;
    
    // Checks new total, establishes the change
    if (total < 0) {
        change = total * -1.0;
    } else {
        change = 0.0;
    }
    
    return change;
}

