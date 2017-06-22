class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> path;
        map<vector<int>,int> checkdup;
        sort(candidates.begin(),candidates.end());
        findcombination(checkdup,result,candidates,path,target,0);
        return result;
    }
    
    void findcombination(map<vector<int>,int> &checkdup,vector<vector<int>> &result, vector<int> &candidates,vector<int> &path, int target, int start)
    {
        if(target==0)
        {
            if(checkdup[path]==0)
                result.push_back(path);
            checkdup[path]=1;
            return;
        }
        else if(target<0)
            return;
        for(int i=start;i<candidates.size();i++)
        {
            path.push_back(candidates[i]);
            findcombination(checkdup,result,candidates,path,target-candidates[i],i+1);
            path.pop_back();
        }
    }
};
