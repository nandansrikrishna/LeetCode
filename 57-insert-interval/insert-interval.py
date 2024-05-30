class Solution:
    def insert(self, intervals: List[List[int]], newInterval: List[int]) -> List[List[int]]:
        if len(intervals) == 0:
            return [newInterval]
        
        result = []
        currInterval = newInterval
        added = False
        for interval in intervals:
            if currInterval[0] > interval[1]:
                result.append(interval)
            elif currInterval[1] < interval[0]:
                if not added:
                    result.append(currInterval)
                    added = True
                result.append(interval)
            else:
                currInterval[0] = min(currInterval[0], interval[0])
                currInterval[1] = max(currInterval[1], interval[1])

        if not added:
            result.append(currInterval)
        
        return result