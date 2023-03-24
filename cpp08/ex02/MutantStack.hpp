#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>

template<typename T>
class MutantStack: public std::stack<T>
{

public:

	MutantStack<T>( void ) { }
	MutantStack<T>( const MutantStack<T> &src ) { *this = src; }
	~MutantStack<T>( void ) { }

	MutantStack<T>	&operator=( const MutantStack<T> &s ) {
		(void)s;
		return *this;
	}

	typedef typename std::stack<T>::container_type::iterator iterator;
    

	iterator	begin( void ) { return this->c.begin(); }
	iterator	end( void ) { return this->c.end(); }

};

#endif
