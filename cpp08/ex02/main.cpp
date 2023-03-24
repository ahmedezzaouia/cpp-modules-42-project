#include "MutantStack.hpp"
#include <iostream>

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);

    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);

    MutantStack<int>::iterator a = mstack.begin();
    MutantStack<int>::iterator b = mstack.end();

    ++a;
    --a;

    while (a != b)
    {
        std::cout << *a << std::endl;
        ++a;
    }
    std::stack<int> s(mstack);
    return 0;
}
