//Question Link -   https://practice.geeksforgeeks.org/problems/merge-sort-on-doubly-linked-list/1/?category[]=Linked%20List&amp;difficulty[]=1&amp;page=1&amp;query=category[]Linked%20Listdifficulty[]1page1#


// Required Function

void split(Node* head,Node**a, Node** b){
    
    Node* slow=head;
    Node* fast=head->next;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    *a=head;
    slow->next->prev=NULL;
    *b=slow->next;
    
    slow->next=NULL;
    
}

Node *join(Node *first, Node *second){
Node *head, *tail;
if(first -> data < second -> data){
head = first;
first = first -> next;
}
else {
head = second;
second = second -> next;
}
tail = head;
while(first && second){
if(first -> data < second -> data){
tail -> next = first;
tail = first;
first = first -> next;
}
else{
tail -> next = second;
tail = second;
second = second -> next;
}
}
if(first)
tail -> next = first;
if(second)
tail -> next = second;
Node *temp = head;
Node *ans = NULL;
while(temp != NULL){
temp -> prev = ans;
ans = temp;
temp = temp -> next;
}
return head;
}
    
    




void sort(Node** head){
    Node* temp=*head;
    if(temp==NULL || temp->next==NULL){
        return ;
    }
    Node* a=NULL;
    Node* b=NULL;
    
    split(temp,&a,&b);
    
    sort(&a);
    sort(&b);
    
    *head=join(a,b);
    
}

struct Node *sortDoubly(struct Node *head)
{
	sort(&head);
	return head;
}