int* shuffle(int* nums, int numsSize, int n, int* returnSize)
{
    int *ans = (int*)malloc(numsSize * sizeof(int));

    int index = 0;

    for(int i = 0; i < n; i++)
    {
        ans[index] = nums[i];
        index++;

        ans[index] = nums[i + n];
        index++;
    }

    *returnSize = numsSize;

    return ans;
}