class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result;
        int findbegin=-1,findend=-1,mid,begin=0,end=nums.size()-1;
        while(begin<=end)
        {
            mid=begin+(end-begin)/2;
            if(nums[mid]>target)
                end=mid-1;
            else if(nums[mid]==target)
                end=mid;
            else
                begin=mid+1;
            if(begin==end && nums[mid]==target)
            {
                findbegin=mid;
                break;
            }
        }
        begin=0;
        end=nums.size()-1;
        while(begin<=end)
        {
            mid=begin+(end-begin)/2;
            //cout<<"begin"<<begin<<" "<<"end"<<end<<" "<<"mid"<<mid<<endl;
            if(nums[mid]>target)
                end=mid-1;
            else if(nums[mid]==target)
            {
                findend=mid;
                begin=mid+1;
            }
            else
                begin=mid+1;
        }
        if(findbegin==-1)
            findend=-1;
        result.push_back(findbegin);
        result.push_back(findend);
        return result;
    }
};
