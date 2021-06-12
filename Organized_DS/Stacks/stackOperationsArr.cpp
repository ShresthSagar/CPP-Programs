#include<iostream>
using namespace std;
#define size 1000
class StackArray{
    int top;
    int ar[size];
    public: 
            void push(int val);
            void display();
            void pop();
            void peek();
            StackArray()
            {
                top = -1;
            }

};

void StackArray:: push(int val){
    if(top == size-1)
    {
        cout<<"Overflow!!!...Cannot insert more elements in the stack";
    }
    ar[++top]=val;
    cout<<"Pushed "<<val<<" in the stack\n";
    return;
}

void StackArray:: display(){
    int tempTop = top;
    cout<<"The elements in stack are -\n";
    while(tempTop>-1){
        cout<<ar[tempTop--]<<"\n";
    }
}

void StackArray:: peek(){
    cout<<"Top of the stack is - "<<ar[top]<<"\n";
}

void StackArray:: pop(){
    int val = -1;
    if(top==-1){
        cout<<"Underflow!!!\n";
    }
    else
    {
        val = ar[top];
        cout<<"Popped "<<val<<" from the stack\n";
        top--;
    }
    // return val;
}

int main()
{
    StackArray stackObject;
    stackObject.push(10);
    stackObject.push(20);
    stackObject.push(30);
    stackObject.push(40);
    stackObject.display();
    stackObject.peek();
    stackObject.pop();
    stackObject.peek();
    stackObject.pop();

    return 0;
}
 