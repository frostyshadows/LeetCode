/*
Given a linked list, remove the nth node from the end of list and return its head.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* firstPrevNode = NULL;
        ListNode* firstNode = head;
        ListNode* nthNode = head;
        
        if (head->next == NULL) {
            return NULL;
        }
        
        while (n > 1) {
            nthNode = nthNode->next;
            n--;
        }
        
        if (nthNode != NULL) {
            while (nthNode->next != NULL) {
                firstPrevNode = firstNode;
                firstNode = firstNode->next;
                nthNode = nthNode->next;
            }
        }
        
        if (firstPrevNode == NULL) {
            head = head->next;
        } else if (firstNode != NULL) {
            firstPrevNode->next = firstNode->next;
        } else {
            firstNode = NULL;
        }
        
        return head;
    }
};