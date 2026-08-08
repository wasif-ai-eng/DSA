class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int length = 0;
        ListNode *t = head;
        while (t != NULL) {
            length++;
            t = t->next;
        }

        t = head;
        int arr[length];
        int i = 0;
        while (t != NULL) {
            arr[i] = t->val;
            i++;
            t = t->next;
        }
        int l = left - 1, r = right - 1;
        while (l < r) {
            int temp = arr[l];
            arr[l] = arr[r];
            arr[r] = temp;
            l++;
            r--;
        }

        // Write the values back into the list
        t = head;
        i = 0;
        while (t != NULL) {
            t->val = arr[i];
            i++;
            t = t->next;
        }

        return head;
    }
};