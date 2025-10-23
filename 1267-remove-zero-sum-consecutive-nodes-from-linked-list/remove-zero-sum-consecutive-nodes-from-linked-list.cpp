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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode*dummy=new ListNode(0);
        dummy->next=head;
        unordered_map<int,ListNode*>mp;
        int prefixsum=0;
        ListNode*curr=dummy;
        while(curr){
            prefixsum+=curr->val;
            mp[prefixsum]=curr;
            curr=curr->next;
        }
        prefixsum=0;
        curr=dummy;
        while(curr){
            prefixsum+=curr->val;
            curr->next=mp[prefixsum]->next;
            curr=curr->next;
        }
        return dummy->next;
        
    }
};