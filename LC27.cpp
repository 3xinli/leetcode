class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int begin=0,pt=0;
        while(pt<nums.size())
        {
            if(nums[pt]!=val)
            {
                nums[begin]=nums[pt];
                begin++;
            }
            pt++;
        }
        return begin;
    }
};
