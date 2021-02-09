//
//  Checking_Account.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 05/02/2021.
//

#include "Checking_Account.h"
Checking_Account_Section_15::Checking_Account_Section_15(std::string name, double balance)
    : Account_Section_15{name, balance} {
}

bool Checking_Account_Section_15::withdraw_Section_15(double amount) {
    amount += per_check_fee;
    return Account_Section_15::withdraw_Section_15(amount);
}

std::ostream &operator<<(std::ostream &os, const Checking_Account_Section_15 &account) {
    os << "[Checking_Account: " << account.name << ": " << account.balance  << "]";
    return os;
}

