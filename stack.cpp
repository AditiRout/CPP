#include<iostream>
#define SIZE 10
using namespace std;

class stack{
    //elements private to class
    int top=-1;
    char stk[SIZE];
    public:
    //can be accesed in main function
      void push(char ch);
      char pop();
};

void stack ::push(char ch){
    if(top==SIZE){
        cout<<"stack is full";
    }
    else{
        stk[++top]=ch;
    }
}

char stack::pop(){
    if(top==-1){
        cout<<"stack is empty";
    }
    else{
        return stk[top--];
    }
}

int main(){
    //initialize an object
    stack s1;
    bool s=true;
    while (s){
         cout<<"ENTER COMMANDS"<<endl;
         cout<<"1.push  2.pop"<<endl;
         int z;
         cin>>z;
         if(z==1){
          cout<<"enter value: ";
          char ans;
          cin>>ans;
          s1.push(ans);

    }
       if(z==2){
        
          char as=s1.pop();
          cout<<as<<endl;

    }
    }
    return 0;
}