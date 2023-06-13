#include "default.h"

//给定两个数组 nums1 和 nums2 ，返回 它们的交集 。输出结果中的每个元素一定是 唯一 的。我们可以 不考虑输出结果的顺序 。
//示例 1：
//输入：nums1 = [1, 2, 2, 1], nums2 = [2, 2]
//输出：[2]
// 
//示例 2：
//输入：nums1 = [4, 9, 5], nums2 = [9, 4, 9, 8, 4]
//输出：[9, 4]
//解释：[4, 9] 也是可通过的

int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int hash[1000] = { 0 };
    int lessSize = nums1Size > nums2Size ? nums2Size : nums2Size;
    int* res = (int*)malloc(sizeof(int) * lessSize);
    int index = 0;
    int i;
    for (i = 0; i < nums1Size; ++i)
    {
        hash[nums1[i]] = 1;
    }
    for (i = 0; i < nums2Size; ++i)
    {
        if (hash[nums2[i]])
        {
            res[index] = nums2[i];
            ++index;
            --hash[nums2[i]];       /*防止出现第二次，在出现第一次时减掉*/
        }
    }
    *returnSize = index;
    return res;
}

int main()
{
    int nums1[] = { 1,2,2,1 };
    int nums2[] = { 2,2 };
    int nums1Size = sizeof(nums1) / sizeof(nums1[0]);
    int nums2Size = sizeof(nums2) / sizeof(nums2[0]);
    int* returnSize = (int*)malloc(sizeof(int));
    int* res = intersection(nums1, nums1Size, nums2, nums2Size, returnSize);

    return 0;
}