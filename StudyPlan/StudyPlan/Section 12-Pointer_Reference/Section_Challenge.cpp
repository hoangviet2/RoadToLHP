//
//  Section_Challenge.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 03/01/2021.
//

#include <iostream>
#include <vector>

using namespace std;
int* apply_all (const int *, size_t,const int * , size_t);
void print_array (const int * ,size_t);

int mainpointer(){
    const size_t size_1 {5};
    const size_t size_2 {3};
    
    int array_1 []{1,2,3,4,5};
    int array_2 []{10,20,30};
    
    cout<<"Array 1: "<<endl;
    print_array(array_1, size_1);
    
    cout<<"Array 2: "<<endl;
    print_array(array_2, size_2);
    
    int *result = apply_all(array_1, size_1, array_2, size_2);
    constexpr size_t result_size {size_1*size_2};
    cout<<"Result: "<<endl;
    print_array(result, result_size);
    delete [] result;
    cout<<endl;
    return 0;
}
int* apply_all (const int *const array1, size_t size_1,const int *const array2, size_t size_2){
    int *new_arg {};
    size_t index {0};
    new_arg = new int [size_1*size_2];
    for (size_t i{0}; i<size_2; ++i){
        for (size_t j{0}; j<size_1; ++j){
            new_arg[index] = array1[j]*array2[i];
            ++index;
        }
    }
    return new_arg;
}
void print_array(const int *const arg, size_t size){
    cout<< "[";
    for (size_t index{0};index<size;++index)
        cout<<arg[index]<<" ";
    cout<<"]";
    cout<<endl;
}
