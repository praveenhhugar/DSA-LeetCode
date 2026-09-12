/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    int i;
    int sum=0;
    int *result=(int*)malloc(numsSize*sizeof(int));
    *returnSize=numsSize;

    for(i=0;i<numsSize;i++)
    {
        sum = sum+nums[i];
        result[i]=sum;
    }
    return result;
}