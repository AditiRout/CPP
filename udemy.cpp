#include<iostream>
#include<cstring>

using namespace std;
class Udemy{
    protected:
    string title;
    float rating;
    public:
    Udemy(string s,float r){
        title=s;
        rating=r;
    }
    virtual void display(){
        cout<<"This is c++ Tutorial"<<endl;

    }
};
class UdemyVideo:public Udemy{
    float videoLength;
    public:
    UdemyVideo(string s,float r,float VL):Udemy(s,r){
        videoLength=VL;
    }
    void display(){
        cout<<"This is an amzing video with title "<<title<<endl;
        cout<<"Rating: "<<rating<<"out of 5 "<<endl;
        cout<<"Length of this video is : "<<videoLength<<" minutes"<<endl;
    }
};

class Udemytext:public Udemy{
    int words;
    public:
    Udemytext(string s,float r,int wc ):Udemy(s,r){
        words=wc;

    }
    void display(){
        cout<<"This is an amzing text with title "<<title<<endl;
        cout<<"Rating: "<<rating<<"out of 5 "<<endl;
        cout<<"No of words in this text tutorial is : "<<words<<endl;

    }
};

int main(){
    Udemytext s("donald",4.5,3);
    s.display();
    s.Udemy::display();//to call parent function
    Udemytext k("belro",3.6,3);
    k.display();
    k.Udemy::display();



}