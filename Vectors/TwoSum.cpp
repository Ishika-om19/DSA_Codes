#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i=0;i<nums.size();i++){
            for (int j=i+1;j<nums.size();j++){
                if(nums[i] + nums[j] == target){
                    return {i,j};
                }
            }
        }
        return{};
    }
};

int main(){
    vector<int> nums(4);
    cout<<"Enter nums elements";
    for(int i=0; i<nums.size();i++){
        cin>>nums[i];
    }
    int target;
    cout<<"Enter target value";
    cin>>target;
    Solution s;
    vector<int> ans= s.twoSum(nums, target);
    cout<< ans[0]<< " " << ans[1];
    return 0;
}