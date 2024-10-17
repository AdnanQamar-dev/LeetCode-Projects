#include<iostream>
#include<vector>
using namespace std;


int main()
{
    vector<string> Hell={"Adnan \n"};

    for(string i:  Hell)
    {
        cout<<i;
    }
    Hell.push_back("Zedd");
    
    cout<<"After Pushback : \n";

    for(string Val: Hell)
    {
        cout<<Val;
    }

    return 0; 
}

// BoierPlate Code 