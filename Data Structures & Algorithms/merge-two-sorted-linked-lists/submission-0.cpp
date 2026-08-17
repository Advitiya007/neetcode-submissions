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
    ListNode* mergeTwoLists(ListNode* t1, ListNode* t2) {
       ListNode*  h= new  ListNode( -1);  
       ListNode* h1= h;
        while(t1 && t2){
            if(t1->val < t2-> val){
                h1->next = t1;
                t1= t1->next;
               
            }
            else{
             h1->next = t2;
                t2= t2->next;
               
            }
            h1= h1->next;
        }

        if( t1){
            h1->next= t1;
        }

        else if( t2){
            h1->next = t2;
        }

        return h->next;
    }
};
