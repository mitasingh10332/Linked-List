node* reverseiterative(node* &head)
{
    node* prevptr= NULL;
    node* currentptr=head;
    node* nextptr;

    while(currentptr!=NULL)
    {
        nextptr=currentptr->next;
        currentptr->next=prevptr;

        prevptr=currentptr;
        currentptr=nextptr;

    }
    return prevptr;

}
int main() {

    node* head=NULL;
    InsertAtHead(head,40);
    InsertAtHead(head,60);
    InsertAtTail(head,50);
    display (head); cout<<endl;
    node* newheadd=reverseiterative(head);
    display(newheadd);

    return 0;
}
