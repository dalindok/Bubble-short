#include <iostream>
using namespace std;
class Array_Operation{
    public:
        int arr[10],i,element, pos, arr_size, j , temp;
        void insert(){
            cout << "Enter Size of Array : ";
            cin >> arr_size;
            if(arr_size > 10){
                cout << "Maximux Array Length 10.";
            }else{
            int i = 0;
            while (i<arr_size)
            {
                cout << "Enter element of Position" << i << " : ";
                cin >> arr[i];
                i++;
            }
            }
        }
        void insert_at_biginning(){
            cout << "Insert New Array in the biginning";
            cout << "\nEnter Element of Array : ";
            cin >> element;
            for ( i = arr_size  ; i > 0 ; i--)
          {
            arr[i] = arr[i-1];
          }
              arr[0]  = element;
                arr_size++;
                 display_Arr();
        }
        void insert_at_ending(){
            cout << "Insert New Array in the ending";
            cout << "\nEnter Element of Array : ";
            cin >> element;
            arr[arr_size] = element;
                arr_size++;
                 display_Arr();
        }
        void insert_anyPos(){
            cout << "Insert New Array";
            cout << "\nEnter Position of Array : ";
            cin >> pos;
            cout << "Enter Element of Array : ";
            cin >> element;
            if(pos > arr_size){
                cout << "Invalid Position\n";
            }else{
                int i = arr_size;
                while(i>pos){
                    arr[i] = arr[i-1];
                    i--;
                }
                arr[i]  = element;
                arr_size++;
                display_Arr();
            }
        }
        void delete_at_biginning(){
            cout << "Delete Element From Array at the biginning\n";
            for(i = 0; i < arr_size-1; i++){
                arr[i] = arr[i+1];
            }
            //   arr[0]  = element;
                arr_size--;
                 display_Arr();
        }
        void delete_at_ending(){
            cout << "Delete Element From Array at the last\n";
          arr[arr_size] = element;
                arr_size--;
                 display_Arr();
        }
        void delete_anyPos(){
            cout << "Delete Element From Array";
            cout << "\nEnter the position to delete (0 to " << arr_size - 1 << "): ";
            cin >> pos;
            if(pos > arr_size){
                cout << "Invalid Position\n";
            }else{
                int i = pos;
                while(i<arr_size){
                    arr[i] = arr[i+1];
                    i++;
                }
                arr_size--;
                display_Arr();
            }
        }
        void display_Arr(){
            // cout << "Display Array\n";
            int i = 0;
            cout<<"\t";
            while(i<arr_size){
                cout << arr[i] <<" ";
                i++;
            }
            cout<<endl;
        }
      void search_Arr(){
        int count = 0;
        cout<<"Enter element to search of Array : ";
        cin>>element;
        for(int i = 0; i < arr_size; i++){
            if(arr[i] == element){
                count++;
            }
        }
        if(count == 0){
            cout<< element << " is not the number in array."<< endl; 
        }else if(count == 1){
            cout<< element << " is not a duplicate element."<< endl; 
        }else if(count > 1){
            cout<< element << " is a duplicate element."<< endl; 
        }  cout<<"The element "<<element<<" in the Array is duplicated"<<endl;    
    }
    void bubble_sort(){
            system("cls");
             for ( i = 0; i < arr_size; i++){
        for ( j = 0; j < arr_size; j++){
            if (arr[j]<arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            } 
        }
    }
    cout << "\nThe decending elements in array: ";
    for(i=0;i<arr_size;i++){
        cout<< arr[i] <<" ";
    }
    cout << endl;
    for ( i = 0; i < arr_size; i++)
    {
        for ( j = 0; j < arr_size; j++)
        {
            if (arr[j]>arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            } 
        }
    }
    cout<< "The acending elements in array: ";
    for ( i = 0; i < arr_size; i++)
    {
      cout<<arr[i]<<" ";
    }cout << endl;
}
    void AscendingOrderTreeStep(){
            for ( i = 0; i < arr_size; i++){
                cout<<"i" << i ;
        for ( j = 0; j < arr_size; j++){
            // cout<< "\n\t j"<< j;
            cout<<"\t j"<< j<<"\t arr_ind[i]"<< i <<": "<< arr[i] <<"\t arr_ind[j]"<< j <<": "<< arr[j]<<"\t";
            if (arr[j]>arr[i])
            {
                cout<<"\t"<< arr[j] <<" > " << arr[i] << " Trueswap("<< i <<","<< j <<")";
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            } 
            display_Arr();
        }
    }
 }
        void DecendingOrderTreeStep(){
            for ( i = 0; i < arr_size; i++){
                cout<<"i" << i ;
        for ( j = 0; j < arr_size; j++){
            // cout<< "\n\t j"<< j;
            cout<<"\t j"<< j<<"\t arr_ind[i]"<< i <<": "<< arr[i] <<"\t arr_ind[j]"<< j <<": "<< arr[j]<<"\t";
            if (arr[j]<arr[i])
            {
                cout<<"\t"<< arr[i] <<" < " << arr[j] << " Trueswap("<< i <<","<< j <<")";
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            } 
            display_Arr();
        }
    }
 }
};

int main(){
    Array_Operation arr;
    int opt=0;
    while (1)
    {
        cout<<"\n1.Insert Array size"<<endl;
        cout<<"2.Insert new element at the first array size"<<endl;
        cout<<"3.Insert new element at the last array size"<<endl;
        cout<<"4.Insert new element at the any position"<<endl;
        cout<<"5.Delete an element at the first array size"<<endl;
        cout<<"6.Delete an element at the last array size"<<endl;
        cout<<"7.Delete an element at the any position"<<endl;
        cout<<"8.Display element of the array"<<endl;
        cout<<"9.Search an array"<<endl;
        cout<<"10.Bubble sort"<<endl;
        cout<<"11.Ascending Order TreeStep"<<endl;
         cout<<"12.Decending Order TreeStep"<<endl;
        cout<<"13.Exit"<<endl;
        cout<<"Input choice: "; cin>>opt;
        cout<<"\n";
        switch (opt)
        {
        case 1: 
         arr.insert();
            break;
        case 2: 
         arr.insert_at_biginning();
         break;
        case 3: 
         arr.insert_at_ending();
         break;
        case 4: 
         arr.insert_anyPos();
         break;
        case 5: 
         arr.delete_at_biginning();
         break;
        case 6: 
         arr.delete_at_ending();
         break;
        case 7: 
         arr.delete_anyPos();
         break;
        case 8: 
         arr.display_Arr();
         break;
        case 9: 
         arr.search_Arr();
         break;
         case 10: 
         arr.bubble_sort();
         break;
          case 11: 
         arr.AscendingOrderTreeStep();
         break;
          case 12: 
         arr.DecendingOrderTreeStep();
         break;
        case 13: 
         exit(0);
            break;
        default:
        cout<<"Wrong choice!"<<endl;
            break;
        }
    }
     return 0;
}
