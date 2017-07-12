class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int begin=0,end=nums.size()-1;
        if(nums.size()==1)
            if(nums[0]!=target)
                return 0;
        while(begin<=end)
        {
            int mid=begin+(end-begin)/2;
            if(nums[mid]==target)
                return 1;
            vector<int> a(nums.begin(),nums.begin()+mid),b(nums.begin()+mid+1,nums.end());
            return search(a,target) || search(b,target);
        }
        return 0;
    }
};
