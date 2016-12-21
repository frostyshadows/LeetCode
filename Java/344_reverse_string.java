/*
Write a function that takes a string as input and returns the string reversed.
*/

public class Solution {
    public String reverseString(String s) {
        StringBuilder stringbuilder = new StringBuilder(s);
        for (int i = 0, j = s.length()-1; i <= j; i++, j--){
            char temp_j = s.charAt(j);
            stringbuilder.setCharAt(j, s.charAt(i));
            stringbuilder.setCharAt(i, temp_j);
        }
        return stringbuilder.toString();
    }
}