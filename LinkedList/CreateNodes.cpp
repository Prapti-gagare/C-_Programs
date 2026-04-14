struct node
{
 int data;
 struct node* next;
};
int main()
{
    node* head=new node;
    node* second=new node;
    node* third=new node;
    head->next=second;
    second->next=third;
    third->next=nullptr;
    head->data=3;
    second->data=5;
    third->data=7;
    return 0;
}