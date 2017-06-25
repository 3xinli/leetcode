class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> path;
        int size=nums.size();
        for(int i=0;i<(1<<size);i++)
        {
            for(int j=0;j<size;j++)
                if(i&(1<<j))
                    path.push_back(nums[j]);
            result.push_back(path);
            path.clear();
        }
        return result;
    }
};
