#include<iostream>

using namespace std;

class employee{
    int id;
    static int count;//common to all objects..belonging to this 
    public:
    
    void setdate(int z){
        cout<<"the id is "<<z<<endl;
        count++;
        cout<<"the member is "<<count<<endl;

    }
    static void test(){
        cout<<"the count is "<<count<<endl;
    }
};

int employee ::count;//to initialise to 0

int main(){
    employee x,y;
    x.setdate(1);
    y.setdate(2);
    employee::test();//to call static void function


}

