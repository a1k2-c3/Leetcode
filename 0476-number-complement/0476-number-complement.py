class Solution:
    def findComplement(self, num: int) -> int:
        b=bin(num)
        s=list(b)
        print(s)
        for i in range(len(s)):
            if s[i]=='0':
                s[i]=1
            else:
                s[i]=0
        s.pop(0)
        s.pop(1)
        res = int("".join(str(x) for x in s), 2)
        print(res)
        return res
        