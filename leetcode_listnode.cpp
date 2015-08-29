struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
    ListNode(int* x, int length) {
        if (length > 0)
            val = x[0];
        ListNode* p = this;
        for (int i = 1; i < length; i ++) {
            ListNode* node = new ListNode(x[i]);
            p->next = node;
            p = node;
        }
    }
    void display() {
        ListNode* node = this;
        while (node) {
            cout << node->val << ' ';
            node = node->next;
        }
        cout << endl;
    }
};

