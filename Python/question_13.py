class Solution:
    def romanToInt(self, s: str) -> int:
        
        Numervals = {
            'I': 1,
            'V': 5,
            'X': 10,
            'L': 50,
            'C': 100,
            'D': 500,
            'M': 1000
        }

        
        #algo thought process: Move through the string, and add values to the total as we go. because the only times there is a subtraction is if there
        total = 0

        reversestring = s.split() ##
        reversestring.reverse() ## we will be running through the reverse string version, as its easier to work with
        
        for numeral in reversestring:
            if reversestring[numeral] < reversestring[numeral+1]: #if its less than the next one then we subtract the next one and skip an interation
                
                currentnum = Numervals.get(reversestring[numerval]) - Numervals.get(reversestring[numerval+1])
                total = total + currentnum
                numeral += 1 #add an extra to the iterable to skip over the next one
            else:
                total = total + Numervals.get(reversestring[numerval])
                
        
        return total
            
        