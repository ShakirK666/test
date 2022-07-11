#include<iostream>
using namespace std;
int stack[100],n=5,top=-1;
void push(int val)
{
    if(top>=-1)
    cout<<"Stack overflow"<<endl;
    else
    {
        top++;
        stack[top]=val;
    }
}
void pop()
{
    if(top<=-1)
    cout<<"Stack underflow"<<endl;
    else
    {
        cout<<"The popped element is"<<stack[top]<<endl;
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        cout<<"Stack elements are :";
        for(int i=top;i>=0;i++)
        cout<<stack[i]<<" ";
        cout<<endl;
    }
    else
    cout<<"Stack is empty\n";
}
void topelement()
{
    if(top<=-1)
    {
        cout<<"Stack is empty"<<endl;
    }
    cout<<"Top element is"<<stack[top]<<endl;
}
void empty()
{
    if(top<=-1)
    cout<<"Stack is empty\n";
    else
    cout<<"Stack is not empty"<<endl;
}
int main()
{
    int ch,val;
    cout<<"1) Push in stack\n";
    cout<<"2) Pop in stack\n";
    cout<<"3) Display stack\n";
    cout<<"4) To return top element\n";
    cout<<"5) To check empty\n";
    cout<<"6) Exit\n";
    do
    {
        cout<<"Enter your choice :";
        cin>>ch;
        switch(ch)
        {
            case 1:cout<<"Enter the value to be pushed :";
            cin>>val;
            push(val);
            break;
            case 2:pop();
            break;
            case 3:display();
            break;
            case 4:topelement();
            break;
            case 5:empty();
            break;
            case 6:cout<<"Exit\n";
            break;
            default:cout<<"Invalid choice\n";
        }
    } while (ch!=6);
    return 0;
}