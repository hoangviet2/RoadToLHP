#include "Trust_Account.h"
#include <iostream>

Trust_Account_Section_16::Trust_Account_Section_16(std::string name, double balance, double int_rate)
    : Savings_Account_Section_16 {name, balance, int_rate}, num_withdrawals {0}  {
        
}

// Deposit additional $50 bonus when amount >= $5000
bool Trust_Account_Section_16::deposit_Section_16(double amount) {
    if (amount >= bonus_threshold)
        amount += bonus_amount;
    return Savings_Account_Section_16::deposit_Section_16(amount);
}
    
// Only allowed 3 withdrawals, each can be up to a maximum of 20% of the account's value
bool Trust_Account_Section_16::withdraw_Section_16(double amount) {
    if (num_withdrawals >= max_withdrawals || (amount > balance * max_withdraw_percent))
        return false;
    else {
        ++num_withdrawals;
        return Savings_Account_Section_16::withdraw_Section_16(amount);
    }
}
void Trust_Account_Section_16::print_Section_16(std::ostream &os) const{
    os.precision(2);
    os<<std::fixed;
    os << "[Trust_Account: " <<name <<", "<< balance << ", " << int_rate << "%, withdrawals " << num_withdrawals << "]";
}
