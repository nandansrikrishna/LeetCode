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
    bool isPalindrome(ListNode* head) {
        stack<int> front;
        queue<int> back;

        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next) {
            front.push(slow->val);
            slow = slow->next;
            fast = fast->next->next;
        }
        while (slow) {
            back.push(slow->val);
            slow = slow->next;
        }
        if (back.size() > front.size()) {
            back.pop();
        }

        while (!front.empty()) {
            if (front.top() != back.front()) {
                return false;
            }
            front.pop();
            back.pop();
        }

        return true;
    }
};