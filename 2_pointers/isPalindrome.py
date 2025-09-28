class Solution:
    def isPalindrome(self, s: str) -> bool:
        res = ""
        for a in s:
            if a.isalnum():
                res += a.lower()

        r = 0
        l = len(res)-1
        while  r<l :
            if res[r] != res[l]:
                return False
            r+=1
            l-=1

        return True

        