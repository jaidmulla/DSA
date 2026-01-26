class Solution(object):
    def majorityelement(self,nums):
        count =0
        candidate =None

        for num in nums:
            if count ==0:
                candidate=nums
            
            count += 1 if num==candidate else -1
        return candidate