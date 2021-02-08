//
//  Section_challenge_4.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 04/02/2021.
//

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <limits>
#include <sstream>
using namespace std;
int main_challege_4(){
    string file_in {"Input.txt"};
    string file_out {"Output.txt"};
    ifstream in_file;
    ofstream out_file;
    in_file.open(file_in);
    out_file.open(file_out);
    
    if (!in_file){
        cerr<<"Can't open an exist file: "<<file_in<<endl;
    }
    if (!out_file){
        cerr<<"Can't create out put file: "<<file_out<<endl;
    }
    string str;
    int index {1};
    while (getline(in_file,str)){
        if (str == ""){
            out_file<<endl;
        }else{
            out_file<<setw(7)<<left<<index<<str<<endl;
            ++index;
        }
    }
    cin.ignore(numeric_limits<streamsize>::max());
    in_file.close();
    out_file.close();
    return 0;
}

