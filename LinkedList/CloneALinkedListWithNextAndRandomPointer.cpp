//Question Link -   https://practice.geeksforgeeks.org/problems/clone-a-linked-list-with-next-and-random-pointer/1/?category[]=Linked%20List&difficulty[]=1&page=1&query=category[]Linked%20Listdifficulty[]1page1#


// Required Function

Node *copyList(Node *head) {
    // Your code here
    Node* temp=head;
    Node* result=NULL;
    Node* tail=NULL;
    while(temp!=NULL){
        if(result==NULL){
            result=new Node(temp->data);
            tail=result;
        }
        else{
            tail->next=new Node(temp->data);
            tail=tail->next;
        }
        
        if(temp->arb){
            tail->arb=temp->arb;
        }
        temp=temp->next;
    }
    return result;
    
}