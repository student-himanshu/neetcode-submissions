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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int>value;
        while(list1!=nullptr){
            value.push_back(list1->val);
            list1=list1->next;
        }
         while(list2!=nullptr){
            value.push_back(list2->val);
            list2=list2->next;
        }
        sort(value.begin(),value.end());
        ListNode* temp=new ListNode();
        ListNode* curr=temp;
        curr=temp;
       for(int x:value){
        curr->next=new ListNode(x);
        curr=curr->next;
       }
        return temp->next;
    }
};
