/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 typedef struct ListNode NODE;
struct ListNode* deleteDuplicates(struct ListNode* head) {
    NODE *newList=head;
    NODE *temp=head;
    while(temp!=NULL && temp->next!=NULL){
        if(temp->val==temp->next->val){
            temp->next=temp->next->next;
        }else{
            temp=temp->next;
        }
    }
    return newList;
}
