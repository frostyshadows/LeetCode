/*
Given an array of integers, every element appears twice except for one. Find that single one.
*/

public class Solution {
    public int singleNumber(int[] nums) {
        HashMap<Integer, Boolean> map = new HashMap<Integer, Boolean>();
        
        for (int i = 0; i < nums.length; i++){
            if (map.containsKey(nums[i])){
                if (map.get(nums[i]) == true) {
                    map.put(nums[i], false);
                } else {
                    map.put(nums[i], true);
                }
            } else {
                map.put(nums[i], true);
            }
        }
        
        for (HashMap.Entry<Integer, Boolean> entry : map.entrySet()){
            if (entry.getValue() == true){
                return entry.getKey();
            }
        }
        return 0;
    }
}