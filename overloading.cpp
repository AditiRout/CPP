//when 2 or more functions sshare the same name they are said to be overloaded
#include<iostream>
#include<ctime>

using namespace std;
void date(string d){
    cout<<"date is "<<d<<endl;
}
void date(int d,int m,int y){
    cout<<d<<":"<<m<<":"<<y<<endl;
}
int main(){
    date("31.9.21");
    date(2,6,21);
    return 0;
}