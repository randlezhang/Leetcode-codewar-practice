class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
            min_num = ['True']*(len(nums)+1)
            for i in nums:
                if i <= len(nums) and i > 0: min_num[i-1] = 'False'
            return min_num.index('True')+1
