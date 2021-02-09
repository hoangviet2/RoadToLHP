#include "Savings_Account.h"
#include <iostream>
Savings_Account_Section_16::Savings_Account_Section_16(std::string name, double balance, double int_rate)
    : Account_Section_16 {name, balance}, int_rate{int_rate} {
}

// Deposit:
//      Amount supplied to deposit will be incremented by (amount * int_rate/100) 
//      and then the updated amount will be deposited
//
bool Savings_Account_Section_16::deposit_Section_16(double amount) {
    amount += amount * (int_rate/100);
    return Account_Section_16::deposit_Section_16(amount);
}
bool Savings_Account_Section_16::withdraw_Section_16(double amount) {
    return Account_Section_16::withdraw_Section_16(amount);
}
void Savings_Account_Section_16::print_Section_16(std::ostream &os) const{
    os.precision(2);
    os<<std::fixed;
    os << "[Savings_Account: " << name << ": " << balance << ", " << int_rate << "]";
}

