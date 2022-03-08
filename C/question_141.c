 
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    bool loopcomplete = false;
    bool islooped;
    struct ListNode* slowmover = head;
    struct ListNode* fastmover = head;
    
    while(loopcomplete == false){//current bug: the if statement for fastmover is running into 

        if(fastmover == NULL || fastmover->next == NULL || fastmover->next->next == NULL){//one of the conditions for this to be the case is that we reach the end of the list.
            loopcomplete = true;
            islooped = false;
        }else{//if we dont reach the end of the list we increment the racers. If they meet, then we know theres a cycle somewhere.
            slowmover = slowmover->next;
            fastmover = fastmover->next->next;
            if(slowmover == fastmover){
                loopcomplete = true;
                islooped = true;
            }
        }
    }
    return islooped;
}