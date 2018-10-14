#include <iostream>

using namespace std;

int main()
{
    int n,ele,pos=-1;
    cout<<"size : ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }
    cout<<"enter element to search : ";
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
        cout<<"element not found ";
    }
    //positioning to be consider from 1
    else
    {
        cout<<"element "<<ele<<" is at "<<pos+1<<" position";
    }
    return 0;
}
