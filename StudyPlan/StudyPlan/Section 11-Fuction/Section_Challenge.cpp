////
////  Section_Challenge.cpp
////  StudyPlan
////
////  Created by Hoang Viet on 02/01/2021.
////
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//// display appearance
//char displayscreen();
//void functionManager(char,vector<int>);
//// handle for enter P
//void function_enter_P(char,vector<int>);
//// handle for enter A
//void function_enter_A(char,vector<int>);
//// handle for enter M
//double function_enter_M(char,vector<int>);
//// handle for enter S
//int function_enter_S(char,vector<int>);
//// handle for enter L
//int function_enter_L(char,vector<int>);
//// handle for enter  Q
//void function_enter_Q(char);
//
//int main (){
//    vector<int> vec;
//    do{
//        functionManager(displayscreen(),vec);
//    }while (displayscreen()!='Q');
//    return 0;
//}
//char displayscreen(){
//    char choice;
//    cout<<"Welcome to the Matrix"<<endl;
//    cout<<"Please choose an option you want below: "<<endl;
//    cout<<"P - Print numbers of the list"<<endl;
//    cout<<"A - Add an number to the list"<<endl;
//    cout<<"M - The avenger of the numbers in the list"<<endl;
//    cout<<"S - The smallest number of the list"<<endl;
//    cout<<"L - The largest number of the list"<<endl;
//    cout<<"Q - Quit the Matrix"<<endl;
//    cout<<"Please choose your option: ";
//    cin>>choice;
//    return choice;
//}
//void functionManager(char choice, vector<int>vec){
//        switch (choice) {
//            case 'P':
//            case 'p':
//                function_enter_P(choice,vec);
//                break;
//            case 'A':
//            case 'a':
//                function_enter_A(choice,vec);
//                break;
//            case 'M':
//            case 'm':
//                function_enter_M(choice,vec);
//                break;
//            case 'S':
//            case 's':
//                function_enter_S(choice,vec);
//                break;
//            case 'L':
//            case 'l':
//                function_enter_L(choice,vec);
//                break;
//            case 'Q':
//            case 'q':
//                function_enter_Q(choice);
//                break;
//            default:
//                cout<<"Hello"<<endl;
//                break;
//        }
//}
//void function_enter_P(char choice ,vector<int> &vec){
//    cout<<"You choose: "<<choice<<endl;
//    if (vec.size()!=0){
//        for (auto items:vec) {
//            cout<<"[ ";
//            cout<<items<<" ";
//            cout<<"]"<<endl;
//        }
//    }else{
//        cout<<"[]-the list is empty";
//    }
//}
//void function_enter_A(char choice ,vector<int> &vec){
//    int append_number ;
//    cout<<"Please add an number to the list: ";
//    cin>>append_number;
//    vec.push_back(append_number);
//    cout<<"Number "<<append_number<<" added"<<endl;
//    cout<<endl;
//}
//double function_enter_M(char choice ,vector<int> &vec){
//    double reuslt ;
//    int total {0};
//    if (vec.size()!=0){
//        for (auto items:vec){
//            total+=items;
//        }
//        reuslt = total/vec.size();
//        cout<<"The average of the list is: "<<reuslt<<endl;
//    }else{
//        cout<<"Unable to calculate the mean - no data"<<endl;
//        return 0;
//    }
//    return reuslt;
//}
//int function_enter_S(char choice ,vector<int> &vec){
//    int first_value ;
//    if (vec.size()!=0){
//        first_value = vec.at(0);
//        for (auto items:vec){
//            if(items<=first_value){
//                first_value=items;
//            }
//        }
//        cout<<"The smallest number is: "<<first_value<<endl;
//    }else{
//        cout<<"Unable to determine the smallest number - the list is empty "<<endl;
//        return 0;
//    }
//    return first_value;
//}
//int function_enter_L(char choice ,vector<int> &vec){
//    int first_value ;
//    if (vec.size()!=0){
//        first_value = vec.at(0);
//        for (auto items:vec){
//            if(items>=first_value){
//                first_value=items;
//            }
//        }
//        cout<<"The smallest number is: "<<first_value<<endl;
//    }else{
//        cout<<"Unable to determine the largest number - the list is empty "<<endl;
//        return 0;
//    }
//    return first_value;
//}
//void function_enter_Q(char choice){
//    do {
//        cout<<"Are you really want to quit "<<endl;
//        cout<<"[Y/N]";
//    }while(choice!='Y'||choice!='y');
//}
