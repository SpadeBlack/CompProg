#include <cstring>
#include <iostream>
using namespace std;
int main(){
    int num = 5;
    float *ptr;
    ptr = new float[num];
    
    for(int i =0 ; i< num;i++){
        *(ptr+i) =i;
    }
    cout<<"Addresses: "<<endl;
    for(int i =0; i<num;i++){
        cout<< "Data: " << i+1 <<" Address: "<< *(ptr+i) <<endl;
    }
}
