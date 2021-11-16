#include<iostream>

using namespace std;

class complex{

    int a;
    int b;
    public:
    complex();
    void setData(int v1,int v2){
        a=v1;
        b=v2;
    }
    void setSum(complex o1,complex o2 ){
        a=o1.a+o2.a;
        b=o1.b+o2.b;
    }
    void print(){
        cout<<"The complex number is"<<a<<"+"<<b<<"i"<<endl;

    }
};

complex::complex(){
    //initialise
    a=0;
    b=0;
    cout<<"test"<<endl;
}
int main(){
    complex c1, c2,c3;
    
    c1.print();
    c2.print();
    c3.print();
}