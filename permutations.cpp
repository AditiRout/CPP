#include<iostream>
#include<vector>
using namespace std;

class Solution {
    void permutations(vector<int>&nums,int l,vector<vector<int>>&res){
        if(l==nums.size()){
            res.push_back(nums);
            return;
        }
        else{
            for(int i=l;i<nums.size();i++){
                swap(nums[i], nums[l]);// making changes by swapping elements 
                permutations(nums, l+1, res);
                swap(nums[i], nums[l]); // BACKTRACKING: making previous changes original 
            }
        }
    }
    
    
    
    
    
    
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        permutations(nums, 0, res);
        return res;
    }
    void print_2d_vector(const vector< vector<int> > & matrix)
{
    for(auto row_obj : matrix)
    {
        for (auto elem: row_obj)
        {
            cout<<elem<<", ";
        }
        cout<<endl;
    }
    cout<<endl;
}
};
int main(){
    Solution s;
    vector<int>nums;
    for(int i=1;i<4;i++){
        nums.push_back(i);
    }
    vector<vector<int>>result=s.permute(nums);
    s.print_2d_vector(result);
    

}