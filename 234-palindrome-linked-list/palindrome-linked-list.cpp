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
    ListNode* reverse(ListNode* head){
        if(head==nullptr || head->next==nullptr) return head;
        ListNode* newhead=reverse(head->next);
        ListNode* front=head->next;
        front->next=head;
        head->next=nullptr;
        return newhead;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL) return true;
        ListNode* first=head;
        ListNode* slow=head;
        ListNode*  fast=head;
      

        while (fast->next != nullptr && fast->next->next != nullptr){
            slow=slow->next;
            fast=fast->next->next;
}
       ListNode* newhead=reverse(slow->next);
       ListNode* second=newhead;
        while(second!=nullptr ){
            if(first->val!=second->val){
                reverse(newhead);
                return false;
            }
            second=second->next;
            first=first->next;
        }
        reverse(newhead);
        return true;

    }
};