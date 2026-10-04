# include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
        int missingNumber(vector<int>& nums){
            int ans =0;
            for (int i=0; i<=nums.size(); i++){
                ans = ans ^ i;
            }
            for(int x: nums){
                ans = ans ^ x;
            }
            return ans;
        }
};

int main(){
    Solution s;
    vector<int> nums = {3, 0, 1};
    int ans = s.missingNumber(nums);
    cout << ans << endl;
    return 0;
}