# url = https://leetcode.com/problems/contains-duplicate/

class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        hasset = set()
        for i in nums:
            if i in hasset:
                return True
            else:
                hasset.add(i)
        return False