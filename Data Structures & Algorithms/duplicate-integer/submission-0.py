class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:

        count={}

        for num in nums:

            if num not in count:
                count[num]=0
            count[num]+=1

            if count[num]>1:
                return True

        


        return False
        