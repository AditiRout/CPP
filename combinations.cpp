#include <bits/stdc++.h>
using namespace std;
//to find the list of combinations using recursion and backtracking
void rec(int i, int k, int n, vector<int>& l, vector<vector<int>>& result){
    if(l.size()==k) {
        result.push_back(l);
    } else {
        for(int j=i;j<=n;j++) {
            l.push_back(j);
            rec(j+1, k, n, l, result);
            l.pop_back();
        }
    }
}
vector<vector<int>> combine(int n, int k) {
    vector<vector<int>> result;
    vector<int> l;
    rec(1, k, n, l, result);
    return result;
}
int main(){
    vector<vector<int>> output = combine(4, 2);
    for(auto singleList: output){
        for(auto element: singleList)
            cout<<element<<" ";
        cout<<endl;
    }
}