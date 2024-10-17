#include <iostream>
#include <climits>
using namespace std;

int main(){

    int Elements[]={0,22,44,66,88,1,9};

     int n = sizeof(Elements)/sizeof(Elements[0]);

      int Smallest=INT_MAX;
      int Largest=INT_MIN;

      int SmallestIndex;
      int Largestindex;


        for(int i=0;i<n;i++)
        {
            if(Smallest>Elements[i]){
                Smallest=Elements[i];
                SmallestIndex=i;
            }
            if(Largest<Elements[i]){
                Largest=Elements[i];
                Largestindex=i;
            }

        }

        cout << "Smallest element "<<Smallest<<" is at index: " << SmallestIndex << endl;
        cout << "Largest element "<<Largest<<" is at index: " << Largestindex << endl;



    return 0;
}
