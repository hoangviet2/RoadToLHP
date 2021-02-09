#include "Savings_Account.h"

Savings_Account_Section_15::Savings_Account_Section_15(std::string name, double balance, double int_rate)
    : Account_Section_15 {name, balance}, int_rate{int_rate} {
}

// Deposit:
//      Amount supplied to deposit will be incremented by (amount * int_rate/100) 
//      and then the updated amount will be deposited
//
bool Savings_Account_Section_15::deposit_Section_15(double amount) {
    amount += amount * (int_rate/100);
    return Account_Section_15::deposit_Section_15(amount);
}

std::ostream &operator<<(std::ostream &os, const Savings_Account_Section_15 &account) {
    os << "[Savings_Account: " << account.name << ": " << account.balance << ", " << account.int_rate << "%]";
    return os;
}

