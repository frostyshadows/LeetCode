/*
Determine whether an integer is a palindrome. Do this without extra space.
*/

bool isPalindrome(int x) {
    
    if (x < 0)
        return false;
    
    int* digits;
    int i = 0;
    while (x) {
        digits[i] = x % 10;
        x /= 10;
        i++;
    }
    
    int length = i;
    
    for (int j = 0; j < i; j++){
        if (digits[j] != digits[i - j - 1]){
            return false;
        }
    }
    return true;
}