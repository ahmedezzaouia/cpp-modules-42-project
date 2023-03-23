#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main()
{
     std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    
    try {
        std::vector<int>::iterator it = easyfind(v, 3);
        std::cout << "Found " << *it << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    try {
        std::vector<int>::iterator it = easyfind(v, 6);
        std::cout << "Found " << *it << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    return 0;
}
