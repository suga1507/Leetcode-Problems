int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize)
{
    int *ans = (int*)malloc(numsSize * sizeof(int));

    for(int i = 0; i < numsSize; i++)
    {
        int count = 0;

        for(int j = 0; j < numsSize; j++)
        {
            if(nums[j] < nums[i])
            {
                count++;
            }
        }

        ans[i] = count;
    }

    *returnSize = numsSize;

    return ans;
}