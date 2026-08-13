#include<iostream>
using namespace std;
int main()
{
  int a[5];
  int i , min ;
  
  
  cout<<"Enter Array :\n"; 
  for( i=0; i<5; i++)
  {
    cin>>a[i];
  }
  
  cout<<"ARRAY :\t";
  for( i=0;i<5;i++)
  {
    cout<<a[i]<<"\t";
  }
  
  min=0; 
  for(i = 0; i < 5; i++) 
  {     
    if(a[i] < a[min]) 
      {       
          min = i;      
      }  
      }
    for(i = 0; i < 5; i++) {
  int temp = a[min];
      a[min] = a[0];
      a[0] = temp;
      
  }
 cout<<" Array :\n"; 
  for( i=0; i<5; i++)
  {
    cout<<a[i]<<" ";
  }
  
  
  return 0;
}

















