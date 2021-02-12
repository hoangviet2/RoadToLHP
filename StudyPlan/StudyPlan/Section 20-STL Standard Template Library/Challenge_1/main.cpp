// Section 20
// Challenge 1
// Identifying palindrome strings using a deque
#include <cctype>
#include <deque>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

bool is_palindrome_section_20_1(const std::string& s)
{
    // You must implement this function.
    // Since we are learning the STL - use a deque to solve the problem.
    std::deque<char> d;
    for (auto elem:s){
        if (isalpha(elem)){
            d.push_back(toupper(elem));
        }
    }
    while (!d.empty()) {
        if(d.size() == 1){
            return true;
        }
        if (d.front() == d.back()){
            d.erase(d.begin());
            d.erase(d.end());
        }else{
            return false;
        }
    }
    return true;
}

int main_section_20_1()
{
    std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };
   
    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for(const auto& s : test_strings) {
        std::cout << std::setw(8) << std::left << is_palindrome_section_20_1(s) <<"           "<<s << std::endl;
    }
    std::cout << std::endl;
    return 0;
}
