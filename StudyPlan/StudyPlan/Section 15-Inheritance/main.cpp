// Section 15
// Challenge 
#include <iostream>
#include <vector>
#include "Savings_Account.h"
#include "Account_Util.h"
#include "Checking_Account.h"
#include "Trust_Account.h"

using namespace std;

int main_Section_15() {
    cout.precision(2);
    cout << fixed;
   
    // Accounts
    vector<Account_Section_15> accounts;
    accounts.push_back(Account_Section_15 {});
    accounts.push_back(Account_Section_15 {"Larry"});
    accounts.push_back(Account_Section_15 {"Moe", 2000} );
    accounts.push_back(Account_Section_15 {"Curly", 5000} );
    
    display_Section_15(accounts);
    deposit_Section_15(accounts, 1000);
    withdraw_Section_15(accounts,2000);
    
    // Savings 

    vector<Savings_Account_Section_15> sav_accounts;
    sav_accounts.push_back(Savings_Account_Section_15 {} );
    sav_accounts.push_back(Savings_Account_Section_15 {"Superman"} );
    sav_accounts.push_back(Savings_Account_Section_15 {"Batman", 2000} );
    sav_accounts.push_back(Savings_Account_Section_15 {"Wonderwoman", 5000, 5.0} );
    
    
    display_Section_15(sav_accounts);
    deposit_Section_15(sav_accounts, 1000);
    withdraw_Section_15(sav_accounts, 2000);
    
    
    // Checking
       
    vector<Checking_Account_Section_15> check_accounts;
    check_accounts.push_back(Checking_Account_Section_15 {} );
    check_accounts.push_back(Checking_Account_Section_15 {"Kirk"} );
    check_accounts.push_back(Checking_Account_Section_15 {"Spock", 2000} );
    check_accounts.push_back(Checking_Account_Section_15 {"Bones", 5000} );

    display_Section_15(check_accounts);
    deposit_Section_15(check_accounts, 1000);
    withdraw_Section_15(check_accounts, 2000);

    // Trust
      
    vector<Trust_Account_Section_15> trust_accounts;
    trust_accounts.push_back(Trust_Account_Section_15 {} );
    trust_accounts.push_back(Trust_Account_Section_15 {"Athos", 10000, 5.0} );
    trust_accounts.push_back(Trust_Account_Section_15 {"Porthos", 20000, 4.0} );
    trust_accounts.push_back(Trust_Account_Section_15 {"Aramis", 30000} );
    
    display_Section_15(trust_accounts);
    deposit_Section_15(trust_accounts, 1000);
    withdraw_Section_15(trust_accounts, 3000);

    return 0;
}

