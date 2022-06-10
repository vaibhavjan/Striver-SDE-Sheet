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
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int> v;
        ListNode * ptr=head;
        while(ptr!=NULL)
        {
            v.push_back(ptr->val);
            ptr=ptr->next;
        }
        int x=v.size()/k;
        int m=0;
        for(int i=0;i<x;i++)
        {
            reverse(v.begin()+m,v.begin()+m+k);
            m+=k;
        }
        ListNode * temp=new ListNode();
        head=temp;
        for(int i=0;i<v.size();i++)
        {   
            temp->val=v[i];
            ListNode * pre=new ListNode();
            if(i==v.size()-1)
            {
                temp->next=NULL;
                break;
            }
            temp->next=pre;
            temp=pre;
        }
        return head;
    }
};