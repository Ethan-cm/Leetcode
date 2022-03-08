 
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val){   
    struct ListNode* current = head;
    if(head == NULL){
        return NULL;
    }
    while(current->next != NULL){//main iterative, does not deal with the start of the loop
        
        if(current->next->val == val){//if the next node from the current node has val, then we skip it NEVER TRIGGERING
            current->next = current->next->next;
        }//otherwise, we just increment the node
        else{
        current = current->next;
        }
    }
    

    if(head->val == val){
       head = head->next; 
    }

    
    return head;
}