#include <stdio.h>

int searchInsert(int* nums, int numsSize, int target) {
    
    for(int i = 0;i<numsSize;i++){
        if(nums[i] == target){
            return i;
        }
    }
    int i = 0;
    while(i < numsSize && nums[i] < target){
        i++;
    }
    return i;

}

int main(){

    int nums[] = {2, 3, 5, 6};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int target = 7;
    int idk = searchInsert(nums, numsSize, target);
    printf("%d", idk);
    return 0;
}