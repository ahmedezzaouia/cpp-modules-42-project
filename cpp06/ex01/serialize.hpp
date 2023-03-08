#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP
#include <string>

#include <cstdint>

class Data {
	public:
		std::string value;
};

class Serializer{
public:
	static uintptr_t serialize(Data *);
	static Data* deserialize(uintptr_t);
};

#endif
