class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,ret=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            sum=max(sum,0);
            ret=max(sum,ret);
        }
        if(ret==0)
        {
            ret=nums[0];
            for(int i=1;i<nums.size();i++)
                if(nums[i]>ret)
                    ret=nums[i];
        }
        return ret;
    }
};
