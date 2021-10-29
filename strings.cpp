#include<iostream>
#include<cstring>

using namespace std;
int main(){
    char arr[]={'H','e','l','l','o'};
    string st="WELCOME";
    string h="wow";
    char j[5]= "edur";
    

    cout<<arr<<endl<<st<<endl;
    strcpy(arr,j);//we want char arrays not strings here
    cout<<arr;
    

    return 0;
}