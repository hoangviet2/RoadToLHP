#include "Account.h"
#include <iostream>

Account_Section_16::Account_Section_16(std::string name, double balance)
    : name{name}, balance{balance} {
}

bool Account_Section_16::deposit_Section_16(double amount) {
    if (amount < 0) 
        return false;
    else {
        balance += amount;
        return true;
    }
}

bool Account_Section_16::withdraw_Section_16(double amount) {
    if (balance-amount >=0) {
        balance-=amount;
        return true;
    } else
        return false;
}
void Account_Section_16::print_Section_16(std::ostream &os) const{
    os.precision(2);
    os<<std::fixed;
    os << "[Account: " << name << ": " << balance << "]";
}

