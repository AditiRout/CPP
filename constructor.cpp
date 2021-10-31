#include<iostream>
#include<cstdlib>

#define SIZE 6
using namespace std;

class queue
{
    int f=-1;
    int r=-1;
    int q[SIZE];
    public:
      queue();
      ~queue();//to initialise
      void enqueue(int z);
      void dequeue();
      void peek(){
          if(f==-1 && r==-1){
              cout<<"empty queue"<<endl;
          }
          else{
              cout<<q[f]<<endl;
          };

      }
    
    

};


queue::queue(){
    
    f=0;
    r=0;

}



queue::~queue() {
    delete q;
}
void queue::dequeue(){
         if((f==-1) && (r==-1))  
    {  
        cout<<"\nQueue is underflow.."<<endl;  
    }  
       else if(f==r)  
      {  
           cout<<"\nThe dequeued element is "<< q[f]<<endl;  
           f=-1;  
           r=-1;  
}   
      else  
      {  
         cout<<"\nThe dequeued element is "<< q[f]<<endl;  
        f=(f+1)%SIZE;  
      }  
    }
void queue:: enqueue(int z){
          if(f==0 && r==0){
              q[r]=z;
              r++;
          }
           if ((f == 0 && r == SIZE-1) || (f == r+1)) {
      cout<<"Queue Overflow \n";
    
         }
          else  
           {  
           r=(r)%SIZE;       
           q[r]=z;     
        }}  


int main(){
    queue q1;
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.dequeue();
    q1.peek();

 
    q1.enqueue(4);
    q1.peek();
    return 0;





}






