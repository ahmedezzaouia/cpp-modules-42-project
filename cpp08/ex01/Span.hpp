#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>


class Span{

public:

	Span(unsigned int n);
	Span(Span const &s);
	Span &operator=(Span const &s);
	~Span();

	void	addNumber(int);
	int	    shortestSpan();
	int     longestSpan();

    class maxsizereached: public std::exception{
	    public: const char * what() const throw()
        {
		    return "Vector is full"; 
        }
	};
	class notfound: public std::exception{
	    public: const char * what() const throw()
        {
		    return "Element is not found"; 
        }
	};

private:
	std::vector<int>	arr;
	long unsigned int	size;
};

#endif
