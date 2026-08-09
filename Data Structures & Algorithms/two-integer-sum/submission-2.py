class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:

        hold={}
        for index, num in enumerate(nums):

            find=target - num

            if find in hold and index!=hold[find]:
                if index>hold[find]:
                    return [hold[find], index]
                if index<hold[find]:
                    return [index, hold[find]]
            hold[num]=index
                
        
        return []
        