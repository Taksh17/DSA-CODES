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
    bool isPalindrome(ListNode* head) {
        ListNode*slow=head;
        ListNode* fast=head;
        while(fast!=nullptr){
            fast=fast->next;
            if(fast!=nullptr){
                fast=fast->next;
                slow=slow->next;
            }
        }
        ListNode*prev=nullptr;
        ListNode*curr=slow;
        while(curr!=nullptr){
            ListNode*nextnode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextnode;
        }
        ListNode*left=head;
        ListNode*right=prev;
        while(right){
            if(left->val!=right->val){
                return false;
            }
            else{
                left=left->next;
                right=right->next;
            }
        }
        return true;
    }
};