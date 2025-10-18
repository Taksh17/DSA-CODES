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
int getlength(ListNode*head){
    ListNode*it=head;
    int count=0;
    while(it!=nullptr){
       count++;
        it=it->next;
    }
    return count;
}
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       int req= getlength(head);
       int pos=req-n;
       if(pos==0){
        ListNode*newhead=head->next;
        delete head;
        return newhead;
       }
       ListNode*temp=head;
       for(int i=1;i<pos;i++){
        temp=temp->next;
       }
       ListNode*todelete=temp->next;
       temp->next=temp->next->next;
       delete todelete;
       return head;


    }
};