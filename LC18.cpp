class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        vector<int> tmp;
        if(nums.size()<4)
            return result;
        sort(nums.begin(),nums.end());
        map<vector<int>,int> checkdup;
        for(int i=0;i<nums.size()-3;i++)
        {
            for(int j=i+1;j<nums.size()-2;j++)
            {
                int p1=j+1,p2=nums.size()-1;
                while(p1<p2)
                {
                    int sum=nums[i]+nums[j]+nums[p1]+nums[p2];
                    if(sum==target)
                    {
                        tmp.push_back(nums[i]);
                        tmp.push_back(nums[j]);
                        tmp.push_back(nums[p1]);
                        tmp.push_back(nums[p2]);
                        if(checkdup[tmp]==0)
                        {
                            result.push_back(tmp);
                            checkdup[tmp]=1;
                        }
                        p1++;
                        tmp.clear();
                    }
                    else if(sum>target)
                        p2--;
                    else
                        p1++;
                }
            }
        }
        return result;
    }
};
