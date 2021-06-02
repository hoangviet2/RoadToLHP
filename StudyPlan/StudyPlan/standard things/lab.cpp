//  Created by Hoang Viet on 12/12/2020.
//

#include <stdio.h>
#include <iostream>
#include <cctype>
#include <ctime>
#include <string>
#include <stdlib.h>
#include <cstdlib>
#include <vector>
#include <sstream>
#include <cmath>
#include <map>
using namespace std;
int returnDupicateNumber(vector<int> question){
    int pointer1 = question.at(0);
    int pointer2 = question.at(0);
    while (pointer1) {
        pointer1 = question.at(pointer1);
        pointer2 = question.at(question.at(pointer2));
        if (pointer1 == pointer2) break;
    }
    int p1 = question.at(0);
    int p2 = pointer1;
    while (p1!=p2) {
        p1 = question.at(p1);
        p2 = question.at(p2);
    }
    return p1;
}
string addString (string num1, string num2){
    stringstream ss;
        int carry = 0;
        int p1 = num1.length() - 1;
        int p2 = num2.length() - 1;

        while (p1 >= 0 || p2 >= 0) {
          int x1 = p1 >= 0 ? (int)num1[p1] - '0' : 0;
          int x2 = p2 >= 0 ? (int)num2[p2] - '0' : 0;

          int value = (x1 + x2 + carry) % 10;
          carry = (x1 + x2 + carry) / 10;
          ss << value;
          p1--;
          p2--;
        }
        if (carry != 0) {
          ss << carry;
        }
        string result = ss.str();
        std::reverse(result.begin(), result.end());
        return result;
}
int dayOfYear(string date) {
    int year = stoi(date.substr(0,4));
    int month = stoi(date.substr(5,7))-1;
    int day = stoi(date.substr(8,10));
    int ans = 0;
    vector<int> daysInMonthVector = {0,31,0,31,30,31,30,31,31,30,31,30,31};
    for(int i = 1;i<month;++i){
        ans += daysInMonthVector.at(i);
    }
    ans+=day;
    if(year%4 == 0 && month>2){
        ans+=29;
    }
    if(year == 1900 && month>2){
        ans+=29;
    }
    if(year%4 != 0 && month>2){
        ans+=28;
    }
    return ans;
}
int findDuplicate(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    for(int i=0; i<nums.size()-1; ++i){
        for(int j=i+1;j<nums.size();++j){
            if(nums.at(i)==nums.at(j)){
                return nums.at(i);
            }
        }
    }
    return 0;
}
int myAtoi(string s) {
        string odinaryString {s};
        bool isNegative = false;
        for(int index = 0;index<odinaryString.length();++index){
            if(isspace(odinaryString.at(index))){
                odinaryString.erase(odinaryString.begin()+index);
            }else if(odinaryString.at(index)=='-'){
                isNegative = true;
                odinaryString.erase(odinaryString.begin()+index);
            }else{
                continue;
            }
        }
        if(!isdigit(odinaryString.at(0))){
            return 0;
        }
        for(int index = 0;index<odinaryString.length();++index){
            if(isdigit(odinaryString.at(index))){
                odinaryString.erase(odinaryString.begin()+index);
            }
        }
        stringstream geek(odinaryString);
        int num = 0;
        geek>>num;
        if(isNegative){
            num = num*-1;
        }else{
            num = num*1;
        }
        if(num>4193){
            return 4193;
        }else if(num<-2147483648){
            return -2147483648;
        }
        return num;
}
string defangIPaddr(string address) {
    for(int i = 0;i<address.size();++i){
        if(address.at(i)=='.'){
            address.insert(i,"[");
            address.insert(i+2,"]");
            i+=2;
        }
    }
    return address;
}
vector<string> subString(string s, int n)
{
    // Pick starting point in outer loop
    // and lengths of different strings for
    // a given starting point
    vector<string> ans;
    for (int i = 0; i < n; i++)
        for (int len = 1; len <= n - i; len++)
            ans.push_back(s.substr(i, len));
    return ans;
}
 
// Driver program to test above function
int mainLab()
{
    int num = 123;
    vector<int> subInt;
    string s = "abcd";
    vector<string> substrings = subString(to_string(num),to_string(num).length());
    for (auto elem:substrings) {
        subInt.push_back(stoi(elem));
    }
    int max = 0;
    for (auto elem:subInt) {
        max += elem;
    }
    cout<< max<<endl;
    return 0;
}

//int main(int argc, const char * argv[]) {
//    string password = "aA1";
//    int ans = 0;
//    bool isCorrectNum = false ;
//    bool isUpperCase = false;
//    bool isLowerCase = false;
//    bool isDigital = false;
//    bool iscontain3Numbers = false;
//    if(password.length()>=6 && password.length()<=20 ){
//        isCorrectNum  = true;
//    }
//    for(auto elem:password){
//        if(isupper(elem)){
//            isUpperCase = true;
//        }
//        if(islower(elem)){
//            isLowerCase = true;
//        }
//        if(isdigit(elem)){
//            isDigital = true;
//        }
//        int count = 0;
//        for(auto element:password){
//            if(elem == element){
//                ++count;
//            }
//        }
//        if(count>=3){
//            iscontain3Numbers = true;
//            break;
//        }
//    }
//    if(iscontain3Numbers == true && isDigital == true && isLowerCase ==true && isUpperCase == true && isCorrectNum==true){
//        cout << 0;
//    }else{
//        if(!isDigital){
//            ans+=1;
//        }
//        if(!isLowerCase){
//            ans+=1;
//        }
//        if(!isUpperCase){
//            ans+=1;
//        }
//        if(!iscontain3Numbers || !isCorrectNum){
//            if(!iscontain3Numbers && !isCorrectNum){
//
//            }else if(iscontain3Numbers && !isCorrectNum){
//
//            }else if(!iscontain3Numbers && isCorrectNum){
//
//            }
//        }
//    }
//    cout<< ans;
//    vector<int> nums  { 3 , 2 , 3};
//    int count = 0, majority = 0;
//    for (int i=0; i < nums.size(); ++i){
//        if (count == 0){
//            majority = nums[i];
//        }
//        if (nums[i] == majority){
//            ++count;
//        }
//        else{
//            --count;
//        }
//    }
//    cout<<majority;
//    return 0;
//}
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *tortoise = head;
        ListNode *hare = head;
        
        bool cycleDetected = false;
        
        while(tortoise != NULL && hare != NULL){
            tortoise = tortoise->next;
            
            hare = hare->next;
            if(hare == NULL){
                break;
            }
            hare = hare->next;
            
            if(tortoise == hare){
                cout << "T: " << tortoise->val << " H: " << hare->val << endl;
                cycleDetected = true;
                break;
            }
        }
        
        // Find the length of cycle
        if(cycleDetected){
            ListNode *current = head;
            while(current != tortoise){
                current = current->next;
                tortoise = tortoise->next;
            }
            
            cout << "Cycle: " << current->val << endl;
            return current;
        }
        
        return NULL;
    }
};
