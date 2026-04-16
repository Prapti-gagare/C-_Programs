#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node* next;
};

int main() {
    node* head = new node;
    head->data = 10;
    head->next = NULL;
    node* newHead = new node;
    newHead->data = 5;
    newHead->next = head;
    head = newHead;
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";

    return 0;
}