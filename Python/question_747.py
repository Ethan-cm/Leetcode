class Solution:
    def dominantIndex(self, nums: List[int]) -> int:
        
        maxval = max(nums) #get the max valu
        index = 0
        for i, val in enumerate(nums):            
            if 2*nums[i] > maxval and val is not maxval:
                return -1
            if val == maxval:
                index = i
            
        return index