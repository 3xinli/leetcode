class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        map<string,int> check;
        int index=0;
        for(int i=0;i<strs.size();i++)
        {
            string tmp=strs[i];
            sort(tmp.begin(),tmp.end());
            if(check.find(tmp)==check.end())
            {
                check[tmp]=index;
                result.push_back(vector<string>());
                result[index].push_back(strs[i]);
                index++;
            }
            else
                result[check.find(tmp)->second].push_back(strs[i]);
            
        }
        return result;
    }
};
