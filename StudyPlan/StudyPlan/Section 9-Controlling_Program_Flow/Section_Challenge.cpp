//
//  Section_Challenge.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 02/01/2021.
//
#include <iostream>
#include <vector>

using namespace std;

void enter_case_1();
void enter_case_2();
void enter_case_3();
void enter_case_4();
void enter_case_5();
vector<int> vec;
int main9(){
    char choice {};
    do{
        cout<<"Please choose an option by pressing the letter below: "<<endl;
        cout<<"P - Print numbers"<<endl;
        cout<<"A - Add a number"<<endl;
        cout<<"M - Display mean of the munbers"<<endl;
        cout<<"S - Display the smallest number"<<endl;
        cout<<"L - Display the largest number"<<endl;
        cout<<"Q - Quit"<<endl;
        cout<<"Please choose a letter: ";
        cin>>choice;
        if (choice=='P' || choice=='p') {
            enter_case_1();
        }else if (choice=='A' || choice=='a') {
            enter_case_2();
        }else if (choice=='M' || choice=='m') {
            enter_case_3();
        }else if (choice=='S' || choice=='s') {
            enter_case_4();
        }else if (choice=='L'  || choice=='l') {
            enter_case_5();
        }else if (choice=='Q'  || choice=='q') {
        }else{
            cout<<"Unknow selection, please try again"<<endl;
        }
        cout<<endl;
    }while(choice!='Q' && choice!='q');
    return 0;
}
void enter_case_1(){
    if (vec.size()!=0){
        for (auto items:vec){
            cout<<"[ ";
            cout<<items<<" ";
            cout<<"]"<<endl;
        }
    }else{
        cout<<"[]-the list is empty";
    }
    cout<<endl;
}
void enter_case_2(){
    int append_number ;
    cout<<"Please add an number to the list: ";
    cin>>append_number;
    vec.push_back(append_number);
    cout<<"Number "<<append_number<<" added"<<endl;
    cout<<endl;
}
void enter_case_3(){
    double average;
    int total {0};
    if (vec.size()!=0){
        for (auto items:vec){
            total+=items;
        }
        average = total/vec.size();
        cout<<"The average of the list is: "<<average<<endl;
    }else{
        cout<<"Unable to calculate the mean - no data"<<endl;
    }
    cout<<endl;
}
void enter_case_4(){
    int first_value ;
    if (vec.size()!=0){
        first_value = vec.at(0);
        for (auto items:vec){
            if(items<=first_value){
                first_value=items;
            }
        }
        cout<<"The smallest number is: "<<first_value<<endl;
    }else{
        cout<<"Unable to determine the smallest number - the list is empty "<<endl;
    }
    cout<<endl;
    
}
void enter_case_5(){
    int first_value ;
    if (vec.size()!=0){
        first_value = vec.at(0);
        for (auto items:vec){
            if(items>=first_value){
                first_value=items;
            }
        }
        cout<<"The smallest number is: "<<first_value<<endl;
    }else{
        cout<<"Unable to determine the largest number - the list is empty "<<endl;
    }
    cout<<endl;
}
