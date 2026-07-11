/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*> vn;

        ListNode* curr=head;
        while(curr!=nullptr){
            if(vn.find(curr)!=vn.end()) return true;
            vn.insert(curr);
            curr=curr->next;
        
        }
        return false;
    }
};