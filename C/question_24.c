/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* swapPairs(struct ListNode* head){

    if(head ==NULL){return NULL;}//doing initial check
    else if (head->next == NULL){return head;}
    else{ 

    struct ListNode* mover = head->next; //move the mover to the second node of the swapping pair 
    head->next = head->next->next;
    mover->next = head;
    head = mover;
    head->next->next = swapPairs(head->next->next);
    return head;
    }
} //had to look this one up a bit, was doing the pointers a little wrong!