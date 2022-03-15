class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        sum = sum(nums)# get all values
        runningtotal = 0

        for i, val in enumerate(nums):
            if (runningtotal) = sum - val - runningtotal:
                return i
            runningtotal = runningtotal + nums(i)


