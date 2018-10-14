#include <iostream>

using namespace std;
class array1
{
    int n;
    int a[30];
public:
    array1()
    {
      cout<<"size : ";
      cin>>n;
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }
    }
    void insert_element()
{
    int ele;
    int pos;
    cout<<"Enter element to insert : ";
    cin>>ele;
    //position of element start with 1st element at 1st position
    cout<<"Enter position to enter : ";
    cin>>pos;
    for(int i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=ele;
    n=n+1;
}
  void delete_element()
  {
      int ele,pos=-1;
      cout<<"enter element to delete : ";
      cin>>ele;
      for(int i=0;i<n;i++)
      {
          if(a[i]==ele)
          {
              pos=i;
              break;
          }
      }
      if(pos==-1)
      {
          cout<<"element not found";
      }
      else
      {
       for(int i=pos;i<n;i++)
      {
          a[i]=a[i+1];
      }
      n=n-1;
      }


  }
  void display()
{
     if(n<=0)
      {
          cout<<"array empty";
      }
    else
      {
        for(int i=0;i<n;i++)
        {
        cout<<a[i]<<" ";
        }
       cout<<endl;
      }
}
 void find_element()
 {
     int ele,pos=-1;
      cout<<"enter element to find location : ";
      cin>>ele;
      for(int i=0;i<n;i++)
      {
          if(a[i]==ele)
          {
              pos=i;
              break;
          }
      }
      if(pos==-1)
      {
          cout<<"element not found";
      }
      //positioning start from 1
      else
        {
            cout<<"element "<<ele<<" is at "<<pos+1<<" position";
        }
}

};

int main()
{
    int ch;
    array1 a;
    cout<<"\n1 Insert\n2 Delete\n3 Find location\n4 Display\n5 Exit\n";
    cin>>ch;
    while(ch!=5)
    {
        switch(ch)
        {
            case 1 : a.insert_element();
            break;
            case 2 : a.delete_element();
            break;
            case 3 : a.find_element();
            break;
            case 4 : a.display();
            break;
        }
    cout<<"\n1 Insert\n2 Delete\n3 Find location\n4 Display\n5 Exit\n";
    cin>>ch;
    }
    return 0;
}
