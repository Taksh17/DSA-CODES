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
int getlength(ListNode* head)
{
    int count=0;
    ListNode*it=head;
    while(it!=nullptr){
        count++;
        it=it->next;
    }
    return count;
}   
 ListNode* deleteMiddle(ListNode* head) {
    if(head==nullptr or head->next==nullptr){
        return nullptr;
    }
        int len=getlength(head);
        int target=len/2;
        ListNode*temp=head;
        for(int i=0;i<target-1;i++){
            temp=temp->next;
        }
        ListNode*todelete=temp->next;
        temp->next=temp->next->next;
        delete todelete;
        return head;
        
    }
};