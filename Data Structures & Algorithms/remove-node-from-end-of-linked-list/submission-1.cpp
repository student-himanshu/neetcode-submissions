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
      int len=0;
      ListNode* curr=head;

       while(curr) {
        len++;
        curr=curr->next;
       }
       int ind=len-n;
       if(ind==0)return head->next;
       curr=head;
       for(int i=0;i<len-1;i++){
            if((i+1)==ind){
                curr->next=curr->next->next;
            }
            curr=curr->next;
       }
       return head;
    }
};
