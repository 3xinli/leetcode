class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<2)
            return nums.size();
        int begin=0,pt=1;
        while(pt<nums.size())
        {
            if(nums[begin]!=nums[pt])
            {
                begin++;
                nums[begin]=nums[pt];
            }
            pt++;
        }
        return begin+1;
    }
};
