//
//  Task_4.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 23/01/2021.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
void print_vector(vector<vector<double>>);
int main_task_4_PTNK(){
    ifstream Inp;
    ofstream Oup;
    int colums;
    Inp.open("Test.txt");
    Oup.open("Test_out.txt");
    Inp>>colums;
    vector<vector<double>> vec_matrix;
    vec_matrix.resize(colums);
    for (int i=0; i<colums; ++i){
        vec_matrix.at(i).resize(colums);
    }
    for (int i=0; i<colums; ++i) {
        for (int j=0; j<colums; ++j) {
            vec_matrix.at(i).at(j) = 0;
        }
    }
    int loop {0};
    for(int matrix_row {0}; matrix_row<colums;++matrix_row){
        for(int matrix_col {0}; matrix_col<colums;++matrix_col){
            if (matrix_row-(loop*3)==0||matrix_row-(loop*3)==10) {
                vec_matrix.at(matrix_row).at(matrix_col) = 1;
            }else{
                vec_matrix.at(matrix_row).at(matrix_col) = 5;
            }
        }
        ++loop;
    }
    print_vector(vec_matrix);
    Inp.close();
    Oup.close();
    return 0;
}
void print_vector(vector<vector<double>> vec){
    for (auto item:vec){
        for (auto items:item){
            cout<<items<<" ";
        }
        cout<<endl;
    }
}
