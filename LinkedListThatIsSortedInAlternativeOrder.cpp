//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    data =x;
	    next = NULL;
	}
};

void sort(Node **head);


void append(struct Node** headRef, struct Node** tailRef, int newData)
{
	struct Node* new_node = new Node(newData);
	struct Node *last = *headRef;
	if (*headRef == NULL)
	{
	    *headRef = new_node;
	    *tailRef = *headRef;
	    return;
	}
	
	(*tailRef) -> next = new_node;
	*tailRef = (*tailRef) -> next;
}

// A utility function to print a linked list
void printList(Node *head)
{
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

int main()
{
	int test;
	cin>>test;
	while(test--)
	{
	    struct Node* head = NULL;
	    struct Node* tail = NULL;
	    int n, k;
	    cin>>n;
	    for(int i=0; i<n ;i++){
	        cin>>k;
	        append(&head, &tail, k);
	    }
	    sort(&head);
	    printList(head);
	}
	return 0;
}

// } Driver Code Ends


/*Structure of Node of the linked list is as
struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    data =x;
	    next = NULL;
	}
};
*/
// your task is to complete this function
Node* merge(Node* a,Node* b)
{
    if(a == NULL)
    {
        return b;
    }
    else if(b == NULL)
    {
        return a;
    }
    
    Node* res=new Node(-1);
    Node* temp=res;
    
    while(a && b)
    {
        if(a->data < b->data)
        {
            temp->next=a;
            a=a->next;
            temp=temp->next;
        }
        else
        {
            temp->next=b;
            b=b->next;
            temp=temp->next;
        }
    }
    
    if(a)
    {
        temp->next=a;
    }
    if(b)
    {
        temp->next=b;
    }
    
    return res->next;
}
void sort(Node *head)
{
     Node* asc=head;
     Node* desc=head->next;
     
     while(desc)
     {
         asc->next=desc->next;
         asc=asc->next;
         
         desc->next=asc->next;
         desc=desc->next;
     }
     
     head=merge(asc,desc);
     
     
}
