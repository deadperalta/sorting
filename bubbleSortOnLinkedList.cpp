void bubbleSort(Node* head)
{
  Node* lptr=NULL;
  Node* ptr=head;
  
  do
  {
    int swapped=0;
    ptr=start;
    
    while(ptr->next != lptr)
    {
      if(ptr->next->data < ptr->data)
      {
        swapped=1;
        swap(ptr->next->data,ptr->data);
      }
      ptr=ptr->next;
    }
    lptr=ptr;
  }
  while(swapped);
}
