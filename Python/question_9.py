class Solution:
    def isPalindrome(self, x: int) -> bool:
        
        #encountered bug: negative number causes runtime error
        wasnegative = False
        y = abs(x)
        if x < 0:
            wasnegative = True
        
        checkarray = [int(i) for i in str(y)]    
        reversearray = checkarray[::-1]
        
        if checkarray == reversearray and wasnegative != True:
            return True #not returning true
        else:
            return False
            