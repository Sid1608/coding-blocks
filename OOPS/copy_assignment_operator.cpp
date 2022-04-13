#include<iostream>
using namespace std;
//1.constructor 
// that is responsible for creating an object 
// gets called autumatically and only once.
//same name as class name.
//parametrised constructor
//constructor overloading

//2. copy constructor
// -make a copy of the given object
// -exists  by default 
// -when you need define your own copy construcctor
// - shallow copy
// - you have to make your own copy constructor if a deep copy is needed
//3. copy assignment operator
// - copies when you do assignment
// Car d=c; //copy constructor.
// Car d;
//d=c; //copy assignment operator.
//you can write your own copy assignment operator to make a deep copy.


class Car{
    private:
        ce;float pri
    
    public:
        int model_no;
        char *name;
        Car(){
            name=NULL;
        }
        Car(float p,int m,char *n){
            price=p;
            model_no=m;
            name =new char[strlen(n)+1];
            strcpy(name,n);
        }
        //deep copy
        Car(Car &X){
            price=X.price;
            model_no=X.model_no;
            //deep copy
            name=new char[strlen(X.name)+1];
            strcpy(name,X.name);
        }
        void operator=(Car &X){
            price=X.price;
            model_no=X.model_no;
            //deep copy
            name=new char[strlen(X.name)+1];
            strcpy(name,X.name);
        }
        void setprice(float p){
            price=p;
        }
        void print(){
            cout<<"Name"<<name<endl;
            cout<<"model_no"<<model_no<<endl;
            cout<<"Price"<<price<<endl;
        }
};

int main(){
    Car c(100,200,"BMW");//parameterised constructor
    Car d;
    d=c;//copy assignment operator
    d.name[0]='A';
    
    d.setprice(400);
    c.print();
    d.print();

}