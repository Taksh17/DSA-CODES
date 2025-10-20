/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
          if (head == nullptr) return nullptr;                 
        unordered_map<Node*, Node*> mp;                      
        Node* curr = head;                                 
        while (curr != nullptr) {                            
            mp[curr] = new Node(curr->val);                  
            curr = curr->next;                               
        }
        curr = head;                                     
        while (curr != nullptr) {                           
            Node* copyNode = mp[curr];                      
            copyNode->next = (curr->next != nullptr) ? mp[curr->next] : nullptr;   
            copyNode->random = (curr->random != nullptr) ? mp[curr->random] : nullptr; 
            curr = curr->next;                               
        }
        return mp[head];                  
        
    }
};