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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         //there should be a diff of n bw 2 pointers
        
        ListNode *first= head;
        ListNode *second= head;
        for(int i=0;i<n;i++){
            second=second->next;
        }
        if(second==NULL){
            //the root is to be removed
            first=first->next;
            return first;
        }
        ListNode *prev=NULL;
        while(second!=NULL){
            prev=first;
            first=first->next;
            second=second->next;
        }prev->next=first->next;
        return head;
    }
};