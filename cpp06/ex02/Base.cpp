#include "Base.hpp"
#include <iostream>

Base* Base::generate() {
    int generate = rand() % 3;
    Base* ret;
    switch (generate) {
        case 0:
            ret = new A();
            break;
        case 1:
            ret = new B();
            break;
        case 2:
            ret = new C();
            break;
        default:
            ret = new A();
            break;
    }
    return ret;
}

void	Base::identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Its A*" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Its B*" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Its C*" << std::endl;
}

void	Base::identify(Base& p)
{
    try {
        (void)dynamic_cast<A&>(p);
        std::cout << "Its A&" << std::endl;
    }
    catch (const std::bad_cast& bc) {
        try {
            (void)dynamic_cast<B&>(p);
            std::cout << "Its B&" << std::endl;
        }
        catch (const std::bad_cast& bc) {
            try {
                (void)dynamic_cast<C&>(p);
                std::cout << "Its C&" << std::endl;
            }
            catch (const std::bad_cast& bc) {
                std::cerr << bc.what() << std::endl;
            }
        }
    }
}
