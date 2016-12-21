/*
Given an integer (signed 32 bits), write a function to check 
whether it is a power of 4.
*/

public class Solution {
    public boolean isPowerOfFour(int num) {
        
        if (num <= 0) {
            return false;
        }
        
        if (num == 1) {
            return true;
        } 
        
        if ((num % 4) != 0) {
            return false;
        }
            
        return isPowerOfFour(num / 4);
        
        // return true;
    }
}