
void evenAfterodd(node* head)
{
    node* odd=head;
    node* even=head->next;
    node* evenStart=even;
    
    while(even->next!=NULL && odd->next!=NULL)
    {
        odd->next=even->next;
        odd=odd->next;
        
        if(odd->next!=NULL)
        {
            even->next=odd->next;
            even=even->next;
        }
        
    }
    
    if(odd->next==NULL)
    even->next=NULL;
    
    odd->next=evenStart;
}
