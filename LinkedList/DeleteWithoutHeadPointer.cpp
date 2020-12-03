//Question Link -   https://practice.geeksforgeeks.org/problems/delete-without-head-pointer/1/?category[]=Linked%20List&difficulty[]=1&page=1&query=category[]Linked%20Listdifficulty[]1page1


// Required Function

void deleteNode(Node *node)
{
   Node* temp= node;
   int counter=0;
   while(temp!=NULL){
       counter++;
       temp=temp->next;
   }
   Node* temp1= node;
   int arr[counter];
   int i=0;
   while(temp1!=NULL){
       arr[i]=temp1->data;
       i++;
       temp1=temp1->next;
   }
   Node* temp2= node;
   int j=1;
   while(temp2!=NULL){
       if(j>counter){
           break;
       }
       temp2->data=arr[j];
       j++;
       temp2=temp2->next;
   }
   Node* temp3= node;
   while(temp3->next->next!=NULL){
       temp3=temp3->next;
   }
   temp3->next=NULL;
   
   
}