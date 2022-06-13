class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        sorted_numbers = sorted(nums, reverse=True)
        return sorted_numbers[k-1]
        