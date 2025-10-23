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
    ListNode* oddEvenList(ListNode* head) {
        if(!head) return nullptr;
        vector<int>val;
        ListNode*temp=head;
        while(temp){
            val.push_back(temp->val);
            temp=temp->next;
        }
        vector<int>results;
        int n=val.size();
        for(int i=0;i<n;i+=2){
            results.push_back(val[i]);
        }
        for(int i=1;i<n;i+=2){
            results.push_back(val[i]);
        }
        ListNode*dummy=new ListNode(0);
        ListNode*tail= dummy;
        for(int r:results){
            tail->next=new ListNode(r);
            tail=tail->next;
        }
        return dummy->next;
    }
};