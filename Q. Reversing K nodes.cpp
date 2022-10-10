node* reverseK(node* &head, int k)
{

    node* prevptr=NULL;
    node* currentptr=head;
    node* nextptr;
    int countt=0;

    while(currentptr!=NULL && countt<k)
    {
        nextptr=currentptr->next;
        currentptr->next=prevptr;
        prevptr=currentptr;
        currentptr=nextptr;
        countt++;
    }

    if (nextptr!=NULL)
    {
        head->next=reverseK(nextptr,k);
    }

    return prevptr;

}
int main() {

    node* head=NULL;
    InsertAtHead(head,30);
    InsertAtHead(head,40);
    InsertAtHead(head,60);
    InsertAtTail(head,50);
    display (head); cout<<endl;
    node* newheadd=reverseK(head,2);
    display(newheadd);

    return 0;
}
