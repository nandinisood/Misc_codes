//From a linked list, remove the nth to last node and return the resulting list.

#include<bits/stdc++.h>
using namespace std;
struct node 
{
    int data;
    struct node* next;
};
struct node* head=NULL;

void add ()
{
    struct node* ptr;
    ptr=new struct node;
    if (ptr==NULL)
    cout<<"\nOverflow!!";
    else
    { 
        cout<<"\nEnter data: ";
        cin>>ptr->data;
        if(head==NULL)
        {
            head=ptr;
            head->next=NULL;
        }
        else
        {   
        struct node* temp;
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=ptr;
        ptr->next=NULL;
cout<<"\nNode Inserted! ";
        }
    }
}

void del (int k)
{
    int i;
struct node* ptr, *temp;
ptr=head;
if (k==0)
{
    head=ptr->next;
    free(ptr);
}
else
{
    for (i=0; i<k-1; i++)
{
    ptr=ptr->next;
}
temp=ptr->next;
ptr->next=temp->next;
free(temp); 
}}

void disp()
{
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<"\n";
}

int main()
{
    char ch;
    int count=0,n,k;
do
{
    int opt;
    cout<<"1: Enter data\n2: Delete Data\n3: Display\n";
    cin>>opt;
    if (opt==1)
        {
            add();
            count++;
        }
    else if (opt==2)
        {
            do{
            cout<<"Enter n: ";
            cin>>n;
               }while(n>count);
            k=count-n;
            del(k);

            count--;
        }
    else if (opt==3)
        disp();
    else
        cout<<"Invalid option! ";
    cout<<"Continue? (y/n): ";
    cin>>ch;   
}while(ch=='y');
return 0;
}