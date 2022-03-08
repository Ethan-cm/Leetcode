/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

//I had the same idea as this guy but my implementation was shit, didnt work
//apalkovskiy did it but it worked without pointing to a nullpointer
struct ListNode* deleteDuplicates(struct ListNode* head){

struct ListNode* current = head; //create a moving pointer for the current selection


while(head != NULL){ //while the list still has elements
//main loop
    if(head->next == NULL)
    break;
    if(head ->val == head->next->val)//if head of val is identical to next val, change the
        head->next = head->next->next;
    else
        head = head->next;
}
return current;
}