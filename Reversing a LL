node* reversell(node* &head)
{
    if(head==NULL || head->next==NULL)
    {
        return head ;
    }
    node* newhead= reversell(head->next);
    head->next->next=head;
    head->next= NULL;
    return newhead;
}


int main() {

    node* head=NULL;
    InsertAtHead(head,40);
    InsertAtHead(head,60);
    InsertAtTail(head,50);
    display (head); cout<<endl;
    node* newheadd=reversell(head);
    display(newheadd);

    return 0;
}
