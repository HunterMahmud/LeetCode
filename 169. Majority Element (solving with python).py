# url = https://leetcode.com/problems/majority-element

class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        cnt = {}
        p = 0
        for i in nums:
            if cnt.get(i)==None:
                cnt[i] = 1
            else:
                cnt[i] = cnt.get(i) + 1
        mx = list(cnt.keys())[0]
        
        for i in list(cnt.keys()):
            if cnt.get(mx)<cnt.get(i):
                mx = i
        return mx
