class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int dis=INT_MAX,output=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++)
        {
            int p1=i+1,p2=nums.size()-1;
            while(p1<p2)
            {
                int sum=nums[i]+nums[p1]+nums[p2];
                if(sum==target)
                    return target;
                else
                {
                    if(abs(sum-target)<dis)
                    {
                        dis=abs(sum-target);
                        output=sum;
                    }
                    if(sum>target)
                        p2--;
                    else
                        p1++;
                }
            }
        }
        return output;
    }
};
