//
//  matrix.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 06/12/2020.
//

#include <iostream>
#include <iomanip>
using namespace std;
    
int matix() {
    int i, j;
    int col, row;
      
    cout << "Nhap so cot cua ma tran: ";
    cin >> col;
    cout << "Nhap so hang cua ma tran: ";
    cin >> row;
      
    // khoi tao ma tran
    int matrix[col][row];
      
    cout << "Nhap cac phan tu cua ma tran: \n";
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("matrix[%d][%d] = ", i, j);
            cin >> matrix[i][j];
        }
    }
  
    cout << "Cac phan tu cua ma tran: \n";
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
      
    return 0;
}
