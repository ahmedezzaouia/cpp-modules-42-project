
#ifndef BASE_HPP
# define BASE_HPP


class Base{

public:
	virtual ~Base() { };
	static Base *generate(void);
	static void identify(Base* p);
	static void identify(Base& p);
};

class A : public Base {
    public: 
        A() { } 
    
};
class B : public Base { 
    public: 
        B() { } 
};
class C : public Base { 
    public: 
        C() { } 
};

#endif
