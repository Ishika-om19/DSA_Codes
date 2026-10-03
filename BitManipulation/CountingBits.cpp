# include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
        vector<int> countBits(int num){
            vector<int> ans;
            for(int i =0; i <= num; i++){
                int sum = 0;
                int bitmask = 1;
                for(int j = 0; j < 32; j++){
                    if(i & bitmask){
                        sum++;
                    }
                    bitmask = bitmask << 1;
                }
                ans.push_back(sum);
            }
            return ans;
        }
};

int main(){
    Solution s;
    int num = 5;
    vector<int> ans = s.countBits(num);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}