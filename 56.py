# Definition for an interval.
# class Interval(object):
#     def __init__(self, s=0, e=0):
#         self.start = s
#         self.end = e

class Solution(object):
    def merge(self, intervals):
        """
        :type intervals: List[Interval]
        :rtype: List[Interval]
        """
        #use the sorted function is much faster than: intervals.sort(cmp=lambda x, y: cmp(x.start, y.start))
        #intervals = sorted(intervals, key=lambda i: i.start)
        ans = []
        for interval in intervals:
            #through check whether ans is empty to avoid write the special condition: "not intervals"
            if ans and interval.start <= ans[-1].end:
                e = max(interval.end, ans[-1].end)
                ans[-1].end = e
            else:
                ans += [interval]
        return ans
            