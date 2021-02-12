#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"
#include "InsufficientFundException.h"

using namespace std;

int main_Section_18() {
    // test your code here
    unique_ptr<Account> mom_account;
    unique_ptr<Account> dad_account;
    try{
        mom_account = make_unique<Savings_Account>("Trần Thị Mỹ Hiền",-10000.00);
        cout<<*mom_account<<endl;
    }catch(const IllegalBalanceException &ex){
        cerr<<ex.what()<<endl;
    }
   
    try{
        dad_account = make_unique<Savings_Account>("Hoàng Đình Thọ",10000.00);
        cout<<*dad_account<<endl;
        dad_account->withdraw(500.0);
        cout<<*dad_account<<endl;
        dad_account->withdraw(1000000.00);
        cout<<*dad_account<<endl;
        mom_account = make_unique<Savings_Account>("Hoàng Long",-2000.00);
        cout<<*mom_account<<endl;
    }catch(const IllegalBalanceException &ex){
        cerr<<ex.what()<<endl;
    }catch(const InsufficientFundException &ex){
        cerr<<ex.what()<<endl;
    }
    std::cout << "Program completed successfully" << std::endl;
    return 0;
}

