class Solution {
public:
    void reorderList(ListNode* head) {
        if(head==nullptr || head->next == nullptr)
            return;
        ListNode *fast = head;
        ListNode *slow = head;
        while(fast->next !=nullptr && fast->next->next!=nullptr)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        ListNode *curr = slow->next;
        slow->next = nullptr;
        ListNode *prev = nullptr;
        while(curr!=nullptr)
        {
            ListNode* tmp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = tmp;
        }
        ListNode* fi = head;
        ListNode* sec = prev; 
        while(sec!=nullptr)
        {
            ListNode *tmp1 = fi->next;
            ListNode *tmp2 = sec->next;
            fi->next = sec;
            sec->next = tmp1;
            fi = tmp1;
            sec = tmp2;
        }
    }
};