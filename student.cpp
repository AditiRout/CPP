#include<iostream>

using namespace std;

class student{
    protected:
    int rno, sum = 0, i, marks[5];  
    public:
    void details(){
        cout << " Enter the Roll No: " << endl;  
            cin >> rno;  
  
        cout<<"Enter the marks  :"<<endl;
        for(int i=0;i<5;i++){
            cin>>marks[i];
        }
        for ( i = 0; i < 5; i++)  
            {  
                // store the sum of five subject  
            sum = sum + marks[i];  
            }  
        }  

    };


class sports{
    protected:  
    int s_mark;   
      
    public:  
          
        void get_mark()  
        {  
            cout << "\n Enter the sports mark: ";  
            cin >> s_mark;  
            }     

};


class answer:public sports,public student{
    
    int average;
    public:
    void display(){
        average=s_mark+sum;
        cout<<average/6<<" this is the avg.mark"<<endl;
    }
};

int main ()  
{  
    answer obj; // create an object of the derived class  
  
    // call the member function of the base class  
    obj.details();  
    obj.get_mark();  
    obj.display();  
}  