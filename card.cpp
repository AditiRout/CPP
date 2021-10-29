#include<iostream>
#include<cstring>
using namespace std;

class card{
    int num;
    string name;
    string title;
    public:
     void store(int num,string name,string title);
     void show();
};

void card::store(int num,string name,string title){
    this->name=name;
    this->num=num;
    this->title=title;
}

void card::show(){
    cout<<num<<" "<<name<<" "<<title<<endl;
}

int main(){
    card c1;
    c1.store(34," akhilesh","why so crazy");
    c1.show();
    return 0;
}