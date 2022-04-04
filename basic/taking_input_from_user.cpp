#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
    int number;
    int num1, num2, sum;
    char name[10];
    cout<<"enter an a integer number ";
    cin>>number;
    cout<<"then number is :"<<number<<endl;
    cout<<"what is your name? ";
    cin>>name;
    cout<<"Hello Mr. "<<name<<" welcome to CPP Programming"<<endl;

    cout<<"enter the value of num1 and num2 :";
    cin>>num1>>num2;
    sum=num1+num2;
    cout<<"summation of num1 and num2 is : "<<sum;
    getch();
}
