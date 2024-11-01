#include <iostream>
#include <vector>
#include <algorithm> // for std::find

int main() {
    std::vector<int> output = {10, 20, 30, 40, 50};
    int value = 30; // Value to find
    auto it = std::find(output.begin(), output.end(), value);
    // static casting required for distance to be considered an int
    int index = std::distance(output.begin(), it);
    std::cout << index;
    return 0;
}
