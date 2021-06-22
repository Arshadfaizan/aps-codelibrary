int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *ars=malloc(sizeof(int)*2);
    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[i]+nums[j]==target)
              {
                ars[0]=i;
                ars[1]=j;
                *returnSize=2;
                return ars;
               
              }
            
        }
    }
 return NULL;
}
