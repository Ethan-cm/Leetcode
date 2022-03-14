class Solution:
    def addBinary(self, a: str, b: str) -> str:
        
        lena = len(a) -1 #get rid of the null 
        lenb = len(b) -1 
        maxlength = max(lena,lenb)
        r = 0
        ans = []
        
        for i in reversed(range(maxlength)):
            carry = r
               
            if a[i] == '1':
                carry += 1
            
            if b[i] == '1':
                carry += 1
            
            if carry == 0:
                ans.append(0)
                carry = 0
                
            elif carry == 1:
                ans.append(1)
                carry = 0 
                
            elif carry == 2:
                ans.append(0)
                carry = 1
                
            elif carry == 3:
                ans.append(1)
                carry = 1
            
        if carry == 1:
            ans.append(1)
                
        return ''.join(map(str, reversed(ans)))