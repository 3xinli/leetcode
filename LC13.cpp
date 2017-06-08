class Solution {
public:
    int romanToInt(string s) {
        map<char,int> check;
        check['I']=1;
        check['V']=5;
        check['X']=10;
        check['L']=50;
        check['C']=100;
        check['D']=500;
        check['M']=1000;
        int pt=0,num=0;
        while(pt<s.size())
        {
            string tmp="";
            tmp+=s[pt];
            tmp+=s[pt+1];
            if(pt<s.size()-1 && (tmp=="CM" || tmp=="CD" || tmp=="XC" || tmp=="XL" || tmp=="IX" || tmp=="IV"))
            {
                num+=check[s[pt+1]]-check[s[pt]];
                pt++;
            }
            else
                num+=check[s[pt]];
            pt++;
        }
        return num;
    }
};