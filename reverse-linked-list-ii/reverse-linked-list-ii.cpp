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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        /* if list is empty or only one node , return list */
        if(!head || !head->next) {
            return head;
        }

        /* traverse to left */
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(curr && left-- > 1u) {
            prev = curr;
            curr = curr->next;
            right--;
        }

        /* keep for later */
        ListNode* link_back = prev;
        ListNode* tail = curr;

        /* now reverse list */
        while(curr && right--) {
            ListNode* next = curr->next;

            curr->next = prev;

            prev = curr;
            curr = next;
        }

        /* fix list; now you see it? */
        if(link_back) {
            link_back->next = prev;
        } else {
            head = prev;
        }

        tail->next = curr;

        return head;
    }
};