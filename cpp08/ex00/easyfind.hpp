
#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <iterator>

class outrange : public std::exception{
    public:
        const char *what() const throw()
        {
            return "Out of range";
        }
};

template <typename T>
typename T::iterator	easyfind(T &v, int num){
	typename T::iterator it = std::find(v.begin(), v.end(), num);
	if (it == v.end())
		throw outrange();
	return it;
}

#endif
