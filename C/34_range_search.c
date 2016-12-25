/*
Given a sorted array of integers, find the starting and ending position 
of a given target value.

Your algorithm's runtime complexity must be in the order of O(log n).

If the target is not found in the array, return [-1, -1].
*/

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    
    int result = binarySearch(nums, 0, numsSize, target);
    
    *returnSize = 2;
    
    int* returnArray;
    returnArray= malloc(2*sizeof(int));
    
    if (result == -1){
        returnArray[0] = -1;
        returnArray[1] = -1;
        return returnArray;
    }
    
    int l;
    int r;
    
    int i = result;
    while (i >= 0 && nums[i] == target){
        i--;
    }
    returnArray[0] = i + 1;
    
    int j = result;
    while (j <= numsSize && nums[j] == target){
        j++;
    }
    returnArray[1] = j - 1;
    return returnArray;
}

// helper function using binary search to find number
// modified from http://quiz.geeksforgeeks.org/binary-search/
int binarySearch(int* arr, int l, int r, int target){
    
   if (r >= l){
        int mid = l + (r - l)/2;
 
        // If the element is present at the middle itself
        if (arr[mid] == target){
            return mid;
        }
 
        // If element is smaller than mid, then it can only be present
        // in left subarray
        if (arr[mid] > target){ 
            return binarySearch(arr, l, mid-1, target);
        }
 
        // Else the element can only be present in right subarray
        return binarySearch(arr, mid+1, r, target);
   }
 
   // We reach here when element is not present in array
   return -1;
}