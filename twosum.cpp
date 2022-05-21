//using c++
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize=2;
    int *ret=(int*)malloc(2*sizeof(int)),i,j,temp;
    for(i=0;i<numsSize;i++){
        temp=target-nums[i];
        for(j=i+1;j<numsSize;j++){
            if(temp==nums[j]){
                ret[0]=i;
                ret[1]=j;
                return ret;
            }
        }
    }
    return ret;
}