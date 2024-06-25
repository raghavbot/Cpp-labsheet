//Write a program that displays the current monthly salary of chief executive officer, information officer, and system analyst, programmer that has been increased by 9, 10, 12, and 12 percentages respectively in year 2010. Let us assume that the salaries in year 2009 are
//Chief executive officer Rs. 35000/m
//Information officer Rs. 25000/m
// System analyst Rs. 24000/m
// Programmer Rs. 18000/m
// Make a function that takes two arguments; one salary and the other increment. Use proper default argument.
#include<iostream>
using namespace std;
int calculateSalary(float salary,float inc){
    return salary + (salary * inc / 100);
}
int main() {
    float ceo_salary = 35000;
    float info_officer_salary = 25000;
    float sys_analyst_salary = 24000;
    float programmer_salary = 18000;

    float ceo_increment = 9;
    float info_officer_increment = 10;
    float sys_analyst_increment = 12;
    float programmer_increment = 12;
    
    float ceo_salary_2010 = calculateSalary(ceo_salary, ceo_increment);
    float info_officer_salary_2010 = calculateSalary(info_officer_salary, info_officer_increment);
    float sys_analyst_salary_2010 = calculateSalary(sys_analyst_salary, sys_analyst_increment);
    float programmer_salary_2010 = calculateSalary(programmer_salary, programmer_increment);
    cout << "Salaries in Year 2010:" << endl;
    cout << "Chief Executive Officer: Rs. " << ceo_salary_2010 << "/month" << endl ;
    cout << "Information Officer: Rs. " << info_officer_salary_2010 << "/month" << endl;
    cout << "System Analyst: Rs. " << sys_analyst_salary_2010 << "/month" << endl;
    cout << "Programmer: Rs. " << programmer_salary_2010 << "/month" << endl;
  
}
