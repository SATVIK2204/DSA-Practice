//Question Link -   https://practice.geeksforgeeks.org/problems/delete-keys-in-a-linked-list/1/?category[]=Linked%20List&difficulty[]=1&page=1&query=category[]Linked%20Listdifficulty[]1page1#


// Required Function

Node* deleteAllOccurances(Node *head,int x)
{
    Node* temp=head;
    Node* prev;
    while (head->data == x)
    {
        head = head->next;
    }
    while (temp->next != NULL)
    {
        if (temp->next->data == x)
        {
            temp->next = temp->next->next;
        }
        else
        {
            temp = temp->next;
        }
    }
    return head;
}
}