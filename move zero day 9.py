class solution(object):
    def movezeroes(self, nums):

        k=0

        for i in range (len(nums)):
            if nums[i]!=0:
                nums[k],nums[i]=nums[i],nums[k]
                k+=1