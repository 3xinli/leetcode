class Solution {
public:
    int maxArea(vector<int>& height) {
        int water=0,i=0,j=height.size()-1;
        while(i<j)
        {
            int h=min(height[j],height[i]);
            water=max(h*(j-i),water);
            while(height[i]<=h && i<j)
                i++;
            while(height[j]<=h && i<j)
                j--;
        }
        return water;
    }
};
