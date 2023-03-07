#include "serialize.hpp"
#include <iostream>

int main()
{
	Data*	data = new Data;
	Data	*res;

	data->value = 50;

	uintptr_t ptr = Serializer::serialize(data);

	res = Serializer::deserialize(ptr);

	std::cout << res->value << std::endl;

	delete data;
}