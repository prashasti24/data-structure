#include <iostream>
#define size 5
using namespace std;
class node
{
public:
    node()
    {
        next=NULL;
    }
    int data;
    node *next;
}*front=NULL,*rear=NULL;
class circular_queue
{
public:
    void Enqueue();
    void dequeue();
    void disp();
};
int c=1;
void circular_queue :: Enqueue()
{   if(c>size)
      {
          cout<<"overflow\n";
      }
    else
    {
    int ele;
    cout<<"enter element\n";
    cin>>ele;
    node *temp=new node;
    temp->data=ele;
    temp->next=front;
    if(front==NULL&& rear==NULL)
    {
        front=temp;
        temp->next=front;
        rear=temp;
        c=c+1;
    }
    else
    {
       node *p;
       p=front;
       while(p->next!=front)
       {
           p=p->next;
       }
       p->next=temp;
       c=c+1;
       rear=temp;
       temp->next=front;
    }
    }
}
void circular_queue :: dequeue()
{
    if(front==NULL && rear==NULL)
    {
        cout<<"underflow\n";
    }
    else if(front->next==front)
    {
        front=NULL;
        rear=NULL;
    }
    else
    {
    front=front->next;
    rear->next=front;
    }


}
void circular_queue :: disp()
{
    node *p;
    if(front==NULL&&rear==NULL)
    {
        cout<<"link list is empty\n";
    }
    else
    {
    p=front;
    while(p->next!=front)
    {
        cout<<p->data<<" -> ";
        p=p->next;
    }
    cout<<p->data<<" -> ";
    cout<<p->next->data<<endl;
    }
}
int main()
{
   int n,ch;
   circular_queue q;
   cout<<"enter size ";
   cin>>n;
   for(int i=0;i<n;i++)
   {
       q.Enqueue();
   }
   cout<<"1) Enqueue\n2) dequeue\n3) display\n4) exit\n";
    cin>>ch;
    while(ch!=4)
    {
        switch(ch)
        {
            case 1: q.Enqueue();
            break;
            case 2 : q.dequeue();
            break;
            case 3 : q.disp();
            break;
        }
    cout<<"1) enqueue\n2) dequeue\n3) display\n4) exit\n";
    cin>>ch;
    }
    return 0;
}
