// Section 20
// Challenge 4
// Identifying palindrome strings using a stack and queue
#include <cctype>
#include <stack>
#include <queue>
#include <iostream>
#include <string>
#include <iomanip>

bool is_palindrome(const std::string& s)
{
    // You must implement this function.
    // Since we are learning the STL - use a stack and a queue to solve the problem.
    std::queue<char> dqu;
    std::stack<char> stk;
    for (auto elem:s){
        if (isalpha(elem)){
            dqu.push(toupper(elem));
            stk.push(toupper(elem));
        }
    }
    char c1 {};
    char c2 {};
    while (!dqu.empty()) {
        c1 = dqu.front();
        dqu.pop();
        c2 = stk.top();
        stk.pop();
        if (c1!=c2){
            return false;
        }
    }
    return true;
}

int main_Section_20_4()
{
    std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };
   
    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for(const auto& s : test_strings) {
        std::cout << std::setw(8) << std::left << is_palindrome(s)  << s << std::endl;
    }
    std::cout << std::endl;
    return 0;
}
