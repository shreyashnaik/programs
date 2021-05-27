# include<iostream>
using namespace std;
int main()
{
 int i,j,t;
 int a[10];
 int n,count;
 cout<<"enter the total no of elements"<<endl;
 cin>>n;
 for(i=0;i<n;i++)
 {
   cin>>a[i];
   }
   for(i=0;i<n;i++)
   {
    cout<<"\n\nPass"<<i+1<<"\t...\t";
     for(j=0;j<n-i-1;j++)
     {
       if(a[j]>a[j+1])
       {
         t=a[j];
         a[j]=a[j+1];
         a[j+1]=t;
         count++;
         }
         
         }
         
         for(int k=0;k<n;k++)
       cout<<" "<<a[k]<<" ";
       if(count==n-1)
         break;
         }
         
     /*    for(i=0;i<n;i++)
         {
          cout<<a[i]<<endl;
          }*/
          }
