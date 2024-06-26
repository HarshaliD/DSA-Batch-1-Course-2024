//Day 3
//Question 21
//https://leetcode.com/problems/increasing-triplet-subsequence/description/

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int min1 = INT_MAX, min2 = INT_MAX;
        
        for (int num : nums) {
            if (num <= min1) {
                min1 = num;
            } else if (num <= min2) {
                min2 = num;
            } else {
                return true;
            }
        }
        
        return false;
    }
};

//Time Complexity -> O(n)
