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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      ListNode check(0);
      ListNode*tail = &check;
      int cnt= 0;
      while(l1 != nullptr || l2 != nullptr || cnt != 0){
        int sum = cnt;
        if(l1 != nullptr){
            sum += l1->val;
            l1 = l1->next;

        }
        if(l2 != nullptr){
            sum += l2->val;
            l2 = l2->next;
        }
        cnt = sum/10;
        tail->next = new ListNode(sum%10);
        tail = tail->next;
      }
      return check.next;
    }
};