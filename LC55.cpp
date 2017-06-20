class Solution {
public:
    bool canJump(vector<int>& nums) {
        int reachindex=0;
        for(int i=0;i<nums.size()-1 && i<=reachindex;i++)
            reachindex=max(reachindex,i+nums[i]);
        if(reachindex>=nums.size()-1)
            return true;
        return false;
    }
};
