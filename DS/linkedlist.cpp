#include<iostream>
#include<vector>
#include<conio.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};


bool isempty(node *head)
{
    if(head == NULL)
    {
        cout<<"\n\n\t\t Linked list is empty...\n\n";
        return 1;
    }
    else return 0;
}

void disp(node *head)
{
    if(isempty(head))
        return;
    /*if(head == NULL)
    {
        cout<<"\n\t\t Linked list is empty \n\n";
        return ;
    }*/
    node *temp = head;
    cout<<"\n\t\t Head ->";
    while(temp!=NULL)
    {
        cout<<" "<<temp->data<<" ->";
        temp = temp->next;
    }
    cout<<" NULL\n\n";
}


node *insbeg(node *head)
{
    int val;
    cout<<"\n Enter value to insert: ";
    cin>>val;
    node *newnode = new node(val);
    newnode->next = head;
    disp(newnode);
    return newnode;
}


node *inspos(node *head)
{
    int val, pos;
    cout<<"\n Enter Position: ";
    cin>>pos;
    if(pos <= 1)
    {
        head = insbeg(head);
        return head;
    }

    cout<<"\n Enter value to insert: ";
    cin>>val;

    node *newnode = new node(val);
    node *temp = head;
    for(int i=0; i<pos-2; i++)
    {
        temp = temp->next;
        if(temp==NULL)
            break;
    }
    if(temp == NULL)
    {
        cout<<"\n\t\t Invalid Position \n\n";
        return head;
    }
    else
    {
        newnode->next = temp->next;
        temp->next = newnode;
    }
    disp(head);
    return head;
}


node *insend(node *head)
{
    if(head == NULL)
    {
        head = insbeg(head);
        return head;
    }

    int val;
    cout<<"\n Enter value to insert at end: ";
    cin>>val;
    node *temp = head;
    node *newnode = new node(val);
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    disp(head);
    return head;
}


node *insort(node *head)
{
    if(head == NULL)
    {
        head = insbeg(head);
        return head;
    }
    int val;
    cout<<"\n Enter value to insert: ";
    cin>>val;
    node *newnode = new node(val);

    if(val<head->data)
    {
        newnode->next = head;
        disp(newnode);
        return newnode;
    }

    node *temp = head;
    while((temp->next!=NULL)&&(temp->next->data<val))
    {
        temp = temp->next;
    }
        newnode->next = temp->next;
        temp->next = newnode;
        disp(head);
        return head;
}

node *delbeg(node *head)
{

    if(isempty(head))
        return head;
    /*if(head==NULL)
    {
        cout<<"\n\t\t Linked list is empty\n\n";
        return head;
    }*/

    node *temp = head->next;
    delete head;
    disp(temp);
    return temp;
}


node *delpos(node *head)
{
    if(isempty(head))
        return head;
    /*if(head == NULL)
    {
        cout<<"\n\t\t Linked list is already empty\n\n";
        return head;
    }*/
    int del;
    cout<<"\n Enter value to delete : ";
    cin>>del;
    node *temp = head;

    if(head->data == del)
    {
        head = head->next;
        delete temp;
        disp(head);
        return head;
    }

    for( ; temp->next!=NULL&&temp->next->data != del; temp = temp->next);

    if(temp->next==NULL)
    {
        if(temp->data==del)   //only one node is present and data to be delete.
        {
            delete temp;
            head = NULL;
            return head;
        }
        else
        {
            cout<<"\n\t\tValue not present in the list.\n\n";
            return head;
        }
    }
    node *delnode = temp->next;
    temp->next = temp->next->next;
    delete delnode;
    disp(head);
    return head;
}

node *delend(node *head)
{

    if(isempty(head))
        return head;
    /*if(head == NULL)
    {
        cout<<"\n\n\t\t Linked list is already empty\n\n";
        return head;
    }*/
    if(head->next==NULL)
    {
        delete head;
        cout<<"\n\n\t\t Linked list is empty now\n\n";
        return NULL;
    }
    node *temp = head, *delnode;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    delnode = temp->next;
    temp->next = NULL;
    delete delnode;
    disp(head);
    return head;
}

