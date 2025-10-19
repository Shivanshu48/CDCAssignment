class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();

        if(n<=2) return n;
        int maxl=2, currl=2;
        for(int i=2;i<n;i++){
            if(nums[i] == nums[i-1] + nums[i-2]){
                currl++;
                maxl=max(maxl,currl);
            }
            else{
                currl=2;
            }
        }
        return maxl>=3 ? maxl : 2;
    }
};
