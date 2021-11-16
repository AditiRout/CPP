#include<iostream>
#include<cmath>

using namespace std;
class point{
    int a;
    int b;
    public:
    point(int x,int y){
        a=x;
        b=y;

    }
    static void setDif(point o1,point o2 ){
        cout<<"the distance is: "<< pow(pow(o1.a-o2.a,2)+ pow(o1.b-o2.b,2),0.5)<<endl;
    }
    void print(){

        cout<<"x: "<<a<<" y: "<<b<<endl;
    }
};

int main(){
    
    point p1=point(3,2);
    point p2=point(2,5);
    point::setDif(p1,p2);
    p1.print();
    p2.print();
    return 0;



}