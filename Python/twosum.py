#Learning hashtables, know this problem requires them. I do not claim ownership of this code, this was an exercise in looking at how hash tables work and uses a known solution.
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        #step 1: apply a hash function to nums to allow us to lookup numbers efficiently
        numdic = {} #create dictionary for the 
        
        for i, j  in enumerate(nums): #learned enumerate command, adds a counter to an interable structure

            if j in numdic:
                return [i,numdic[j]]
            else:
                numdic[target - j] = i

        