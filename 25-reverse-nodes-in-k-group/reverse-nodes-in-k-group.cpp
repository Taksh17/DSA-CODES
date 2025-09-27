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
int getlength(ListNode* head){
    ListNode*temp=head;
    int count=0;
    while(temp!=nullptr){
        count++;
        temp=temp->next;
    }
    return count;
}
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==nullptr){
            return head;
        }
        if(head->next==nullptr){
            return head;
        }
        int len=getlength(head);
        if(len<k){
            return head;
        }
        int pos=0;
        ListNode*curr=head;
        ListNode*prev=nullptr;
        while(pos<k){
            ListNode*forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
            pos++;
        }
        if(curr!=nullptr){
            ListNode*recursionkahead=reverseKGroup(curr,k);
            head->next=recursionkahead;
        }
        return prev;
        
    }
};