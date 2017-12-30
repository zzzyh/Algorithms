class Solution:
  def twoSum(self, num, target):
    """
    :type nums: List[int]
    :type target: int
    :rtype List[int]
    """
    hmap = {}
    for idx, val in enumerate(num):
      hmap.setdefault(val,[]).append(idx)

    for idx, val in enumerate(num):
      comp = target - val
      if((comp in hmap)  and idx != hmap[comp][0]):
        return (idx, hmap[comp][0]) 




#num=[2,7,11,15]
#target = 9

num = [3,2,4]
target = 6

s = Solution()
res = s.twoSum(num,target)
print(res)
