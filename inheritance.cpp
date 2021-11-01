//when one class is inherited by another the class that is inherited is called base class.The inheriting class is called derived class.
//consider base class b and inheriting one d so the public members of b is easily accessible by d .But the private members of b is not accessible by d in order
//to maintain encapsulation 
#include <iostream>
#include<cstring>

using namespace std;

enum yn{no,yes};
enum color{red,yellow,green,orange};
char *col[]={"red","yellow","green","orange"};


void out(enum yn x){
    //because in enum..we get the indexes
    if(x==no) cout<<"no\n";
    else cout<<"yes\n";
}

class fruit{
    //base class ..here all public methods given
    public:
      enum yn annual;
      enum yn perenial;
      enum color clr;
      enum yn tree;
      enum yn tropical;
      char name[40];
};

class apple:public fruit{
    
    //more methods under this category
    enum yn crunchy;
    enum yn cooking;
    enum yn eating;
    public:
      void seta(char *n,enum color c,enum yn cru,enum yn e,enum yn ck){
          strcpy(name,n);
          clr=c;
          tropical=no;
          tree=yes;
          cooking=ck;
          crunchy=cru;
          eating=e;
          annual=no;
          perenial=yes;

      }
      void show(){
          cout<<name<<"apple is: \n";
          cout<<"tropical:";out(perenial);
          cout<<"cooking:";out(cooking);
          cout<<col[clr]<<endl;

      }
};

int main(){
    apple a;
    a.seta("red delicious",red,yes,yes,no);
    a.show();
    return 0;
}