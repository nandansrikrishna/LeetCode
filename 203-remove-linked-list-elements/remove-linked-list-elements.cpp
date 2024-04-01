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
static const auto fast=[](){ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return nullptr;}();
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (!head) {
            return head;
        }
        ListNode* del;
        while(head!=nullptr && head->val == val){
            del = head;
            head = head->next;    
            delete del;
        }
        ListNode* tmp = head;

        while (tmp && tmp->next) {
            if (tmp->next->val == val) {
                del = tmp->next;
                tmp->next = tmp->next->next;
                delete del;
            }
            else {
                tmp = tmp->next;
            }
        }

        return head;
    }
};