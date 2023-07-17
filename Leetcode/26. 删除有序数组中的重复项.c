#include "default.h"
/*
����һ�� �������� ������ nums ������ ԭ�� ɾ���ظ����ֵ�Ԫ�أ�ʹÿ��Ԫ�� ֻ����һ�� ������ɾ����������³��ȡ�Ԫ�ص� ���˳�� Ӧ�ñ��� һ�� ��Ȼ�󷵻� nums ��ΨһԪ�صĸ�����

���� nums ��ΨһԪ�ص�����Ϊ k ������Ҫ����������ȷ����������Ա�ͨ����

�������� nums ��ʹ nums ��ǰ k ��Ԫ�ذ���ΨһԪ�أ���������������� nums �г��ֵ�˳�����С�nums ������Ԫ���� nums �Ĵ�С����Ҫ��
���� k ��
*/

int removeDuplicates(int* nums, int numsSize) {
	int slow = 0;
	int fast = 0;
	for (fast = 1; fast < numsSize; ++fast)
	{
		if (nums[fast] != nums[slow])
		{
			++slow;
			nums[slow] = nums[fast];
		}
	}

	return slow + 1;
}

int main()
{
	int nums[] = { 0,0,1,1,1,2,2,3,3,4 };
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	int res = removeDuplicates(nums, numsSize);
	printf("%d\n", res);
	for (int i = 0; i < res; ++i)
		printf("%d ", nums[i]);

	return 0;
}