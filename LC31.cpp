class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size()==1)
            return;
        int p1,p2;
        vector<int> tmp;
        tmp.push_back(nums[nums.size()-1]);
        int i;
        for(i=nums.size()-2;i>=0;i--)
        {
            tmp.push_back(nums[i]);
            if(nums[i]<nums[i+1])
            {
                p1=i;
                break;
            }
        }
        if(i==-1)
        {
            sort(nums.begin(),nums.end());
            return;
        }
        sort(tmp.begin(),tmp.end());
        for(i=0;i<tmp.size();i++)
        {
            if(tmp[i]>nums[p1])
            {
                int tmpnum=tmp[i];
                for(int j=i;j>0;j--)
                    tmp[j]=tmp[j-1];
                tmp[0]=tmpnum;
                break;
            }
        }
        int k=0;
        for(int j=p1;j<nums.size();j++)
        {
            nums[j]=tmp[k];
            k++;
        }
        return;
    }
};
