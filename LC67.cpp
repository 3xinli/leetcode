class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.size()-1,j=b.size()-1,carry=0;
        string result;
        while(i>=0 && j>=0)
        {
            int sum=(a[i]-'0')+(b[j]-'0')+carry;
            result=(char)(sum%2+'0')+result;
            carry=sum/2;
            i--;
            j--;
        }
        while(i>=0)
        {
            int sum=(a[i]-'0')+carry;
            result=(char)(sum%2+'0')+result;
            carry=sum/2;
            i--;
        }
        while(j>=0)
        {
            int sum=(b[j]-'0')+carry;
            result=(char)(sum%2+'0')+result;
            carry=sum/2;
            j--;
        }
        if(carry==1)
            result='1'+result;
        return result;
    }
};
