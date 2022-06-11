/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL)
            return NULL;
       unordered_map<Node * ,Node * > mp;
        Node * ptr=head;
        Node * newnode=new Node(head->val);
        Node * temp=newnode;
        Node * copy=newnode;
        Node * net=newnode;
        ptr=ptr->next;
        mp.insert({head,newnode});
        while(ptr!=NULL){
            Node * newnode=new Node(ptr->val);
            temp->next=newnode;
            temp=newnode;
            mp.insert({ptr,newnode});
            ptr=ptr->next;
        }
        while(head!=NULL){
            Node * ans=mp[head->random];
            copy->random=ans;
            copy=copy->next;
            head=head->next;
        }
        return net;
    }
};