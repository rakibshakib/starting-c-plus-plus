#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i;
    double  num1= 10.59990, num2= 12.567;
    char userName[15]= "Rakibul Islam";
    cout<<"number "<<num1<<endl;
    cout<<"name \t "<<userName<<endl;

    for(i=0; i<5; i++)
    {
        num2 = num2 + i;
    }
    cout<<"aftermlooping "<<num2<<endl<<"the value of i "<<i;

    getch();
}
