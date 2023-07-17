#include "default.h"

/*
给定一个 n 个元素有序的（升序）整型数组 nums 和一个目标值 target  ，写一个函数搜索 nums 中的 target，如果目标值存在返回下标，否则返回 -1。
左闭右闭 []
左闭右开 [)
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