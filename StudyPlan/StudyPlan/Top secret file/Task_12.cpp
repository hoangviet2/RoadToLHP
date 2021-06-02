// Đề bài : Tìm chuỗi dài nhẩ trg 1 chuỗi rồi mã hoá nó theo thứ tự các chữ cái trg bảng ASC2 theo chiều kim đồng hồ (các chữ lặp theo vòng tròn)

#include <stdio.h>
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
std::string pharse_longest (std::string);
std::string encrypted_string (std::string,std::string,std::string);
std::string dencrypted_string (std::string, std::string , std::string );
int main_12022021_1(){
    std::ifstream Inp;
    std::ofstream Oup;
    std::string Input_string {"Input.txt"};
    std::string Output_string {"Output.txt"};
    std::string string {};
    std::string aphabet_string {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
    std::string rule_string    {"xyzABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvw"};
    Inp.open(Input_string);
    Oup.open(Output_string);
    if (Inp){
        getline(Inp, string);
        Oup<<encrypted_string(rule_string, aphabet_string, pharse_longest(string))<<std::endl;
        Oup<<pharse_longest(string);
    }
    Inp.close();
    Oup.close();
    return 0;
}

std::string pharse_longest (std::string bare_string){
    std::string result {};
    std::stringstream ss {bare_string};
    std::string temp_string {};
    std::vector<std::string> string_vec {};
    while (ss>>temp_string) {
        string_vec.push_back(temp_string);
    }
    for (auto elem:string_vec){
        if (result.length()<=elem.length()){
            result = elem;
        }
    }
    return result;
}
std::string encrypted_string (std::string rule, std::string aphabet, std::string base_string){
    std::string result {};
    char characters {};
    for(auto elem:base_string){
        if (rule.find(elem)!= std::string::npos){
            characters = rule.at(aphabet.find(elem));
        }else {
            characters = elem;
        }
        result += characters;
    }
    return result;
}
std::string dencrypted_string (std::string rule, std::string aphabet, std::string base_string){
    std::string result {};
    char characters {};
    for(auto elem:base_string){
        if (rule.find(elem)!= std::string::npos){
            characters = rule.at(aphabet.find(elem));
        }else {
            characters = elem;
        }
        result += characters;
    }
    return result;
}
