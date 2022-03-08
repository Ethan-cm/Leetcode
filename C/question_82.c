 
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

if(head == NULL){return NULL;}

//while the list still has elements
//main loop


    if(head->next && head -> val == head->next->val)//if head of val is identical to next val, change the
    {
        while(head->next && head -> val == head->next->val)
        {head = head->next;}
        return deleteDuplicates(head->next);
    }
    head->next = deleteDuplicates(head->next);

return head;
}