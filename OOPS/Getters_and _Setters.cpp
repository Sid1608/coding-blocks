#include<iostream>
using namespace std;


//defining a new datatype
class Car{
    private:
        float price;
    public:
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
        //setter
        void set_price(float p){
            float msp=111;
            if(price>0){
                price =p
            }else{
                price=msp;
            }
        }
        //getter
        float get_price(){
            return price;
        }



};

int main(){

    Car c;

    c.model_no=112;
    c.name[0]='B';
    c.name[1]='M';
    c.name[3]='\0';
    c.set_price(100);


    c.print();


    return 0;
}