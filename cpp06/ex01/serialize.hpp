#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

#include <cstdint>

typedef struct t_data
{
	int		value;
}	Data;


class Serializer{
public:
	static uintptr_t serialize(Data *);
	static Data* deserialize(uintptr_t);
};

#endif
