#include<iostream>
using namespace std;

int main()
{
    int arr[10];
    int  n,ub,mid,term;
    int lb = 0;

    cout<<"Enter the number of array"<<endl;
    cin>>n;
    cout<<"Enter the elements of array in a sorted manner"<<endl;
    ub = n-1;
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }    
    cout<<"Your array is "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    

    cout<<"Enter the term you want to find"<<endl;
    cin>>term;

    if(term > arr[n-1])
    {
        cout<<"Term not found"<<endl;
        return 0 ;
    }
    while(lb<=ub)
    {
        mid = (lb + ub)/2;

        if(arr[mid] == term )
        {
            cout<<"Found at "<<mid<<"th index";
            return 0 ;
        }
        else if (term >arr[mid])
        {
            lb = mid+1;
        }
        else 
        {
            ub = mid-1;
        }
    }

    cout<<"Element not found"<<endl;
    return 0 ;
}