class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> solution;
        map<vector<int>,int> checkdup;
        findsolution(result,solution,candidates,target,checkdup);
        return result;
    }
    void findsolution(vector<vector<int>> &result,vector<int> &solution,vector<int> &candidates,int target,map<vector<int>,int> &checkdup)
    {
        if(target==0)
        {
            vector<int> tmp=solution;
            sort(tmp.begin(),tmp.end());
            if(checkdup[tmp]==0)
            {
                result.push_back(tmp);
                checkdup[tmp]=1;
            }
            return;
        }
        else if(target<0)
            return;
        for(int i=0;i<candidates.size();i++)
        {
            solution.push_back(candidates[i]);
            findsolution(result,solution,candidates,target-candidates[i],checkdup);
            solution.pop_back();
        }
        
    }
};
