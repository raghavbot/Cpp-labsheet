#include<iostream>
using namespace std;
class celsius{
    private:
    float temp;
    public:
    float toFahrenheit(float insert){
        
        temp=(insert * 1.8) + 32;
        return temp;
    }
};
class fahrenheit{
    private:
    float temp;
    public:
    float tocelsius(float insert){
        
        temp= (insert - 32) / 1.8;
        return temp;
    }
};
int main(){
celsius c1;
fahrenheit f1;
float temp1,temp2;
cout<<"Enter the value in celsius to convert in fahrenheit: ";
cin>>temp1;
temp1=c1.toFahrenheit(temp1);
cout<<temp1<<endl;
cout<<"Enter the value in fahrenheit to convert in celsius: ";
cin>>temp2;
temp2=f1.tocelsius(temp2);
cout<<temp2;

}
