class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int begin=0,pt=0,flag=0,cur=nums[begin];
        while(pt<nums.size())
        {
            while(nums[pt]==cur && flag<2)
            {
                flag++;
                nums[begin]=nums[pt];
                begin++;
                pt++;
            }  
            if(pt<nums.size() && nums[pt]!=cur)
            {
                cur=nums[pt];
                nums[begin]=nums[pt];
                flag=1;
                begin++;
            }
            pt++;
        }
        return begin;
    }
};
