class Solution {
public:
    int stringtoint(string s)
    {
        stringstream ss(s);
        int x;
        ss>>x;
        return x;
    }
    void dfs(string s,string &ele,vector<string> &res,int k)
    {
        if((s.size()==1 ||s.size()>1 && s[0]!='0') && k==4 && stringtoint(s)>=0 && stringtoint(s)<=255)
        {
            string tmp=ele;
            ele+=s;
            res.push_back(ele);
            ele=tmp;
            return;
        }
        for(int i=1;i<=3;i++)
        {
            if(s.size()<=i)
                continue;
            string s1=s.substr(0,i),s2=s.substr(i,s.size()-i);
            if(i>1 && s1[0]=='0')
                continue;
            if(stringtoint(s1)>=0 && stringtoint(s1)<=255)
            {
                string tmp2=ele;
                ele+=s1;
                ele+=".";
                dfs(s2,ele,res,k+1);
                ele=tmp2;
            }
        }
        return;
    }
    vector<string> restoreIpAddresses(string s) {
        vector<string> res;
        string ele="";
        if(s.size()>12)
            return res;
        dfs(s,ele,res,1);
        return res;
    }
    
};
