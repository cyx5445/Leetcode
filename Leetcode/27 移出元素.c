#include "default.h"

/*
给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。

不要使用额外的数组空间，你必须仅使用 O(1) 额外空间并 原地 修改输入数组。

元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。
*/

/*for循环遍历数组覆盖(暴力方法)*/
//int removeElement(int* nums, int numsSize, int val) {
//	int i, k;
//	for (i = 0; i < numsSize; ++i)
//	{
//		if (val == nums[i])
//		{
//			for (k = i + 1; k < numsSize; ++k)
//			{
//				nums[k - 1] = nums[k];
//			}
//			--i;
//			--numsSize;
//		}
//	}
//	return numsSize;
//}

/*双指针策略*/
int removeElement(int* nums, int numsSize, int val)
{
	int slow = 0;	/*慢指针*/
	int fast = 0;	/*快指针*/
	for (fast = 0; fast < numsSize; ++fast)
	{
		if (nums[fast] != val)
		{
			nums[slow] = nums[fast];
			++slow;
		}
	}
	return slow;
}

int main()
{
	int nums[] = { 0,1,2,2,3,0,4,2 };
	int val = 2;
	int numsSize = sizeof(nums) / sizeof(nums[0]);

	int res = removeElement(nums, numsSize, val);

	printf("%d\n", res);

	int i;
	for (i = 0; i < numsSize; ++i)
		printf("%d ", nums[i]);

	return 0;
}