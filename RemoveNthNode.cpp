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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * ptr=new ListNode();
        ptr=head;
        int count=0;
        while(ptr!=NULL)
        {
            count++;
            ptr=ptr->next;
        }
        if(n==count)
        {
            head=head->next;
            return head;
        }
        ListNode * prev=new ListNode();
        prev=NULL;
        if(n==0)
        {
          while(ptr!=NULL)
          {
              prev=ptr;
            ptr=ptr->next;
          }
            prev->next=NULL;
            // free(ptr);
            return head;
        }
        int l=0;
        ptr=head;
        while((count-n)!=l)
        {
                prev=ptr;
                ptr=ptr->next;
            l++;
        }
        prev->next=ptr->next;
        // free(ptr);
        return head;
    }
};