#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
#include <algorithm>  
#include<vector>

using namespace std;

int main(){

    int n;
    cin>>n;
    int ans[n+2];
    for(int i=0;i<n+2;i++){
        ans[i]=i;
    }
    if (n==1){
        cout<<1;
    }
    else if (n==2){
        cout<<2<<endl;
    }
    else {

        
        for(int i=2;i<n+1;i++){
           
            
            

            for(int j=i+1;j<n+2;j++){
                if(j%i==0 && ans[j]>ans[i]){
                    
                    ans[j]=ans[i];
                    
                }
                else if(j%i==0 && ans[j]<ans[i]){
                    ans[i]=ans[j];
                }
                
               
            }
            
           

        }
        int z=ans[2];
        int res=0;

        for(int i=2;i<n+2;i++){
            if(ans[i]>z){
                res++;
                z=ans[i];

        }
        }
        cout<<res+1<<endl;

    }
}