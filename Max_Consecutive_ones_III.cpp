#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0, right = 0;
        int zeroCount = 0;
        int maxLen = 0;

        while (right < nums.size()) {
            if (nums[right] == 0)
                zeroCount++;

            
            while (zeroCount > k) {
                if (nums[left] == 0)
                    zeroCount--;
                left++;
            }

            maxLen = max(maxLen, right - left + 1);
            right++;
        }

        return maxLen;
    }
};


// left and right pointers for sliding window
// count of zeros in current window
// if current element is 0 increase count of zero
//if we have more than k zeros, we need to shrink window from left
// if the element at left is 0 reduce the zerocount   move the left pointer forward

// update maxLen with the size of current valid window

