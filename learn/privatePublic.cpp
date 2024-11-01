#include <iostream>

using namespace std;

class dataAccessor{
    public:
        int publicData =10;

        string dataReturn(){
            return to_string(privateData)+" "+notSupposedToBeAssessed ;
        }
        void setPrivateData(int dataInput){
            privateData = dataInput;
        }
    private:
        int privateData =99;
        string notSupposedToBeAssessed="Private Key Data";
        
    
};
int main(){
    dataAccessor dataA;
    cout<<dataA.publicData<<endl;
    cout<<dataA.dataReturn()<<endl;
    dataA.setPrivateData(1999);
    cout<<dataA.dataReturn()<<endl;
    return 0;
}
