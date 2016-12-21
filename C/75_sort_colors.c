/*
Given an array with n objects colored red, white or blue, 
sort them so that objects of the same color are adjacent, 
with the colors in the order red, white and blue.

Here, we will use the integers 0, 1, and 2 to represent 
the color red, white, and blue respectively.
*/

void sortColors(int* nums, int numsSize) {
    int numRed = 0; // 0 = red
    int numWhite = 0; // 1 = white
    int numBlue = 0; // 2 = blue
    
    for (int i = 0; i < numsSize; i++){
        if (nums[i] == 0){
            numRed++;
        } else if (nums[i] == 1){
            numWhite++;
        } else {
            numBlue++;
        }
    }
    
    for (int j = 0; j < numRed; j++){
        nums[j] = 0;
    }
    
    for (int k = 0; k < numWhite; k++){
        nums[numRed + k] = 1;
    }
    
    for (int l = 0; l < numBlue; l++){
        nums[numRed + numWhite + l] = 2;
    }
}