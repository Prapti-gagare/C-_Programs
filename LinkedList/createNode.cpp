#include <iostream>
struct node
{
    int data;
    node* next;
};
int main()
{
    node* head =new node;
    std::cout<<"head="<<head;
    head->data=10;
    head->next=nullptr;
    std::cout<<"\nhead->data="<<head->data;
    std::cout<<"\nhead->next="<<head->next;
    delete head;
    return 0;

}