class Solution {
public:
    string getPermutation(int n, int k) {
        int array[n]={0};
        for(int i=1;i<=n;i++)
            array[i-1]=i;
        int loop=1;
        while(loop<k && next_permutation(array,array+n))
            loop++;
        string result="";
        for(int i=0;i<n;i++)
            result+=(array[i]+'0');
        return result;
    }
};
