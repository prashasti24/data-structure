#include <iostream>

using namespace std;
struct node
{
    int data;
   struct node *next;
};
class link
{
private :
    node *top;
public:
    link()
    {
        top=NULL;
    }
    void push(int n)
    {
        node *temp=new node;
        temp->data=n;
        temp->next=NULL;
        if(top==NULL)
        {
            top=temp;
        }
        else
        {
            temp->next=top;
            top=temp;
        }
    }
    void pop()
    {
                node *ptr=top;
                top=top->next;
                delete(ptr);

    }
    void display()
    {
        if(top==NULL)
        {
            cout<<"link list is empty\n";
        }
        else{
           cout<<top->data<<" ";
        }

    }

};
int main()
{  int n,num,ch;
   link l;
    cout<<"enter size ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        l.push(num);
    }
    cout<<"\n1 push\n2 pop\n3 display\n4 exit\n";
    cin>>ch;
    while(ch!=4)
    {
    switch(ch)
    {
        case 1:
            {
                cout<<"enter element to push : ";
                cin>>num;
                l.push(num);
                break;
            }
        case 2: l.pop();
        break;
        case 3: l.display();
        break;

    }
    cout<<"\n1 push\n2 pop\n3 display\n4 exit\n";
    cin>>ch;
    }
  return 0;
}
