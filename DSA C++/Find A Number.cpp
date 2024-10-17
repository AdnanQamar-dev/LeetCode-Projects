    #include <iostream>

    using namespace std;

    void Change_Val(int arr[] ,int size){

        cout<<"\n In Function : \n";
        for(int i=0;i<size;i++){
        arr[i]=2*arr[i];

        cout<<arr[i]<<" ";
    }
    cout<<endl;
    }

    int find_Target(int arr[],int size,int target){
        for(int i=0;i<size;i++){

            if(arr[i]==target)
                
                cout<<"The Key Is At : "<< i<<"\n";
                
                }

        return -1;
    }



    int main(){

        int arr1[]={1,2,34,12,90};
        
        int sz=sizeof(arr1)/sizeof(arr1[0]);

        int target=-1;
        
          for(int i=0;i<sz;i++){
            cout<<arr1[i]<<" ";
        }

        Change_Val(arr1,sz);

        cout<<" In Main Body : \n";
        
        for(int i=0;i<sz;i++){
            cout<<arr1[i]<<" ";
        }cout<<"\n";
        

        cout<<" Enter The Key You Want To Find : ";

        cin>>target;

        cout<<find_Target(arr1,sz,target);


        

                
                            
        return 0;
    }