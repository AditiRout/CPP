#include <iostream>

using namespace std;

class node{
public:
    int data;
    node* next;
    node* prev;

    node(int val){
    data=val;
    next=NULL;
    prev=NULL;
   } };

    void creation(node*& head,int val){
            node *ptr1 = new node(val);
            node *temp = head;
    
    ptr1->next = head;
 
    /* If linked list is not NULL then
    set the next of last node */
    if (head!= NULL)
    {
        while (temp->next != head)
            temp = temp->next;
            temp->next = ptr1;
    }
    else
        ptr1->next = ptr1; /*For the first node */
 
        head= ptr1;

            
           
               
          
            }


    void display(node* &head){

        node* temp=head->next;
        if(head==NULL){
            cout<<"list is empty"<<endl;
        }
        else{
                cout<<head->data;
                while(temp!=head){
                    cout<<temp->data;
                    temp=temp->next;

        }


    }}

int main()
{
    node*head=NULL;
    creation(head,2);
     creation(head,4);
      creation(head,6);
       creation(head,7);
    display(head);
    return 0;
}