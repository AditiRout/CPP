#include<iostream>

using namespace std;

class employee{
    public:
    int id;
    float salary;
    employee(int eid){
        id=eid;
        salary=1000;
    }
    employee(){
        id=10;
        salary=1000;
    }

};


class Derived : public employee{
    int z;
    public:
    void example(){
        cout<<"Just checking whether it works"<<endl;

    }
};

int main(){
    Derived d1;
    d1.example();
    


}