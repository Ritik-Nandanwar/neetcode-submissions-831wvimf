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
    ListNode*       reverseList(ListNode* head) {
        vector<int> all;
        while(head){
            all.push_back(head->val);
            head = head->next;
        }
        for(auto it:all){
            cout<<it<<", ";
        }
        if(all.size() == 0) return head;
        reverse(all.begin(), all.end());

        ListNode* ans = new ListNode(all[0]);
        ListNode* curr = ans;

        for(int i = 1; i < all.size(); i++){
            curr->next = new ListNode(all[i]);
            curr = curr->next;
        }

        return ans;
    }
};
