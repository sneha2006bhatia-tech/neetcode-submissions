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
    bool hasCycle(ListNode* head) {
        ListNode* t=head;
        ListNode* r=head;
        while(r!=nullptr && r->next!=nullptr){
            t=t->next;
            r=r->next->next;
            if(t==r){
            return true;
        }
        }
        
        return false;
    }
};
