//Question Link -   https://practice.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1/?category[]=Linked%20List&difficulty[]=1&page=1&query=category[]Linked%20Listdifficulty[]1page1#


// Required Function

int size(Node* head){
    Node* temp= head;
    int count=0;
    while(temp!=NULL){
        count=count+1;
        temp=temp->next;
    }
    return count;
}

int intersectPoint(Node* head1, Node* head2)
{
    int size1=size(head1);
    int size2=size(head2);
    if(size1>=size2){
        Node* temp2=head2;
        while(temp2!=NULL){
            Node* temp1=head1;
            while(temp1!=NULL){
                if((temp1->data==temp2->data) & (temp1==temp2)){
                    return temp1->data;
                }
                temp1=temp1->next;
            }
            temp2=temp2->next;
        }
    }
    else{
        Node* temp1=head1;
        while(temp1!=NULL){
            Node* temp2=head2;
            while(temp2!=NULL){
                if((temp2->data==temp1->data) & (temp2==temp1)){
                    return temp2->data;
                }
                temp2=temp2->next;
            }
            temp1=temp1->next;
        }
    }
}