class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        vector<int> ele;
        map<vector<int>,int> check;
        for(int i=0;i<(1<<nums.size());i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(i&(1<<j))
                    ele.push_back(nums[j]);
            }
            if(check.find(ele)==check.end())
            {
                res.push_back(ele);
                check[ele]=1;
            }
            ele.clear();
        }
        return res;
    }
};
