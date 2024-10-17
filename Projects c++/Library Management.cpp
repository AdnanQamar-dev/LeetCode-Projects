#include <iostream>
#include <string.h>
#include <vector>
using namespace std;



class book{


    private:

    string Title;
    string ISBN;
    string Author;


    bool isAvailable;

    public:
    
    book(string T="0",string I="0",string A="0") : Title(T),ISBN(I),Author(A),isAvailable(true){}

    string  getTitle()  const {return Title;}
    string  getISBN()   const {return ISBN;}
    string  getAuthor() const {return Author;}

    bool checkAvailability(){return isAvailable;}


    void BorrowedBook() {
        if (isAvailable) {
            isAvailable=false;
            cout << "\n Book Borrowed Successfully! ";
        } else {
            cout<< "\n Book Is Not Available";
        }
    }

    void ReturnedBook() {
        if (!isAvailable) {
            isAvailable=true;
            cout << "\n Book Has Been Returned Successfully! ";
        } else {
            cout << "\n Book Was Not Returned! ";
        }
    }
};

class User
{
    private:

    string  Name;
    int  Userid;
    vector<book> BorrowedBooks;

    
    
    public:

        User(string n="Default",int id=000) : Name(n),Userid(id) {}
    
        string getName(){return Name;}
        int getuserid(){return Userid;}

        void AddBook(vector <book> &library){

            string Title1,ISBN1,Author1;

            cin.ignore();
            cout<<"\n Enter The Title Of Book !";
            getline(cin,Title1);
            cout<<"\n Enter The ISBN OF THe book !";
            getline(cin,ISBN1);
            cout<<"\n Enter The Author Of the Book!";
            getline(cin,Author1);

           book NewBook(Title1,ISBN1,Author1);
            {
            library.push_back(NewBook);
           }
        }
        
        void BorrowBook(vector <book> & library )
         {  string Bktitle;
            cin.ignore();
            cout<<"\n Enter The Title Of Book you Want To Borrow !";

            
            getline(cin,Bktitle);

            for( book & b:library)
            {
                if(b.getTitle()==Bktitle){
                    if(b.checkAvailability()){
                        b.BorrowedBook();
                        BorrowedBooks.push_back(b);
                        cout<<b.getTitle()<<'\n';
                    }
                    else
                  {
                      cout<<"\n Book Is Already Borrowed !";
                  }
                }
                
                else cout<<"\n Not A Book In Library !";
            }
         }

        void ReturnBook(vector <book> & library){

            bool found=false;

            string TitleR;
            cout<<"\n Enter The Title Of Book You Want To Return !";
            cin.clear();
            cin.ignore();
            getline(cin,TitleR);

            for(book & a: library)
            if(a.getTitle()==TitleR){
                found=true;

                if(!a.checkAvailability())
                {
                    a.ReturnedBook();
                    cout<<a.getTitle();
                }
                else
                {
                    cout<<"\n Book Was Not Borrowed!";
                }

                break;
            }

           if(!found)
            cout<<"\n Book Not Found In Library!";

            

        };
        
               

        void ViewBorrowedBooks()
         {
                cout<<" Borrowed Books Viewed By "<<Name<<endl;

                 for(book&Book : BorrowedBooks)
            {
                cout<<" "<<Book.getTitle()<<" written by "<<Book.getAuthor()<<endl;
            }
            
            }   
   
};

int main()
{   
    vector<book> library;

    library ;
    book z;
    User u{"Adnan",3013};

        int k=-1;
   
    do{     
            cout<<"                                                 \n";
            cout<<"\n ----------Library Management System-----------";
            cout<<"\n 0: Add a Book To Library ";
            cout<<"\n 1: Borrow a Book ";
            cout<<"\n 2: Return a Book ";
            cout<<"\n 3: View Borrowed Books ";
            cout<<"\n 4: Exit The Program \n          :";

            if(!(cin>>k)){

            cin.clear();
            cin.ignore();

            cout<<"\nError 04: Invalid Input Enter A Valid Key !";
            continue;
            }

            switch(k)

            {
                
             case 0: {

                    {
                        u.AddBook(library);
                    }

            }break;
              
                case 1: { if(library.empty()){
                    
                    cout<<"\n Library Is Empty No Books Available TO Borrow! ";
                }
                else{
              
                    u.BorrowBook(library);

                }}break;
    
            case 2: {

              u.ReturnBook(library);

            }break;

            case 3: {

               u.ViewBorrowedBooks();

            }break;

             case 4: {cout<<"\n Program Has Been Terminated \n";}break;

         }   
 
        }    while(k!=4);
    
    return 0;
} 