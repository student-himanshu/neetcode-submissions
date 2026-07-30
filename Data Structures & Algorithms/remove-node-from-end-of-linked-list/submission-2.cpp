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
        vector<ListNode*>node;
        ListNode* cur=head;
        while(cur){
            node.push_back(cur);
            cur=cur->next;
        }
        int z=node.size();
        int ind=z-n;

        if(ind==0)return head->next;


        node[ind-1]->next=node[ind]->next;
        return head;
    }
};
