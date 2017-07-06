class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red=0,white=0,blue=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                red++;
            else if(nums[i]==1)
                white++;
            else if(nums[i]==2)
                blue++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(i<red)
                nums[i]=0;
            else if(i<white+red)
                nums[i]=1;
            else
                nums[i]=2;
        }
    }
};