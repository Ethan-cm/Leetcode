 
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
    ListNode* head = list1;
    ListNode* tail; //null ptr to tail

    if(list1 && list2){
        //first check which list value is the smallest, and pop that one into the head of
        //ListNode.
        if(list1->val < list2->val){//val of list 1 is smaller than list2, therefore it goes in
            head = tail = list1;
            list1 = list1->next;
        }
        else{
            head = tail = list2;
            list2 = list2->next;
        }
        
        while(list1 != nullptr && list2 != nullptr){
            //main loop
            if(list1->val <= list2->val){
                tail->next = list1;
                list1 = list1 ->next;
                tail = tail->next;
            }
            else if(list1->val >= list2->val){
                tail->next = list2;
                list2 = list2 ->next;
                tail = tail->next;
            }
        }

        if(list1){
            tail->next = list1;
        }else if(list2){
            tail->next = list2;
        }
    }
        
    else if(list2){
        head = list2;
    }    
return head;

}
};

