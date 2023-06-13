#include "default.h"

//������������ nums1 �� nums2 ������ ���ǵĽ��� ���������е�ÿ��Ԫ��һ���� Ψһ �ġ����ǿ��� ��������������˳�� ��
//ʾ�� 1��
//���룺nums1 = [1, 2, 2, 1], nums2 = [2, 2]
//�����[2]
// 
//ʾ�� 2��
//���룺nums1 = [4, 9, 5], nums2 = [9, 4, 9, 8, 4]
//�����[9, 4]
//���ͣ�[4, 9] Ҳ�ǿ�ͨ����

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
            --hash[nums2[i]];       /*��ֹ���ֵڶ��Σ��ڳ��ֵ�һ��ʱ����*/
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