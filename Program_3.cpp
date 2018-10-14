#include <iostream>

using namespace std;

int main()
{
    int n,ele,pos=-1;
    int beg,end,mid;
    cout<<"size : ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"enter element to search : ";
    cin>>ele;
    beg=0;
    end=n-1;
    mid=(beg+end)/2;
    while(beg<=end)
    {
        if(a[mid]==ele)
        {
            pos=mid;
            break;
        }
        else if(a[mid]<ele)
        {
            beg=mid+1;
        }
        else if(a[mid]>ele)
        {
            end=mid-1;
        }
        mid=(beg+end)/2;
    }
    cout<<"Array sorted \n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    if(pos==-1)
    {
        cout<<"element not found \n";
    }
    else
    {
        cout<<"element "<<ele<<" is at "<<pos+1<<" position\n";
    }

    return 0;
}
