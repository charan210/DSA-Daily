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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
     unordered_map<ListNode*,int> m;
     ListNode* h1=headA;
     ListNode* h2=headB;
     while(h1!=nullptr){
        m[h1]=1;
        h1=h1->next;
     }
     while(h2!=nullptr){
        if(m.find(h2)!=m.end()) return h2;
        h2=h2->next;
     }
     return nullptr;
    }
};