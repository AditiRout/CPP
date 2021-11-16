#include<iostream>
using namespace std;
int count=0;
class num{
    public:
    num(){
        cout<<"count for this block "<<++count<<endl;
    }
    ~num(){
        cout<<"destructor called for "<<count<<endl;
        count--;
    }
};

int main(){
    num n1;{
        cout<<"entering"<<endl;
        cout<<"create more"<<endl;
        num n2,n3;
        cout<<"back to main"<<endl;
    }//destructor has no return type and doesnt return anything
    //constructor
     
}