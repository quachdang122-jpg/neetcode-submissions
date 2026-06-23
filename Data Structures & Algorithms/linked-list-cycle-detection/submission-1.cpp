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
    bool hasCycle(ListNode* head) {
    if (head == nullptr || head->next == nullptr)
    {
        return false;
    }
    ListNode *rua = head;
    ListNode *tho = head;
    while (tho != nullptr && tho->next != nullptr)
    {
        rua = rua->next;
        tho = tho->next->next;
        if (rua == tho)
            return true;
    }
    return false;
    }
};
