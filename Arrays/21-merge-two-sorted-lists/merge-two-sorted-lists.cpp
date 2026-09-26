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
        ListNode* first = list1;
        ListNode* sec = list2;
        ListNode* dummy = new ListNode();
        ListNode* dummyHead = dummy;
        while (first || sec) {
            if(!(first) || !(sec)){
            if (first == NULL) {
                dummy->next = sec;
                dummy = dummy->next;
                sec = sec->next;
            }
            else{
                dummy->next = first;
                dummy = dummy->next;

                first = first->next;
            }
            }
            else{ if((first -> val) >= (sec -> val)){
                dummy -> next = sec;
                dummy = dummy ->next;
                sec = sec -> next;
            }   
            else{
                dummy -> next = first;
                dummy = dummy ->next;
                first = first -> next;

            }
            }
        }
         return dummyHead -> next;
    }
    };