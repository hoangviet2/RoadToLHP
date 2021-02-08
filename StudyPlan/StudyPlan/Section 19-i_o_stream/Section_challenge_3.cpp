//
//  Section_challenge_3.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 03/02/2021.
//

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;
bool findsubstring (const std::string &word_to_find, const std::string &target){
    size_t found = target.find(word_to_find);
    if (found == string::npos){
        return false;
    }
    return true;
}
int main_sec_cha_3 (){
    string text_find {};
    string text {};
    int match_count {0}, word_count {0};
    string file_in {"Input.txt"};
    string file_out {"Output.txt"};
    ifstream in_file;
    ofstream out_file;
    in_file.open(file_in);
    out_file.open(file_out);
    if (!in_file) {
        std::cerr << "Problem opening file" << std::endl;
        return 1;
    }
    std::cout << "Enter the substring to search for: ";
    std::cin >> text_find;
    while (in_file>>text){
        ++word_count;
        if(findsubstring(text_find, text)){
            ++match_count;
            cout<<text<<" ";
        }
    }
    std::cout << word_count << " words were searched..." << std::endl;
        std::cout << "The substring " << text_find << " was found " << match_count << " times " << std::endl;
    std::cout << std::endl;
    out_file<< word_count << " words were searched..." << std::endl;
    out_file<<"The substring " << text_find << " was found " << match_count << " times " << std::endl;
    in_file.close();
    out_file.close();
    return 0;
}

