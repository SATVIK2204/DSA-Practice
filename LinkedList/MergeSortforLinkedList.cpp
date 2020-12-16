//Question Link -   https://practice.geeksforgeeks.org/problems/sort-a-linked-list/1


// Required Function

void Split(Node* head, Node** a, Node** b) 
{ 
    Node* fast = head->next; 
    Node* slow = head;
    
    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    
  
    *a = head; 
    *b = slow->next; 
    slow->next = NULL; 
} 

Node* SortedMerge(Node* a, Node* b)  
{  
    Node* result = NULL;  
      
    
    if (a == NULL)  
        return(b);  
    else if (b == NULL)  
        return(a);  
      
    
    if (a->data <= b->data)  
    {  
        result = a;  
        result->next = SortedMerge(a->next, b);  
    }  
    else
    {  
        result = b;  
        result->next = SortedMerge(a, b->next);  
    }  
    return(result);  
}  

void MergeSort(Node **headRef)
{
    Node* head = *headRef; 
    
    if ((head == NULL) || (head->next == NULL)) { 
        return; 
    } 
  
    Node* a, * b;
    Split(head, &a, &b); 
  
    MergeSort(&a); 
    MergeSort(&b); 
  
    *headRef = SortedMerge(a, b); 
}

Node* mergeSort(Node* head) 
{
    MergeSort(&head);
    
    return head;
}