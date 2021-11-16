#include<iostream>

using namespace std;

class area{
    int r=0;
    int b=0;
    int h=0;
    string name;
    public:
    area(int a,int f){
        b=a;
        h=f;
        cout<<"area of triangle is : "<<0.5*b*h<<endl;
    }
    area(int a,int f,string name){
        b=a;
        h=f;
        if(name=="rectangle"){
            cout<<"area of rectangle: "<<b*h<<endl;
        }

    
    }
    area(int f){
        r=f;
        cout<<"area of circle: "<<3.14*r*r<<endl;
    }
};

int main(){
    area tri=area(3,4);
    area rect=area(4,5,"rectangle");
    area cir=area(3);
    return 0;
}