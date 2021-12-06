#include<iostream>

using namespace std;

class student{
    protected:
    int roll_no;
    public:
    void set_roll_no(int r);
    void get_roll_no();
};
void student::set_roll_no(int r){
    roll_no=r;
}
void student ::get_roll_no(){
    cout<<"The roll umber is "<<roll_no<<endl;
}

class Exam :public student
{
    protected:
    float maths;
    float phy;
    public:
    void set_marks(float,float);
    void get_marks();

};
void Exam::set_marks(float n1,float n2){
    maths=n1;
    phy=n2;
}
void Exam::get_marks(){
    cout<<"the mak obtained in maths is"<<maths<<endl;
    cout<<"avg.marks is"<<(maths+phy)/2<<endl;
}

class Result :public Exam{
    float avg;
    public:
    void display(){
        get_roll_no();
        get_marks();
        cout<<"Avg.mark is "<<(maths+phy)/2<<endl;
    }

};

int main(){
    Result x;
    x.set_roll_no(9);
    x.set_marks(3.6,7.8);
    x.get_roll_no();
    x.display();
    return 0;

}