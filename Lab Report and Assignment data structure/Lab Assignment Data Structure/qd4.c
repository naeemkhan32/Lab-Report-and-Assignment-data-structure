

/* Write a program that implement stack (Push & Pop) using Linked list (Pointers).  */


#include <bits/stdc++.h>
using namespace std;


struct Node{
    int data;
    Node *prev, *next;
    Node(int x) {       // constructor
        data = x;
    }
};


struct DL_List{
    Node *top;

    DL_List();
    ~DL_List();
    void insertAtEnd(int data);
    int deleteFromEnd();

};


struct Stack{
    DL_List S;

    Stack() {}
    void push(int data);
    int pop();
    bool isEmpty();
};


DL_List :: DL_List()
{
    top = NULL;
}


DL_List :: ~DL_List()
{
    Node *p = top;
    while(p)
    {
        top = p->prev;
        delete p;
        p = top;
    }
}


void DL_List :: insertAtEnd(int data)
{
    Node *n = new Node(data);

    if(top == NULL)
    {
        top = n;
        n->prev = NULL;
        n->next = NULL;
    }
    else
    {
        top->next = n;
        n->prev = top;
        n->next = NULL;
        top = n;
    }

}


int DL_List :: deleteFromEnd()
{
    if(top == NULL)
    {
        cout << "Stack empty." << endl;
        return -1;
    }

    int data;
    if(top->prev==NULL and top->next==NULL)
    {
        data = top->data;
        delete top;
        top = NULL;
    }
    else
    {
        data = top->data;
        Node *t = top;
        top = t->prev;
        top->next = NULL;
        delete t;
    }
    return data;
}


void Stack :: push(int data)
{
    S.insertAtEnd(data);
    cout << data << " is pushed in the stack." << endl;
}


int Stack :: pop()
{
    // checking for underflow
    if( isEmpty() )
    {
        cout << "Stack is empty." << endl;
        return -1;
    }

    int data = S.deleteFromEnd();
    cout << data << " is popped from the stack." << endl;
    return data;
}

bool Stack :: isEmpty()
{
    return (S.top == NULL);
}


int main()
{
    Stack myStack;
    myStack.push(50);
    myStack.pop();
    myStack.pop();

    return 0;
}
