bool has_cycle(SinglyLinkedListNode* head) 
{

  SinglyLinkedListNode* p;
  SinglyLinkedListNode* q;
  p=head;
  q=head;
  while(p && q && q->next)
  {
    p=p->next;
    q=q->next->next;
    if(p==q)
    {
      return 1;
    }
    
  }
