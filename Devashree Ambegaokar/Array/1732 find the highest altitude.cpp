class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int> prefix(n + 1, 0);  
        int maxi = 0; 

        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + gain[i]; 
        }

        for (int i = 0; i <= n; i++) {
            maxi = max(maxi, prefix[i]);
        }

        return maxi;
    }
};
//Time complexity  and Space Complexity = O(n)