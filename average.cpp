#include<iostream>

using namespace std;

class student{
    
    public:
    int roll;
    int maths;
    int phy;
    int chem;

    void set_marks(int r,int m,int p,int c){
        roll=r;
        maths=m;
        phy=p;
        chem=c;
    }
};

class test:public student{
    int avg;
    public:
    void avg_mark(){
        avg=(maths+phy+chem)/3;
        cout<<"average mark of roll id "<<roll<<" is "<<avg<<endl;
    }
};

int main(){
    test t1;
    t1.set_marks(3,45,56,78);
    t1.avg_mark();
    return 0;
}