#include<iostream>
using namespace std;

class Student{
    protected:
    int roll_no;
    public:
    void set_number(int a){
        roll_no=a;
    }
    void print_number(){
        cout<<"Your roll number is "<<roll_no<<endl;
    }
};

class Test : virtual public Student{
    protected:
    float pro,dec,ps;
    public:
    void set_marks(float m1,float m2,float m3){
        pro=m1;
        dec=m2;
        ps=m3;
    }
    void print_marks(){
        cout<<"mark obtained in programming 2 is "<<pro<<endl;
        cout<<"mark obtained in Digital e c is "<<dec<<endl;
        cout<<"mark obtained in pand s is "<<ps<<endl;
    }

};

class Sports:virtual public Student{
    protected:
    float score;
    public:
    void set_score(float sc){
        score=sc;
    }
    void print_score(){
        cout<<"Your PT score is "<<score<<endl;
    }
};

class Result : public Test,public Sports{
    private:
    float total;
    public:
    void display()
    {
        total=pro+dec+ps;
        print_number();
        print_marks();
        print_score();
        cout<<"Your total score is : "<<total<<endl;
    }
    
};

int main(){
    Result r;
    r.set_number(1);
    r.set_marks(98.9,89.7,78.9);
    r.set_score(87.0);
    r.display();
    return 0;
}