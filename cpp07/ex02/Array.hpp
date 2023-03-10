#ifndef ARRAY_HPP
# define ARRAY_HPP


template <class T>
class	Array{
public:
	Array() : len(0) {
		arr = new T[0];
	}

	Array(unsigned int len) : len(len) {
		arr = new T[len];
	}

	Array(Array const &a) {
		this->arr = NULL;
		*this = a;
	}

	Array &operator=(Array const &a) {
		if (arr != NULL)
			delete[] arr;
		if (a.len != 0)
		{
			len = a.len;
			arr = new T[len];
			for (size_t i = 0; i < len; i++)
				arr[i] = a.arr[i];
		}
		return (*this);
	}

	virtual ~Array() {
		if (this->arr != NULL)
			delete[] arr;
	}

	class	InvalidIndexException : public std::exception
	{
        public:
            const char	*what() const throw()
            {
                return ("Error: Invalid index");
            }
	};

	T &operator[](unsigned int i) 
    { 
        if (i < len) 
            return arr[i]; 
        else 
            throw Array::InvalidIndexException();
    }

    unsigned int size() const {
        return this->len;
    }

private:
	T*	arr;
	unsigned int len;
};

#endif
