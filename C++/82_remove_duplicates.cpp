/*
Given a sorted linked list, delete all nodes that have duplicate numbers, 
leaving only distinct numbers from the original list.
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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL || head->next == NULL){
            return head;
        }
        
        int dupVal;
        
        ListNode* headToReturn = new ListNode(0); 
    
        ListNode* temp = head;
        
        ListNode* currToReturn = headToReturn;
        
        while (temp != NULL && temp->next != NULL){
            if (temp->val == temp->next->val){
                dupVal = temp->val;
                while (temp->val == dupVal && temp->next != NULL){
                    temp = temp->next;
                }
            } else {
                currToReturn->next = new ListNode(temp->val);
                currToReturn = currToReturn->next;
                temp = temp->next;
            }
        }
        
        if (dupVal != temp->val){
            currToReturn->next = new ListNode(temp->val);
        }
        
        return headToReturn->next;
    }
};