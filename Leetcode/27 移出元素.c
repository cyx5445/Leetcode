#include "default.h"

/*
����һ������ nums ��һ��ֵ val������Ҫ ԭ�� �Ƴ�������ֵ���� val ��Ԫ�أ��������Ƴ���������³��ȡ�

��Ҫʹ�ö��������ռ䣬������ʹ�� O(1) ����ռ䲢 ԭ�� �޸��������顣

Ԫ�ص�˳����Ըı䡣�㲻��Ҫ���������г����³��Ⱥ����Ԫ�ء�
*/

/*forѭ���������鸲��(��������)*/
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

/*˫ָ�����*/
int removeElement(int* nums, int numsSize, int val)
{
	int slow = 0;	/*��ָ��*/
	int fast = 0;	/*��ָ��*/
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