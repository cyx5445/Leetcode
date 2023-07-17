#include "default.h"

/*
����һ�� n ��Ԫ������ģ������������� nums ��һ��Ŀ��ֵ target  ��дһ���������� nums �е� target�����Ŀ��ֵ���ڷ����±꣬���򷵻� -1��
����ұ� []
����ҿ� [)
*/

int search(int* nums, int numsSize, int target) {
    int mid;
    int low = 0;
    int high = numsSize - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (target < nums[mid])
            high = mid - 1;
        else if (target > nums[mid])
            low = mid + 1;
        else if (target == nums[mid])
            return mid;
        else
            return -1;
    }
    return -1;
}

int main()
{
    int nums[] = { -1,0,3,5,9,12 };
    int numsSize = 6;
    int target = 9;
    int res = search(nums, numsSize, target);
    printf("%d", res);

}