#include<iostream>

using namespace std;

class Base {
    public:
    int var1;
    virtual void display(){ //if virtual used den can use base class to call derived class function
        cout<<"Displaying base class var "<<var1<<endl;
    }

};

class Derived :public Base{
    public:
    int var2;
    void display(){
        cout<<"displaying base class var "<<var1<<endl;
        cout<<"displaying Derived class var"<<var2<<endl;
    }
};

int main(){
    Base* base_class_pointer;
    Base obj1;
    Derived obj2;
    base_class_pointer=&obj2;
    base_class_pointer->var1;
    //base_class_pointer->var2;
    base_class_pointer->display();
    return 0;
}