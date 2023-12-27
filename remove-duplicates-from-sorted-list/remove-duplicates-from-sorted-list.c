/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    /* sanity checks */
    if(!head || !head->next) {
        return head;
    }

    struct ListNode* ptr = head;
    while (ptr && ptr->next) {
        if (ptr->val == ptr->next->val) {
            struct ListNode* to_del = ptr->next;
            /* fix up next link */
            ptr->next = ptr->next->next;
            /* delete next node */
            free(to_del);
            to_del = NULL;
        } else {
            ptr = ptr->next;
        }
    }

    return head;
}