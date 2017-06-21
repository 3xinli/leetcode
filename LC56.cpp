/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
bool operator < (Interval a, Interval b)
{
    if(a.start<b.start)
        return true;
    return false;
}
class Solution {
public:
    vector<Interval> merge(vector<Interval>& intervals) {
        vector<Interval> result;
        if(intervals.size()==0)
            return result;
        sort(intervals.begin(),intervals.end());
        int i=0,j=1;
        Interval pre=intervals[i];
        while(j<intervals.size())
        {
            Interval cur=intervals[j];
            if(pre.end>=cur.start)
                pre.end=max(pre.end,cur.end);
            else
            {
                result.push_back(pre);
                i=j;
                pre=intervals[i];
            }
            j++;
        }
        result.push_back(pre);
        return result;
    }
};
