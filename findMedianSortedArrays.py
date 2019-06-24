class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        index_median = []
        total =0
        dudu = 0
        if (len(nums1)+len(nums2))%2 == 0:
            index_median.append((len(nums1) + len(nums2)) // 2)
            index_median.append(1)
            dudu = 2
        else:
            index_median.append((len(nums1) + len(nums2)) // 2 + 1)
            dudu =1
        while len(index_median) :
            index = index_median.pop(0)
            while index :
                if len(nums1) == 0 :
                    value =nums2.pop()
                    index-=1
                elif len(nums2) == 0 :
                    value =nums1.pop()
                    index-=1
                else:
                    if nums1[-1] > nums2[-1] :
                        value = nums1.pop()
                    else :
                        value = nums2.pop()
                    index -= 1
                if index == 0 :
                    total += value
        return total/dudu
