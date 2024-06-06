#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size();
        vector<int> ans;
        for(int i = 0; i < len; i++)
            for(int j = i + 1; j < len; j++)
                if(nums[i] + nums[j] == target) {  
                    ans.push_back(i);  
                    ans.push_back(j);  
                    return ans;  
                }
        return ans; 
    }
};

// Example usage:
int main() {
    Solution solution;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> ans;

    ans = solution.twoSum(nums, target);
    for(int i = 0; i < ans.size(); ++i)
        cout << ans[i] << " ";
    cout << endl;
    return 0;
}
