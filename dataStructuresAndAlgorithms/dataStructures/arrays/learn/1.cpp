#include <iostream>
#include <vector>
using namespace std;

int main(){
    std::cout<<"Arrays 1"<<std::endl;
    // types of arrays
    // fixed size array
    //  memory allocation at compile time time
    int arr1[10];
    int arr2[2]={10};
    // memory allocation at run time
    int *arrmain= new int[5];
    arrmain[0] = {100};
    // print address of the arry
    cout << arrmain << endl;
    // sizeof count bytes in element so for size of array it will be 
    cout<<sizeof(arr2)/sizeof(arr2[0])<<endl;

    for(int i = 0 ; i < sizeof(arr2)/sizeof(int);i++){
        cout << arr2[i] << "    ";
    }
    cout << endl;
    for(auto data: arr2){
        cout<<data<<" ";
    }

    cout << endl;
    for(int i = 0 ; i < sizeof(arrmain);i++){
        cout << arrmain[i] << " ";
    }

    // iterator does not work for dynamic arrays
    // for (auto data: arrmain){
    //     cout<<data;
    // }



    // DYnamic arrays wihtout size requirement
    /* VECTORS */
    cout << endl;
    vector<int> vec ={100,100};
    for(int data: vec){
        cout<<data<<" ";
        vec.push_back(data+9);
    }
    cout << endl;
    for (int data : vec) {
        cout << data << " ";
    }
    cout << endl;


    // DIMENSIONAL ARRAYS
    // 1D
    int ar[10];
    // 2D
    int arr[10][10];
    cout<<"2D array initialized and unset"<<endl;
    for(int i =0 ; i < sizeof(arr)/sizeof(arr[0]);i++){
        cout<<endl;
        for(int j =0; j < sizeof(arr[0])/sizeof(arr[0][0]);j++){
            cout<<arr[i][j]<<" ";
            arr[i][j]=9;
        }
    }
    cout<<"\n\n2D array set"<<endl;
    for(int i =0 ; i < sizeof(arr)/sizeof(arr[0]);i++){
        cout<<endl;
        for(int j =0; j < sizeof(arr[0])/sizeof(arr[0][0]);j++){
            cout<<arr[i][j]<<" ";
        }
    }

}