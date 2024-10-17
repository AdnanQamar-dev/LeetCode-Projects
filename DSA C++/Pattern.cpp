#include<iostream>
using namespace std;

int main()
{

    int count=0;

    for(int i=5;i>=0;i--)
    {
        for(int j=i;j>0;j--)
        {
            cout<<j;
        }
        cout<<"\n";
    }

    int n=4;

    for(int i=0;i<n;i++)
    {
        
        for(int j=0;j<n-i-1;j++)
        {  
            cout<<" ";
        }
        cout<<"*";


         if(i!=0){ 
            
        
        for(int j=0;j<(2*i-1);j++)
        {  
          
            
            cout<<" ";
        }
              cout<<"*"; 
         }

        cout<<"\n";
    }

  
    
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<" ";
        }

        cout<<"*";


        if(i!=n-2)
        {
        
        for(int j=0;j<(2*(n-2-i)-1);j++)
        {
            cout<<" ";
        }
             cout<<"*";
        }
       
        cout<<endl;
    }


    int n=5;

    for(int i=0;i<n;i++)
    {
        for(int j=1;j<i+1;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<n-i;j++)
        {
            cout<<i+1;
        }
        cout<<"\n";
    }


    char ch='A';
    int n=4;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {

            cout<<ch;         
            
        }
      
       ch++;

      cout<<endl;
    }



    return 0;
}