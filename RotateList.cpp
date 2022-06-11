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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL)
            return head;
        
        ListNode *ptr=head;
        ListNode * temp;
        int count=0;
        while(ptr!=NULL){
            count++;
            ptr=ptr->next;
        }
        ptr=head;
        ListNode * pre=NULL;
        int m;
        
      k=k%count;
        if(k==0)
            return head;
         for(int i=1;i<=count-k;i++){
             pre=ptr;
             ptr=ptr->next;
         }
        temp=ptr;
        pre->next=NULL;
        while(ptr!=NULL){
            pre=ptr;
            ptr=ptr->next;
        }
        pre->next=head;
        return temp;
    }
};