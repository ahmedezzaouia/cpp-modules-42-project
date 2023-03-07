
#include "Base.hpp"

int main()
{
	Base *base;

	base = Base::generate();
	Base &dri = *base;

	Base::identify(base);
	Base::identify(dri);
}