/**
 * // This is the ImmutableListNode's API interface.
 * // You should not implement it, or speculate about its implementation.
 * class ImmutableListNode {
 * public:
 *    void printValue(); // print the value of the node.
 *    ImmutableListNode* getNext(); // return the next node.
 * };
 */

class Solution {
public:
    typedef ImmutableListNode* node_pointer_t;
    
    void printLinkedListInReverse(ImmutableListNode* head) {
        /* reached end of list */
        std::stack<node_pointer_t> arr{}; 

        node_pointer_t ptr = head;
        while(ptr) {
            arr.push(ptr);
            ptr = ptr->getNext();
        }
    
        while(!arr.empty()){
            arr.top()->printValue();
            arr.pop();
        }
        
        return;
    }
};