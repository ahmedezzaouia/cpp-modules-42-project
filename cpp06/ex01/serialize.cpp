
#include "serialize.hpp"

uintptr_t Serializer::serialize(Data *d)
{
	uintptr_t	ret;

	ret = d->value;
	return (ret);
}

Data* Serializer::deserialize(uintptr_t u)
{
	Data	*ret = new Data;

	ret->value = u;
	return (ret);
}