void searchele(node *head)
{
    if(isempty(head))
        return;
    /*if(head == NULL)
    {
        cout<<"\n\t\t Linked list is empty...\n";
        return;
    }*/
     int val;
     cout<<" Enter value to search in linked list : ";
     cin>>val;
    while(head!=NULL)
    {
        if(head->data == val)
        {
            cout<<"\n\t\t found: "<<val<<"\n\n";
            return;
        }
        head = head->next;
    }
    cout<<"\n\t\t Not Found\n\n";
}


void midlist(node *head)
{
    if(head == NULL)
    {
        cout<<"\n\n\t\t Linked list is empty... No mid node\n\n";
        return;
    }
    node *slow=head, *fast=head;
    for(; fast!=NULL&&fast->next!=NULL; slow = slow->next, fast = fast->next->next);

    cout<<"\n\n\t\t Mid node data is : "<<slow->data<<"\n\n";

}



node *revlist(node *head)
{
    if(isempty(head))
        {
            //disp(head);
            return head;
        }
    if(head->next==NULL)
    {
        cout<<"\n\t\t Only one node is present..\n";
        disp(head);
        return head;
    }

    vector<int>v;
    node *temp = head;
    while(temp!=NULL)
    {
        v.push_back(temp->data);
        temp=temp->next;
    }

    temp = head;

    for(int i=v.size()-1; i>=0; i--)
    {
        temp->data = v[i];
        temp=temp->next;
    }
    disp(head);
    return head;
}


void  rem_dup(node *head)
{
    if(isempty(head))
        return;

    cout<<"\n Input is assumed to be a sorted list \n";
    if(head->next == NULL)
    {
        disp(head);
        return;
    }

    node *delnode,*temp = head;
    node *next_temp= temp->next;
    while(next_temp!=NULL)
    {
        if(temp->data == next_temp->data)
        {
            temp->next = next_temp->next;
            delnode = next_temp;
            delete(delnode);
            next_temp = temp->next;
        }
        else{
            temp=temp->next;
            next_temp=next_temp->next;
        }

    }

    disp(head);

}


void nth_last(node *head)
{
    if(isempty(head))
        return;

    int n;
    cout<<"\n Enter n from end: ";
    cin>>n;

    node *first = head, *second = head;
    for(int i=0; i<n-1; i++)
    {
        if(second->next==NULL)
        {
            cout<<"\n\n\t\t There are less number of nodes...\n\n";
            return;
        }
        second = second->next;
    }

    for(; second->next!=NULL; second=second->next)
    {
        first = first->next;
    }
    cout<<"\n\n\t\t "<<n<<"th node from last is: "<<first->data<<"\n\n";

}


int main()
{
    node *head = NULL;
    int ch;
    do{
        cout<<" Singly Linked List Operations\n";
        cout<<" 1. Insert at beginning\n 2. Insert at position\n 3. Insert at end\n";
        cout<<" 4. Insert in Sorted list\n 5. Delete at beginning\n 6. Delete at position\n";
        cout<<" 7. Delete at end\n 8. Search\n 9. Display\n 10.Print Middle\n";
        cout<<" 11.Reverse the linked list\n 12.Remove Duplicates\n 13.Nth Node From Last\n 0. Exit\n";
        cout<<" Enter your choice: ";
        cin>>ch;
        //system("cls");
            if(ch==1)
            {
                head = insbeg(head);
            }
            else if(ch==2)
            {
                head = inspos(head);
            }
            else if(ch==3)
            {
                head = insend(head);
            }
            else if(ch==4)
            {
                head = insort(head);
            }
            else if(ch==5)
            {
                head = delbeg(head);
            }
            else if(ch==6)
            {
                head = delpos(head);
            }
            else if(ch==7)
            {
                head = delend(head);
            }
            else if(ch==8)
            {
                searchele(head);
            }
            else if(ch==9)
            {
                disp(head);
            }
            else if(ch==10)
            {
                midlist(head);
            }
            else if(ch==11)
            {
                head = revlist(head);
            }
            else if(ch==12)
            {
                rem_dup(head);
            }
            else if(ch==13)
            {
                nth_last(head);
            }
            else
            {
                cout<<"Exiting...";
                return 0;
            }
    }while(1);

}
