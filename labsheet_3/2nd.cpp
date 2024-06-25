#include <iostream>
using namespace std;
class prime{
    private:
    int number,i;
    
    public:
    void show_prime(int a){
        int flag=0;
        for(i=2;i<=a/2;i++){

            if(a%i==0){
                flag++;
                break;
            }
        }
        if(flag==0)
            cout<<"Is prime number"<<endl;
        else
            cout<<"Isn't Prime Number"<<endl;
    }

};
int main(){
    int number;
    char ch;
    prime p;
    do
    {
    cout<<"Enter a number :";
    cin>>number;
    p.show_prime(number);
    cout<<"Do you want to continue: ";
    cin>>ch;
        
    } while (ch == 'y' || ch == 'Y');
    return 0;
    
}