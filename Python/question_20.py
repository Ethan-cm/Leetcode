class Solution:
    def switchlogic(left, right) -> bool: #function to determine
      
        compliment = {#dictionary holding the compliments of the switch case          
            '{':'}',
            '[':']',
            '(':')',
        } 

        if right == compliment.get(left): #check if its the same as the value as the one it should be
            return True
        else:
            return False
    
    def isValid(self, s: str) -> bool:
        #two pass solution
        #1) Determine the length of the string, if its odd its already invalid. do this to figure out how long the list needs to be for iteration
        #2) create two lists of size n/2 where N is length. then we compare using switch cases
        length = len(s) -1
        half = int(len(s)/2) #just some stuff we have because lol nullterminator
        
        if half % 2 == 0: #check if odd
            return False
        
        for i in range(half): #iterate over the length          
            isvalid = self.switchlogic(s[i], s[length-i])           
            if isvalid == False:
                return False #we dont need to iterate through the entire thing if we find something incorrect
            
        return isvalid
