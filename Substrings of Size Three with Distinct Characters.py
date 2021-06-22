class Solution:
 
    def countGoodSubstrings(self, s: str) -> int:
        cnt=0
        
        #s=s[1:-1]
        #print(s)
        for i in range(len(s)-2):
            g=0
            a=s[i:i+3]
            #print(a)
            duplicates = []
            for char in a:
                if char in duplicates:
                    g=1
                else:
                    duplicates.append(char)
            if(g==0):
                cnt+=1
            del duplicates
        return cnt
        
