//Question Link -   https://practice.geeksforgeeks.org/problems/swap-kth-node-from-beginning-and-kth-node-from-end-in-a-singly-linked-list/1/?category[]=Linked%20List&difficulty[]=1&page=1&query=category[]Linked%20Listdifficulty[]1page1#


// Required Function

Node *swapkthnode(Node* head, int n, int k)
{if(k>n)
return head;

if(k==n-k+1)
return head;

Node*temp1=head,*temp2=head;
Node*prev1=NULL,*prev2=NULL;

for(int i=1;i<n-k+1;i++) {prev1=temp1; temp1=temp1->next;

}

for(int i=1;i<k;i++) {prev2=temp2; temp2=temp2->next;
}

if(prev1)
prev1->next=temp2;
if(prev2)
prev2->next=temp1;

Node*temp=temp1->next;
temp1->next=temp2->next;
temp2->next=temp;

if(k==1)
head=temp1;
if(k==n)
head=temp2;
return head;}