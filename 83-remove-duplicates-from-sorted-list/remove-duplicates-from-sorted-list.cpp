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
        ListNode* temp=head;
        while(temp!=nullptr && temp->next!=nullptr ){
            ListNode* t2=temp->next;
            while( t2!=NULL && temp!=NULL&& temp->val==t2->val){
               t2=t2->next;
            }
            temp->next=t2;
            temp=temp->next;
           
        }
        return head;
    }
};