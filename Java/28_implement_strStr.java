/*
Implement strStr().

Returns the index of the first occurrence of needle in haystack, 
or -1 if needle is not part of haystack.
*/

public class Solution {
    public int strStr(String haystack, String needle) {
        
        int haystackLen = haystack.length();
        int needleLen = needle.length();
        
        if (needleLen == 0){
            return 0;
        }
        
        for (int i = 0; i < haystackLen - needleLen + 1; i++){
            if (haystack.substring(i, i + needleLen).equals(needle)){
                return i;
            }
        }
        
        return -1;
    }
}