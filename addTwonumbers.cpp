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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res = l1;
        ListNode* free = l2;
        int adding = 0;
        while ( l2 && l1 )
        {
            l1->val += l2->val+adding;
            adding = l1->val/10;
            l1->val = l1->val%10;

            if ((l1->next == nullptr)||(l2->next == nullptr)){
                if(l1->next==nullptr) l1->next = l2->next;
                while (adding) {
                    if(l1->next){
                        l1 = l1->next;
                        l1->val += adding;
                        adding = l1->val/10;
                        l1->val = l1->val%10;
                        continue;
                    }
                    l1->next = new ListNode(adding);
                    adding = 0;
                }
                delete free;
                return res;
            }
            l1 = l1->next;
            l2 = l2->next;
        }
        return res;
    }
};