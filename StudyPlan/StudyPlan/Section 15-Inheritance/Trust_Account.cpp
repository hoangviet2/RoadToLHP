//
//  Trust_Account.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 05/02/2021.
//

#include "Trust_Account.h"
#include "Savings_Account.h"

Trust_Account_Section_15::Trust_Account_Section_15(std::string name, double balance, double int_rate)
    : Savings_Account_Section_15 {name, balance, int_rate}, num_withdrawals {0}  {
        
}

// Deposit additional $50 bonus when amount >= $5000
bool Trust_Account_Section_15::deposit_Section_15(double amount) {
    if (amount >= bonus_threshold)
        amount += bonus_amount;
    return Savings_Account_Section_15::deposit_Section_15(amount);
}
    
// Only allowed 3 withdrawals, each can be up to a maximum of 20% of the account's value
bool Trust_Account_Section_15::withdraw_Section_15(double amount) {
    if (num_withdrawals >= max_withdrawals || (amount > balance * max_withdraw_percent))
        return false;
    else {
        ++num_withdrawals;
        return Savings_Account_Section_15::withdraw_Section_15(amount);
    }
}

std::ostream &operator<<(std::ostream &os, const Trust_Account_Section_15 &account) {
    os << "[Trust Account: " << account.name << ": " << account.balance << ", " << account.int_rate
        << "%, withdrawals: " << account.num_withdrawals <<  "]";
    return os;
}
