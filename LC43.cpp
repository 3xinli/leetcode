class Solution {
public:
    string multiply(string num1, string num2) {
        int size1=num1.size(),size2=num2.size(),carry=0;
        string s="";
        for(int j=1;j<size1+size2;j++)
        {
            int sum=carry;
            for(int j1=1;j1<=max(size1,size2);j1++)
            {
                int j2=j+1-j1;
                int dig1,dig2;
                dig1=(size1-j1>=0 && j1>0)?(num1[size1-j1]-'0'):0;
                dig2=(size2-j2>=0 && j2>0)?(num2[size2-j2]-'0'):0;
                //cout<<"dig1"<<" "<<dig1<<" "<<"dig2"<<" "<<dig2<<endl;
                sum+=(dig1*dig2);
            }
            //cout<<"sum"<<" "<<sum<<endl;
            s=(char)((sum%10)+'0')+s;
            carry=sum/10;
        }
        if(carry!=0)
            s=to_string(carry)+s;
        int i;
        for(i=0;i<s.size();i++)
            if(s[i]!='0')
                break;
        s=s.substr(i,s.size()-i);
        return (s=="")?"0":s;
    }
};
