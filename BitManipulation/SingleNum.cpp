# include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long xorAll = 0;
        for(int num : nums){
            xorAll = xorAll ^ num;
        }
        int bitmask = xorAll ^ (xorAll & (xorAll -1));
        int a = 0;
        int b = 0;

        for(int num : nums){
            if((num & bitmask) == 0){
                a = a ^ num;
            }
            else{
                b = b ^ num;
            }
        }
        return {a, b};
    }
};

int main(){
    Solution s;
    vector<int> nums = {1, 2, 1, 3, 2, 5};
    vector<int> ans = s.singleNumber(nums);
    cout << ans[0]<<" " << ans[1]<< endl;
    return 0;
}