// Implementation of Binary Search  

#include<iostream>
using namespace std;

int main()
{
    int a[100],n,i,beg,end,mid,item;
    cout<<"\n         Binary Search          \n";
    cout<<"\n Enter the no. of Elements :";
    cin>>n;
    cout<<"\n Enter the Elements in Sorted order : \n";
    for ( i = 1; i <= n; i++)
    {
        cin>>a[i];
    }
    cout<<"\n Enter the item you want to search :";
    cin>>item;
    beg=1;
    end=n;
    mid=(beg=end)/2;
    while (beg<=end && a[mid]!=item)
    {
        if (a[mid]<item)
            beg=mid+1; 
            else
            end=mid-1;
            mid=(beg+end)/2;
    }       

        if (a[mid]==item)
        {
            cout<<"\n Data is found at location :"<<mid;
        }
        else
        {
            cout<<"Data is not found";
       }
        
        

    

    
}
