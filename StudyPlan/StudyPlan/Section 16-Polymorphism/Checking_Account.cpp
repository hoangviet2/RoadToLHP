#include "Checking_Account.h"
#include <iostream>

Checking_Account_Section_16::Checking_Account_Section_16(std::string name, double balance)
    : Account_Section_16 {name, balance} {
}

bool Checking_Account_Section_16::withdraw_Section_16(double amount) {
    amount += per_check_fee;
    return Account_Section_16::withdraw_Section_16(amount);
}
bool Checking_Account_Section_16::deposit_Section_16(double amount){
    return Account_Section_16::deposit_Section_16(amount);
}
void Checking_Account_Section_16::print_Section_16(std::ostream &os) const{
    os.precision(2);
    os<<std::fixed;
    os << "[Checking_Account: " << name << ": " << balance  << "]";
}

