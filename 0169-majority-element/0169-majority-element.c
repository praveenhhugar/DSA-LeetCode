int majorityElement(int* nums, int numsSize) {
    int count=1;
    int candidate=nums[0];

    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]==candidate)
        {
            count++;
        }
        else
            count--;
        
        if(count==0)
        {
            candidate=nums[i];
            count=1;
        }
    
    }
    return candidate;
}