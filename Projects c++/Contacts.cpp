   /**************************************************************
                        CONTACTS
    ****************************************************************/

#include <iostream>
#include <vector>
#include <string.h>
#include <fstream>

using namespace std;

class Contacts
{
    private:

    string Name;
    string PhoneNumber;    
    string Address;
    string Email;

    public:

    Contacts(string N="0",string Pnum="1042470924",string Adrs="0",string mail="0"):Name(N),PhoneNumber(Pnum),Address(Adrs),Email(mail){}
    
    fstream ContactsLog;

   void AddContacts()
   {
        
        cout<<"\n Enter The Name Of The Contact ";
        getline(cin,Name);
        cout<<"\n Enter the Phone number Of Contact ";
        getline(cin,PhoneNumber);
        cout<<"\n Enter The Address Of The Contact ";
        getline(cin,Address);

        ContactsLog.open("ContactsLogData.exe" , ios::out | ios::app );
        if( ContactsLog.is_open()){
            ContactsLog<<Name<<PhoneNumber<<Address;
            ContactsLog.close();

            cout<<"\n Contact Sucessfully Added ";
        }
        else
        {
            cout<<"\n Error 4 : File Not Opened! ";
        }
       
        
     


        }
   };





int main()
{
    int Option={0};

    cin>>Option;

    while (Option!=4)
    {
     
    cout<<"\n************Contact Management System***************";
    cout<<"\n 1. Add A Contact ";
    cout<<"\n 2. Remove A Contact ";
    cout<<"\n 3. View The Contacts ";
    cout<<"\n 4. Terminate The Program ";



    }
    
    return 0;
}

