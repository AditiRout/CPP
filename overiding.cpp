#include <iostream>
#include<cstring>

using namespace std;

enum yn{no,yes};
enum color{red,yellow,green,blue};
char *col[]={"red","yellow","green","blue"};


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
      void count(int n){
          cout<<"no.of fruits: "<<n<<endl;
      }
      
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
      void count(int z){
          cout<<"no.of apples: "<<z<<endl;
      }
    
};

class orange:public fruit{
    
    //more methods under this category
    enum yn juice;
    enum yn sour;
    enum yn eating;
    public:
      void seta(char *n,enum color c,enum yn cru,enum yn e,enum yn ck){
          strcpy(name,n);
          clr=c;
          tropical=yes;
          tree=yes;
          juice=ck;
          sour=cru;
          eating=e;
          annual=no;
          perenial=no;

      }
      void show(){
          cout<<name<<"orange is: \n";
          cout<<"tropical:";out(perenial);
          cout<<"juices:";out(juice);
          cout<<"perenial:";out(perenial);
          cout<<col[clr]<<endl;

      }
      void count(int z){
          cout<<"no.of oranges: "<<z<<endl;
      }
    
};

int main(){
    orange o;
    apple a;
    a.seta("red delicious",red,yes,yes,no);
    a.show();
    a.count(9);
    
    o.seta("bright sun",yellow,yes,no,no);
    o.show();

    return 0;
}