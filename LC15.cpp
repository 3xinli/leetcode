class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> output;
        vector<int> trip;
        if(nums.size()<3)
            return output;
        map<vector<int>,int> checkdup;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++)
        {
            int pt1=i+1,pt2=nums.size()-1;
            int target=-nums[i];
            while(pt1<pt2)
            {
                trip.clear();
                if(nums[pt1]+nums[pt2]==target)
                {
                    trip.push_back(nums[i]);
                    trip.push_back(nums[pt1]); 
                    trip.push_back(nums[pt2]);
                    if(checkdup[trip]==0)
                    {
                        output.push_back(trip);
                        checkdup[trip]=1;
                    }
                    pt1++;
                }
                else if(nums[pt1]+nums[pt2]>target)
                    pt2--;
                else
                    pt1++;
            }
        }
        return output;
    }
};
