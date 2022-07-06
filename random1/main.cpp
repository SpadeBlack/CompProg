#include <iostream>
#include "Header.h"
#include <vector>
using namespace std;
int main()
{
    //Just random startup...
    {
        std::cout << "Just keep Going, ";
        easy();
        medium();
        hard();
        x();
    }
    //Add your functions here...
    vector<int> g1;
    for (int i = 1; i <= 5; i++) {
        g1.push_back(i);
    }
    cout << "Input: ";
    for (auto i = g1.begin(); i != g1.end(); i++)
        cout << *i << " ";
    vector<int> g2 = twoSum(g1, 6);
    cout << "Output: ";
    for (auto i = g2.begin(); i != g2.end(); i++)
        cout << *i << " ";
        
}
