#include<stdio.h>

int searchInsert(int* nums, int numsSize, int target){;
    int i;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]>=target) //checks if the current element is greater than or equal to the target
        {
            return i;
        }
    }
    return numsSize;
}