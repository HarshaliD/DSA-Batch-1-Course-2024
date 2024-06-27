class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i] == 0)
                nums[i] = -1;
        }
        int ans =0;
        int sum =0;
        mp[0]=-1;
        for(int i = 0; i<n; i++){
            sum+=nums[i];
            if(mp.find(sum)!=mp.end()){
                ans= max(ans, i-mp[sum]);
            }
            else{
            mp[sum]=i;
            }
        }
        return ans;
    }
};