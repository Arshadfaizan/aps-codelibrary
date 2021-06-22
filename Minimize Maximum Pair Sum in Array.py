class Solution:
    def minPairSum(self, nums: List[int]) -> int:
        nums.sort(reverse = False)
        arr=[]
        i = 0
        N=len(nums)
        j = N - 1
        while(i <= j):
            arr.append(nums[i]+nums[j])
            i+=1
            j-=1
        return max(arr)
