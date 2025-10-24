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
    ListNode* deleteDuplicates(ListNode* head) {
         if(!head) return nullptr;

    // Step 1: Copy all elements to a vector
    vector<int> vals;
    ListNode* temp = head;
    while(temp){
        vals.push_back(temp->val);
        temp = temp->next;
    }

    // Step 2: Find unique (non-duplicate) elements
    vector<int> uniqueVals;
    int n = vals.size();
    for(int i = 0; i < n; i++){
        bool isDuplicate = false;
        if(i > 0 && vals[i] == vals[i-1]) isDuplicate = true;
        if(i < n-1 && vals[i] == vals[i+1]) isDuplicate = true;
        if(!isDuplicate) uniqueVals.push_back(vals[i]);
    }

    // Step 3: Create a new linked list from uniqueVals
    ListNode* dummy = new ListNode(0);
    ListNode* curr = dummy;
    for(int val : uniqueVals){
        curr->next = new ListNode(val);
        curr = curr->next;
    }

    return dummy->next;
        
    }
};