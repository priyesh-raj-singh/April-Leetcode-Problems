/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        if(head==NULL or head->next==NULL)
            return head;
        
        ListNode *slow = head , *fast = head;
        ListNode *first , *second;
        for(int i = 0 ; i<k-1 ; i++){
            fast = fast->next;
        }
        first = fast;
        while(fast!=NULL and fast->next!=NULL){
            slow = slow->next;
            fast = fast->next;
        }
        swap(first->val , slow->val);
        return head;
        
    }
};