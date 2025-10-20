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
int length(ListNode* head){
    int count=0;
    ListNode*it=head;
    while(it!=nullptr){
        count++;
        it=it->next;
    }
    return count;
}
    ListNode* rotateRight(ListNode* head, int k) {
        int getlength=length(head);
        if(!head) return 0;
        int actualrotate=(k%getlength);
         if(actualrotate==0){
            return head;
         }
         int newtail=getlength-actualrotate-1;
         ListNode*newhead=nullptr;
         ListNode*newtailhead=head;
         for(int i=0;i<newtail;i++){
            newtailhead=newtailhead->next;
         }
         newhead=newtailhead->next;
         newtailhead->next=nullptr;
         ListNode*curr=newhead;
         while(curr->next){
            curr=curr->next;

         }
         curr->next=head;
         return newhead;
        
    }
};