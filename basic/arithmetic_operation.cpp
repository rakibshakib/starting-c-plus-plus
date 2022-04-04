#include<iostream>
#include<conio.h>
#include<iomanip>

 using namespace std;
  int main(){
    float num1, num2;
    cout<<"Enter the value of num1 and num2 : "<<endl;
    cin>>num1>>num2;
    cout<<showpoint;
    cout<<setprecision(4);

    float sum = num1 + num2 ;
    cout<<"Sum is : "<<sum<<endl;

    float subtration = num1 - num2 ;
    cout<<"subtration is : "<<subtration<<endl;

    float mult = num1 * num2 ;
    cout<<"mult is : "<<mult<<endl;

  //  int rem = num1 % num2 ;
  //  cout<<"reminder is : "<<rem<<endl;

    float div = (float) num1 / (float) num2; // type casting ..
    cout<<"Division is : "<<div<<endl;

    getch();
  }
