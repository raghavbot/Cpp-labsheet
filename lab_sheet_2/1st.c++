//Write a program to set a structure to hold a date (mm,dd and yy), assign values to the members of the structure and print out the values in the format 11/28/2004 by function. Pass the structure to the function
#include<iostream>
using namespace std;
struct date
{
    int mm;
    int dd;
    int yy;
};
void show(date dt){
    cout<<dt.mm<<"/"<<dt.dd<<"/"<<dt.yy;

}
int main(){
    struct date dt;
    cout<<"Enter the date in the form of mm/dd/yy";
    cin>>dt.mm>>dt.dd>>dt.yy;
    show(dt);


}
