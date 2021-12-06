#include<iostream>
using namespace std;

class Base1{
    protected:
    int x;
    public:
    void set_base1(int a){
        x=a;
    }

};
class Base2{
    protected:
    int y;
    public:
    void set_base2(int b){
        y=b;
    }
};

class Derived :public Base1,public Base2{
    public:
    void show(){
        cout<<"The value of base1 is "<<x<<endl;
        cout<<"the value of base2 is "<<y<<endl;
        cout<<"The sum of these vaue is "<<(x+y)<<endl;
    }
};


int main(){
    Derived d;
    d.set_base1(25);
    d.set_base2(4);
    d.show();
    return 0;

}