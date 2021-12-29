class Solution(object):
    def twoSum(self, numbers, target):
        """
        :type numbers: List[int]
        :type target: int
        :rtype: List[int]
        """
        ans = []
        for i in range(len(numbers)):
            for j in range(i):
                if numbers[i] + numbers[j] == target:
                    ans.append(i+1)     
                    ans.append(j+1)
        return sorted(ans)
    
print(Solution.twoSum('',[2,7,11,15],9))