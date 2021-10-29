#include<iostream>

using namespace std;
struct school{
    int id;
    string name;
};


int main(){
    school admi;
    admi.id=345;
    admi.name="friend";
    cout<<admi.id<<endl<<admi.name;
    return 0;

}