//Write a function that passes two temperatures by reference and sets the larger of the two numbers to a value entered by user by using return by reference.
#include<iostream>
using namespace std;
int &max(int &a, int &b){
    if(a>b){
        return a;
    
    }
    else
        return b;
}
int main(){
    int t1,t2;
    cout<<"Enter the two temperature: ";
    cin>>t1>>t2;
    max(t1,t2)=100;
    cout<<"The temperature is: "<<t1<<endl <<t2;

}
