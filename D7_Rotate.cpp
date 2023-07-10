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
    int getlength(ListNode* head1)
    {
        int count=1;
        while(head1->next!=NULL)
        {
            count++;
            head1=head1->next;
        }
        return count;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL)return head;
        int l=getlength(head);
        k=k%l;
    for(int i=1;i<=k;i++)
    { 
        ListNode* tail=head;
        ListNode* tailprev=NULL;
        while(tail->next!=NULL)
        {
            tailprev=tail;
            tail=tail->next;

        }
        tail->next=head;
        tailprev->next=NULL;
        head=tail;
    }
    return head;
    }
};