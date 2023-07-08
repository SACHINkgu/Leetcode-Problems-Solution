class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head || head->val == 100500)
            return head;

        head->val = 100500;

        return detectCycle(head->next);
    }
};