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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> all;
        while(list1){
            all.push_back(list1->val);
            list1 = list1->next;
        }
        while(list2){
            all.push_back(list2->val);
            list2 = list2->next;
        }
        if(all.size() == 0){
            return NULL;
        }
        sort(all.begin() , all.end());
        for(auto it:all){
            cout<<it<<" ";
        }
        int i=1, j=all.size();
        ListNode* headd = new ListNode(all[0]);//start a new LinkedList
        ListNode* curr = headd;//we need a pointer to keep track of list
        while(i < j){
            curr->next = new ListNode(all[i]);//create a new node and attach it to the current
            curr = curr->next;//move the current, so we can add next node to the ans
            i++;
        }
        return headd;
    }
};
