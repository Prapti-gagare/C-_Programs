#include <iostream>
struct node
{
    int data;
    node* next;
};
int main()
{
    node* head=new node();
    node* prev=head;
    for(int i=0;i<5;i++)
    {
        node* temp=new node();
        prev->next=temp;
        prev=prev->next;
    }
    return 0;
}