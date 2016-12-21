/*
Given an arbitrary ransom note string and another string containing letters 
from all the magazines, write a function that will return true if the ransom 
note can be constructed from the magazines ; otherwise, it will return false.

Each letter in the magazine string can only be used once in your ransom note.
*/

public class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
        Map<Character, Integer> map = new HashMap<Character, Integer>();
        for (char x: ransomNote.toCharArray()){
            if (map.containsKey(x)){
                Integer val = map.get(x);
                map.put(x, val - 1);
            } else {
                map.put(x, 0);
            }
        }
        for (char y: magazine.toCharArray()){
            if (map.containsKey(y)){
                Integer val = map.get(y);
                map.put(y, val + 1);
            }
        }
        
        for(Map.Entry<Character, Integer> entry : map.entrySet()){
            if (entry.getValue() <= 0){
                return false;
            }
        }
        return true;
    }
}