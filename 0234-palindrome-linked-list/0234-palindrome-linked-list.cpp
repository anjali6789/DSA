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
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* next=head->next;
        while(next!=NULL){
            curr->next=prev;
            prev=curr;
            curr=next;
            next=next->next;
        }curr->next=prev;
        return curr;
    }
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL){
            return true;
        }
        ListNode*slow=head;//slow pointer
        ListNode*fast=head;//fast pointer
        //figuring out middle
        while(fast!=NULL){
           
            slow=slow->next;
            if(fast->next){
                fast=fast->next->next;
            }else{
                //odd LL
                fast=NULL;
            }
        }
        ListNode*reversed=reverse(slow);
        //compare
        ListNode*temp=head;
        while(reversed!=NULL){
            if(reversed->val!=temp->val){
                return false;
            }reversed=reversed->next;
            temp=temp->next;
        }return true;

    }
};