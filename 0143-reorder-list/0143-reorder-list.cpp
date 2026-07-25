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
    ListNode* find_middle(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }

    ListNode* reverse_list(ListNode* head){
        if(head==NULL || head->next==NULL) return head;
        ListNode* prev=NULL;
        ListNode*temp=head;
        while(temp!=NULL){
            ListNode* front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode* middle=find_middle(head);
        ListNode* second=middle->next;
        middle->next=nullptr;
        ListNode* second_half=reverse_list(second);
        ListNode* head1=head;
        while(head1!=NULL && second_half!=NULL){
            ListNode* temp=head1->next;
            head1->next=second_half;
            ListNode* temp2=second_half->next;
            second_half->next=temp;
            head1=temp;
            second_half=temp2;
        }
        
    }
};