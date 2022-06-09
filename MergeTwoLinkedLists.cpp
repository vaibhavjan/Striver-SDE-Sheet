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
        if(list1==NULL)
            return list2;
        else if(list2==NULL)
            return list1;
        ListNode * res=new ListNode();
        ListNode * ptr=res;
        while(list1!=NULL && list2!=NULL){
            ListNode * temp=new ListNode();
            if(list1->val<list2->val){
                res->val=list1->val;
                res->next=temp;
                res=temp;
                list1=list1->next;
            }
            else{
                res->val=list2->val;
                res->next=temp;
                res=temp;
                list2=list2->next;
            }
        }
        while(list1!=NULL){
            ListNode * temp=new ListNode();
            res->val=list1->val;
                res->next=temp;
            res=temp;
                list1=list1->next;
        }
         while(list2!=NULL){
            ListNode * temp=new ListNode();
            res->val=list2->val;
                res->next=temp;
             res=temp;
                list2=list2->next;
        }
        res->next=NULL;
        ListNode * pre=NULL;
        ListNode * ans=ptr;
        while(ans->next!=NULL){
            pre=ans;
            ans=ans->next;
        }
        pre->next=NULL;
        return ptr;
    }
};