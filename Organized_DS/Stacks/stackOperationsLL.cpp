#include<iostream>
using namespace std;

class StackList{
    public: int data;
            StackList *next;
    
            StackList(int val)
            {
                data = val;
                next = NULL;
            }
};

StackList * push(StackList *top)
{
    int val;
    cout<<"Value to push: ";
    cin>>val;
    StackList *temp = new StackList(val);
    temp->next = top;
    top = temp;
    cout<<top->data<<" is pushed into stack\n";
    return top;
}


StackList * pop(StackList *top)
{
    if(top->next == NULL)
    {
        cout<<top->data<<" - is popped from the stack\n";
        delete top;
        top=NULL;
        return top;
    }
    StackList * temp = top;
    top = top->next;
    
    cout<<temp->data<<" is popped from the stack\n";
    delete temp;
    return top;
}

void display(StackList *top)
{
    cout<<"\n-----\n";
    StackList *temp = top;
    while(temp!=NULL){
        cout<<"val: "<<temp->data<<"\n";
        temp = temp->next;
    }
}

void peek(StackList *top)
{
    cout<<"Top of the stack is: "<<top->data<<endl;
}

int main()
{
    StackList *top = NULL;
    top = push(top);
    peek(top);
    top = push(top);
    // cout<<"Top of the stack is: "<<top->data<<endl;
    top = push(top);
    top = push(top);
    display(top);

    top = pop(top);
    display(top);

    top = pop(top);
    top = pop(top);
    top = pop(top);
    display(top);
    peek(top);

    return 0;
}