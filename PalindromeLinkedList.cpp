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
    ListNode * reverse(ListNode * head){
        if(head==NULL || head->next==NULL)
            return head;
        ListNode * rev= new ListNode();
        ListNode * k=rev;
        while(head!=NULL){
            ListNode * t= new ListNode();
            rev->val=head->val;
            rev->next=t;
            if(head->next==NULL){
                rev->next=NULL;
                break;
            }
            rev=t;
            head=head->next;
        }
        ListNode * ptr=NULL;
        while(k!=NULL){
            ListNode * temp=k->next;
            k->next=ptr;
            ptr=k;
            k=temp;
        }
        return ptr;
    }
    bool isPalindrome(ListNode* head) {
        ListNode * ptr=reverse(head);
        while(head!=NULL){
            if(ptr->val!=head->val)
                return false;
            head=head->next;
            ptr=ptr->next;
        }
        return true;
    }
};