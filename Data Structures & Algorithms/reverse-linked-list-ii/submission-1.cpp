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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy=new ListNode(-1);
        dummy->next=head;
        ListNode* pre=dummy;
        ListNode* temp=head;
        for(int i=0;i<left-1;i++){
            pre=pre->next;
            temp=temp->next;
        }
        ListNode* subhead=temp;
        ListNode* preleft=nullptr;
        for(int i=0;i<=right-left;i++){
             ListNode* next_node=temp->next;
             
             temp->next=preleft;
             preleft=temp;
             temp=next_node;
        }
        pre->next=preleft;
        subhead->next=temp;
        return dummy->next;
    }
};