//Question Link -   https://practice.geeksforgeeks.org/problems/quick-sort-on-linked-list/1/?category[]=Linked%20List&difficulty[]=1&page=1&query=category[]Linked%20Listdifficulty[]1page1#


// Required Function

node* partition(node* head,node*end,node**newhead,node**newend){
    
    node*prev=NULL;
    node*curr=head;
    node* pivot=end;
    node* tail=pivot;
    while(curr!=pivot){
    
    if(curr->data<pivot->data){
        if((*newhead)==NULL){
            *newhead=curr;
        }
        prev=curr;
        curr=curr->next;
    }
    else{
        if(prev){
            prev->next=curr->next;
        }
        node*temp=curr->next;
        curr->next=NULL;
        tail->next=curr;
        
        tail=curr;
        curr=temp;
    }
}
    if((*newhead)==NULL){
        *newhead=pivot;
    }
    *newend=tail;
    return pivot;
}

node* sort(node* head,node* end){
    
    if(head==end || head==NULL ){
        return head;
    }
    
    node* newhead=NULL;
    node* newend=NULL;
    
    node* pivot=partition(head,end,&newhead,&newend);
    
    if(newhead!=pivot){
        
        node* temp=newhead;
        while(temp->next!=pivot){
            temp=temp->next;
        }
        
        temp->next=NULL;
        newhead=sort(newhead,temp);
        
        node* temp2=newhead;
        while(temp2->next!=NULL){
            temp2=temp2->next;
        }
        temp2->next=pivot;
        
    }
    pivot->next=sort(pivot->next,newend);
    return newhead;
    
    
}

void quickSort(struct node **headRef) {
    
    node* head=*headRef;
    node*temp=*headRef;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    
    head=sort(head,temp);
    *headRef=head;
}