class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ans = 0;
        int n = mat.size();
        for(int i =0 ; i<n; i++){
           
                ans+= mat[i][i]+ mat[i][n-i-1]; 
            }
        if(n%2!=0)
            ans=ans-mat[n/2][n/2];
        return ans;
    }
};
time complexity:O(n)
space complexity:O(1)
