/*
Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.

*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        vector<int> newVec1(nums1.begin(), nums1.begin() + m);
        nums1 = newVec1;
        
        vector<int> newVec2(nums2.begin(), nums2.begin() + n);
        nums2 = newVec2;
        
        nums1.insert(nums1.begin() + m, nums2.begin(), nums2.begin() + n);
        sort(nums1.begin(), nums1.end());
    }
};