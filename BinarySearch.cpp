//Binary Search
#include<iostream>
#include<math.h>

using namespace std;

int BnS(int z,int arr[],int key)
{
  int s = 0 , e=z;  //starting point (s) and ending point (e) 
  
  while(s<=e)
  {
    int mid= (s+e)/2;
    if(arr[mid]==key)
    {
        return mid;
    }
    else if(arr[mid]>key)
    {
        e=mid-1;
    }
    else 
    {
        s=mid+1;
    }

  }
  return -1;
}

int main()
{
    int s;
    cout<<"Enter Size ";
    cin>>s;
   
    int arr[s];
    for(int i=0; i<s; i++)
    {
        cout<<"Enter the "<<i+1<<"th value ";
        cin>>arr[i];
        cout<<endl;
    }
    
    int key;
    cout<<"No. you want to search ";
    cin>>key;
    cout<<"index ";
    cout<<BnS(s,arr,key);
}
