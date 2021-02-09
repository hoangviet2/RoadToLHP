#include "Account.h"

Account_Section_15::Account_Section_15(std::string name, double balance)
    : name{name}, balance{balance} {
}

bool Account_Section_15::deposit_Section_15(double amount) {
    if (amount < 0) 
        return false;
    else {
        balance += amount;
        return true;
    }
}

bool Account_Section_15::withdraw_Section_15(double amount) {
    if (balance-amount >=0) {
        balance-=amount;
        return true;
    } else
        return false;
}

double Account_Section_15::get_balance_Section_15() const {
    return balance;
}

std::ostream &operator<<(std::ostream &os, const Account_Section_15 &account) {
    os << "[Account: " << account.name << ": " << account.balance << "]";
    return os;
}
