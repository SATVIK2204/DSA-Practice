//Question Link -   https://practice.geeksforgeeks.org/problems/polynomial-addition/1/?category[]=Linked%20List&difficulty[]=1&page=1&query=category[]Linked%20Listdifficulty[]1page1#


// Required Function

Node* addPolynomial(Node *p1, Node *p2)
{
    Node* result=NULL;
    Node* prev=NULL;
    Node* tail=result;
    Node* temp1=p1;
    Node* temp2=p2;
    
    while((temp1!=NULL) && (temp2!=NULL)){
        if(temp1->pow==temp2->pow){
            temp1->coeff=temp1->coeff+temp2->coeff;
            prev=temp1;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        else if(temp1->pow>temp2->pow){
            if(prev){
                prev=prev->next;
            }
            else if(prev==NULL){
                prev=temp1;
            }
            temp1=temp1->next;
        }
        else if(temp1->pow<temp2->pow){
            if(prev){
            Node* newnode=new Node(temp2->coeff,temp2->pow);
            newnode->next=prev->next;
            prev->next=newnode;
            prev=newnode;
            temp2=temp2->next;
            }
            else if(prev==NULL){
            Node* newnode=new Node(temp2->coeff,temp2->pow);
            newnode->next=p1;
            p1=newnode;
            prev=p1;
            temp2=temp2->next;
            }
        }
        
    }
    
return p1;
}