#include <bits/stdc++.h>

int main(){
    auto anInt = 33;
    auto aStr = "33 this ";
    auto aFloat = 33.3333;
    auto ptr = &aFloat;
    auto valueOfPtr = *ptr;

    std::cout<<anInt<< " " <<typeid(anInt).name()<<std::endl;
    
    std::cout<<aStr<< " " <<typeid(aStr).name()<<std::endl;
    
    std::cout<<aFloat<< " " <<typeid(aFloat).name()<<std::endl;
    
    std::cout<<ptr<< " " <<typeid(ptr).name()<<std::endl;
    
    std::cout<<valueOfPtr<< " " <<typeid(valueOfPtr).name()<<std::endl;
}