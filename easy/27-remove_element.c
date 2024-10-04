#include <stdio.h>

int removeElement(int* nums, int numsSize, int val) {
    int unique_elements =0;
    for(int i =0;i<numsSize;i++){
        if(nums[i] != val){
            nums[unique_elements] = nums[i];
            unique_elements++;
        }
    }
    return unique_elements;
}

int main(){

    int nums[] = {3, 2, 2, 3};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int val = 3;
    int k = removeElement(nums, numsSize, val);
    printf("%d", k);
    for(int i = 0;i<k;i++){
        printf("%d ", nums[0]);
    }
    return 0;
}