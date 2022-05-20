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
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
        if(head1==NULL)
            return head2;
        if(head2==NULL)
            return head1;
        if(head1->val>head2->val)
        {
            ListNode* t=head1;
            head1=head2;
            head2=t;
        }
        ListNode* res=head1;
        while(head1!=NULL && head2!=NULL){
            ListNode *tmp=NULL;
            while(head1!=NULL && head1->val<=head2->val){
                tmp=head1;
                head1=head1->next;
            }
            tmp->next=head2;
            ListNode* t=head1;
            head1=head2;
            head2=t;
        }
        return res;
    }
};
