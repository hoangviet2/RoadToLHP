#include <stdio.h>
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
int main_task_2(){
    int d,n;
    string str;
    vector<string> vec_ques {};
    vector<string> vec_ans {};
    ifstream Inp;
    ofstream Oup;
    Inp.open("Test.txt");
    Oup.open("Test_out.txt");
    Inp>>d;
    Inp>>n;
    for (int i=0 ; i<=d; ++i) {
        getline(Inp, str);
        vec_ques.push_back(str);
    }
    for (int i=0 ; i<d; ++i) {
        getline(Inp, str);
        vec_ans.push_back(str);
    }
    vec_ques.erase(vec_ques.begin());
    vector<string> vec_zero {vec_ques};
    size_t index {0};
    
    index = 0;
    for (auto items:vec_ques){
        while (items.find('0')!=string::npos) {
            size_t found = items.find('0');
            items.erase(found,1);
        }
        vec_ques.at(index) = items;
        ++index;
    }
    index = 0;
    for (auto items:vec_ques){
        for (auto item:vec_ans){
            if (items.length()==item.length()) {
                items = item;
                vec_ques.at(index)=items;
                ++index;
            }
        }
    }
    index = 0;
    for (auto items:vec_zero){
        for (auto item:items){
            if (!isdigit(item)&&item!='\0' ){
                size_t found = items.find(item);
                items.erase(found,1);
            }
        }
        vec_zero.at(index) = items;
        ++index;
    }
    cout<<"======"<<endl;
    for (auto items:vec_ques){
        cout<<items<<endl;
    }
    cout<<"======"<<endl;
    for (auto items:vec_zero){
        cout<<items<<endl;
    }
    cout<<"======"<<endl;
    for (auto items:vec_ans){
        cout<<items<<endl;
    }
    
    cout<<"======"<<endl;
    index = 0;
    for (auto items:vec_zero) {
        size_t found = items.find('1');
        items.replace(found, found+vec_ques.at(index).length()-1, vec_ques.at(index));
        vec_zero.at(index)=items;
        ++index;
    }
    cout<<"============="<<endl;
    for (auto item:vec_zero){
        Oup<<item<<endl;
    }
    Inp.close();
    Oup.close();
    return 0;
}
