   bool isPalindrome(ListNode* head) {

        ListNode* p = head;
        vector<int> ans;

        while (p != NULL) {
            ans.push_back(p->val);
            p = p->next;
        }
        int low = 0;
        int high = ans.size() - 1;

        while (low < high) {
            if (ans[low] != ans[high]) {
                return false;
            }
            low++;
            high--;
        }
        return true;
    }
}