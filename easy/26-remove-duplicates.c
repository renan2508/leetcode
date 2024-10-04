#include <stdio.h>

int removeDuplicates(int *nums, int numsSize) {

    int unique_elements = 1;
    for(int i = 1;i<numsSize;i++){
        if(nums[i] != nums[unique_elements-1]){
            nums[unique_elements] = nums[i];
            unique_elements++;
        }
    }
    return unique_elements;
}

int main(){

    int nums[] = {1, 2, 2, 3};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int k = removeDuplicates(nums, numsSize);
    printf("%d\n", k);
    for(int i = 0;i<k;i++){
        printf("%d ", nums[i]);
    }
    return 0;
}