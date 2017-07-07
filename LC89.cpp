class Solution {
public:
    vector<int> grayCode(int n) {//4bit
        vector<int> res,resrev;
        if(n==0)
            return {0};
        else if(n==1)
            return {0,1};
        res={0,1};
        int cnt=1;
        while(cnt<n)
        {
            for(int i=res.size()-1;i>=0;i--)
                resrev.push_back(res[i]+(1<<cnt));
            cnt++;
            res.insert(res.end(),resrev.begin(),resrev.end());
            resrev.clear();
        }
        return res;       
    }
};
