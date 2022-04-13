#include<iostream>
using namespace std;


//defining a new datatype
class Car{
    public:
        float price;
        int model_no;
        char name[20];
        void print(){
            cout<<"Name"<<name<endl;
            cout<<"model_no"<<model_no<<endl;
            cout<<"Price"<<price<<endl;
        }
        float get_discounted_price(float x){
            return price*(1.0-x);
        }
        float apply_discount(float x){
            price=price*(1.0-x);
            return price;
        }



};

int main(){

    //create an object 
    Car arr[20]; //store info about max 20-car
    Car c;
    c.price=100;
    c.model_no=112;
    c.name[0]='B';
    c.name[1]='M';
    c.name[3]='\0';
    cout<<c.name<<" Model no"<<c.model_no<<c.price<<" ";
    cout<<sizeof(c)<<endl;//28 bytes
    cout<<sizeof(car)<<endl;

    cout<<"Enter the discount you want to give";
    float discount;
    cin>>discount;
    cout<<c.get_discounted_price(discount);
    c.print();


    return 0;
}