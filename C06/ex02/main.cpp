#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


void identify_from_pointer(Base *p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A";
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B";
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C";
}

void identify_from_reference(Base &p)
{
	identify_from_pointer(&p);
}

Base *generate(void)
{
	int i = rand() % 3;
	if (i == 0)
		return new A;
	if (i == 1)
		return new B;
	return new C;
}

int main()
{
	srand(time(NULL));
	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
	{
		Base *gen = generate();
		std::cout << "Identify from pointer :   " ;
		identify_from_pointer(gen);
		std::cout << std::endl;
		std::cout << "Identify from reference : " ;
		identify_from_reference(*gen);
		std::cout << std::endl << std::endl;
		delete gen;
	}
	return 0;
}