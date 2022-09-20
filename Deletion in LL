#include<bits/stdc++.h>
using namespace std;


class node {
     public:
     int data; 
     node *next;

     node (int val)
     {
        data =val;
        next=NULL;

     }

};

void InsertAtTail( node* &head , int val)
{
    node* n= new node(val);
    if ( head==NULL )
    {
        head =n;
        return;
    }
    
    node* temp=head;

    while( temp->next!=NULL)
    {
        temp= temp->next;
    }

    temp->next=n;


}

void InsertAtHead(node* &head, int val)
{
    node *n=new node (val);
    n->next=head;
    head=n;

}

bool Search(node* head, int key)
{
    node* temp=head;
    while(temp!=NULL)
    {
        if ( temp->data==key)
        {return true;}
        temp=temp->next;
    }
    return false;
}

void display (node* head)
{
    while( head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}


void deleteAtHead(node* &head)
{
    node* todelete= head;
    head=head->next;
    delete todelete;
}

void Deletion (node* &head, int val)
{
    if (head==NULL)
    {return;}

    if (head->next==NULL )
    { deleteAtHead(head);}

    node* temp=head;
    while ( temp->next->data != val)
    {
        temp=temp->next;
    }
    node* todelete =temp->next;
    temp->next=temp->next->next;

    delete todelete;



}

int main() {

    node* head=NULL;
    InsertAtHead(head,40);
    InsertAtHead(head,60);
    InsertAtTail(head,50);
    display(head);
   cout<<Search(head,60);
   Deletion(head,40);
   deleteAtHead(head);
   display (head);

    return 0;
}
