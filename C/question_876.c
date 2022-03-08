 
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* middleNode(struct ListNode* head){
    struct ListNode* slowmover = head;//incrementing each step by 1
    struct ListNode* fastmover = head;//incrementing each step by 2
    bool evenlist;

    while(fastmover->next != NULL){
        
        if(fastmover->next->next == NULL){//if there isnt two to jump trying to jump two will cause error.
            //basically if this triggers we know that the we're right at the end. This should only run once if at all.
            fastmover = fastmover->next;
            slowmover = slowmover->next;
                
        }else{
            fastmover = fastmover->next->next;
            slowmover = slowmover->next;
        }
    }//when we're out of the loop we've traveled the entire run so we 
    return slowmover;
}
