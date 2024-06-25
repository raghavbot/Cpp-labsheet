//Assume that employee will have to pay 10 percent income tax to the government. Ask user to enter the employee salary. Use inline function to display the net payment to the employee by the company.
#include<iostream>
using namespace std;
inline int payment(int a){
    int b=a;
    a=0.1*a;
    b=b-a;
    return b;
}
int main(){
    int a;
    cout<<"Enter the salary:";
    cin>>a;
    cout<<"Net salary is :"<<payment(a);
}