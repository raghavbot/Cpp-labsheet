#include<iostream>
using namespace std;
class carpark{
    private:
    int car_id;
    int chargeperhour;
    float time;
    public:
   void setcar_id(int id){
    car_id=id;
   }
   void setcharge(int charge ){
    chargeperhour=charge;
   }
   void parkedtime(float timeparked){
    time=timeparked;
   }
   void totalcharge(){
    cout<<"Car Id:"<<car_id<<endl;
    cout<<"Charges: "<<chargeperhour*time<<endl;
   }
   void totaltime(){
     cout<<"Car Id:"<<car_id<<endl;
     cout<<"Time: "<<time<<" hours"<<endl;
   }

};
int main(){
    carpark c1;
    int id,charge;
    float time;
    cout<<"Enter the Car ID number: "<<endl;
    cin>>id;
    c1.setcar_id(id);
    cout<<"Enter the Charge Per Hour: "<<endl;
    cin>>charge;
    c1.setcharge(charge);
    cout<<"Enter the time: "<<endl;
    cin>>time;
    c1.parkedtime(time);
    c1.totalcharge();
    c1.totaltime();
    
}