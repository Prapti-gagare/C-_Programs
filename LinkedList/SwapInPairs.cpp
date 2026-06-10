#include <iostream>
using namespace std;

struct ListNode 
{
    int val;
    ListNode* next;

    ListNode(int x)
     {
        val = x;
        next = NULL;
    }
};

class Solution 
{
public:
    ListNode* swapPairs(ListNode* head) {

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;
        ListNode* curr = head;

        while (curr != NULL && curr->next != NULL) {

            ListNode* first = curr;
            ListNode* second = curr->next;

            prev->next = second;
            first->next = second->next;
            second->next = first;

            prev = first;
            curr = first->next;
        }

        return dummy->next;
    }
};

void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() 
{
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    cout << "Original List: ";
    printList(head);

    Solution obj;
    head = obj.swapPairs(head);

    cout << "After Swapping Pairs: ";
    printList(head);

    return 0;
}