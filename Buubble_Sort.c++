#include <iostream>
using namespace std;
int main(){
    system("cls");
    int max_size, i, j, temp, arr_size;
    max_size = 10;
    int arr[max_size];
    cout<<"Enter the size for array: ";
    cin>>arr_size;
    cout<<"Enter "<< arr_size << "array elements: ";
    for (int i = 0; i < arr_size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Unordered array : ";
    for ( i = 0; i < arr_size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout << endl;
    for ( i = 0; i < arr_size; i++)
    {
        for(j=0;j<arr_size;j++){
            if (arr[j]<arr[i])
            {
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }  
        }
    }
    cout << "The decending elements in array: ";
    for(i=0;i<arr_size;i++){
        cout<< arr[i] <<" ";
    }
    cout << endl;
    for ( i = 0; i < arr_size; i++)
    {
        cout<<"i" << i ;
        for ( j = 0; j < arr_size; j++)
        { 
            cout<< "\n\t j"<< j;
            cout<<"\t arr_ind[i]"<< i <<": "<< arr[i] <<"\t arr_ind[j]"<< j <<": "<< arr[j];
            if (arr[j]>arr[i])
            {   
                cout<< arr[i] <<" < " << arr[j] << "Trueswap("<< i <<","<< j <<")";
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            }   
        }
    }
    cout<< "\n The acending elements in array: ";
    for ( i = 0; i < arr_size; i++)
    {
      cout<<arr[i]<<" ";
    }
    cout<< endl;
    return 0;
}