#include<iostream>

using namespace std;

class complex{

    int a;
    int b;
    public:
    void setData(int v1,int v2){
        a=v1;
        b=v2;
    }
    void setDif(complex o1,complex o2 ){
        a=o1.a-o2.a;
        b=o1.b-o2.b;
    }
    void print(){
        cout<<"The complex number is "<<a<<"+"<<b<<"i"<<endl;

    }
};

int main(){
    complex c1, c2,c3;
    int a,b;
   cout<<"enter values for..c1"<<endl;
   cin>>a>>b;
   c1.setData(a,b);
   cout<<"enter for c2"<<endl;
   cin>>a>>b;
   c2.setData(a,b);
   c3.setDif(c1,c2);
   c3.print();
}