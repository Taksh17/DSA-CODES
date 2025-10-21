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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if(!head or !head->next or !head->next->next) return {-1,-1};
        ListNode*temp=head->next;
        vector<int>cp;
        ListNode*prev=head;
        int index=1;
        while(temp->next!=nullptr){
            if((temp->val>prev->val and temp->val>temp->next->val)||(temp->val<prev->val and temp->val<temp->next->val)){
                cp.push_back(index);
            }
            prev=temp;
            temp=temp->next;
            index++;
        }
        if(cp.size()<2){
            return{-1,-1};
        }
        int minidist=INT_MAX;
        for(int i=1;i<cp.size();i++){
            minidist=min(minidist,cp[i]-cp[i-1]);
        }
        int maxdist=cp.back()-cp.front();
        return {minidist,maxdist};
    }
};