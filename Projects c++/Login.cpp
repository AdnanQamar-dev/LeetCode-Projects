/******************************************************************************

                                ___LOGIN___

*******************************************************************************/
#include <iostream>
#include <fstream>

using namespace std;

class temp
{
public:

	string setusername, setpassword,setemail;
	fstream file;

	public:

	void signUp();

	void login();

	void forgot();

};

void temp :: signUp()
{
	cin.ignore();

	cout<<"\n Enter The Username ";
	getline(cin,setusername);
	cout<<"\n Enter The password ";
	getline(cin,setpassword);
	cout<<"\n Enter Your Gmail ";
        getline(cin,setemail);
        
	file.open("LoginData.txt",ios::out | ios::app);

	if(file.is_open()) {

		file<<"*"<<setusername<<"*"<<setpassword<<"*"<<setemail<<endl;
		file.close();

		cout<<"\n signed up successfully! \n"<<endl;

	} else
	{
		cout<<"\nError Opening file!\n";
	}

}
void temp :: forgot(){
        
        string userfound,mailfound;
        
        bool usernamefound=false;
        
        cin.ignore();
        cout<<"\n Enter The username \n";
        getline(cin,userfound);
        cout<<"\n Enter the Gmail \n";
        getline(cin,mailfound);
        
        file.open("LoginData",ios::app | ios::in);
        
        if(file.is_open()){
                while(file>>userfound>>mailfound){
                        if(setemail==mailfound && setusername==userfound)
                        {
                            usernamefound=true;   
                        }break;
                }
        
                if(usernamefound=true)
                {
                        cout<<"\n Username Is "<<setusername<<"\n password is "<<setpassword<<endl; 
                }
                else
                {
                        cout<<"\n User Name Or Gmail Are Not Correct! \n";
                }
        }
        
        
        
}

void temp :: login() {

	string username,password;

	bool loginSucess;

	cin.ignore();

	cout<<"\n*********___LOGIN___*********";

	cout<<"\n Enter username ";
	getline(cin,username);

	cout<<"\n Enter password ";
	getline(cin,password);

	file.open("LoginData",ios::app | ios::in);

	if(file.is_open()) {
		while(file>>username>>password) {
			if(username==setusername&&password==setpassword) {
				loginSucess=true;
			}
			break;
		}
	}
	if(loginSucess=true)
	{
		cout<<"\n logged in successfully! \n";
	} else
	{
		cout<<"\n log in unsuccessfull! \n";
	}


}

int main()
{
	temp obj1;
	char choice=0;

	do {

		cout<<"\n1 -> Sign Up "<<endl;
		cout<<"2 -> Login "<<endl;
		cout<<"3 -> Forgot password "<<endl;
		cout<<"4 -> Exit  \n"<<endl;

		cin>>choice;

		switch(choice)
		{
		case '1':{obj1.signUp();} break;
		
		case '2':{obj1.login();} break;
		
		case '3':{obj1.forgot();} break;


	}} while(choice!='4');

	return 0;
}

