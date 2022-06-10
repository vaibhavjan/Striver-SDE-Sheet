/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode *> ans;
        while(head!=NULL){
            if(ans.find(head)!=ans.end()){
                return true;
            }
            ans.insert(head);
            head=head->next;
        }
        return false;
    }
};