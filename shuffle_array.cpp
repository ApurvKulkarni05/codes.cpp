class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        for(int i=0;i<n;i++){
            ans.push_back(nums[i]);
            ans.push_back(nums[i+n]);
        }
        return ans;
    }
};


//A single loop from i = 0 to n - 1, and picking:

//nums[i] → from the first half (x)

//nums[i + n] → from the second half (y)
