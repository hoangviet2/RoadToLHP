//
//  fibonacci.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 05/12/2020.
//

#include<iostream>
#include<curses.h>

using namespace std;

int fibonacci()
{

     // Khai bao bien
     int counter, n;
     long last=1,next=0,sum;
     // Nhap gia tri
     cout<<"Nhap mot so :";
     cin>>n;

     //Tinh chuoi Fibonacci
     while(next<n/2)
     {
      cout<<last <<"  ";
      sum=next+last;
      next=last;
      last=sum;
     }

    
     return 0;
 }
