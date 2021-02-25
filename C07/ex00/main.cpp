#include "whatever.hpp"

int main()
{
	//42 MAIN
	std::cout << "-- 42 MAIN --" << std::endl;
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	/*Expected output
	a = 3, b = 2
	min(a, b) = 2
	max(a, b) = 3
	c = chaine2, d = chaine1
	min(c, d) = chaine1
	max(c, d) = chaine2
	*/

	std::cout << std::endl;

	//My tests
	std::cout << "-- MY TESTS --" << std::endl;

	double pi(3.14);
	double e(2.71);	
	std::cout << "-- double --" << std::endl;
	std::cout << "pi = " << pi << "; e = " << e << ";" << std::endl;
	std::cout << "min: " << ::min(pi,e) << std::endl;
	std::cout << "max: " << ::max(pi,e) << std::endl; 
	std::cout << "*swap*" << std::endl;
	::swap(pi,e);
	std::cout << "pi = " << pi << "; e = " << e << ";" << std::endl;	

	std::cout << std::endl;
	std::string str1("str1");
	std::string str2("str2");	
	std::cout << "-- string --" << std::endl;
	std::cout << "str1 = " << str1 << "; str2 = " << str2 << ";" << std::endl;
	std::cout << "min: " << ::min(str1,str2) << std::endl;
	std::cout << "max: " << ::max(str1,str2) << std::endl; 
	std::cout << "*swap*" << std::endl;
	::swap(str1,str2);
	std::cout << "str1 = " << str1 << "; str2 = " << str2 << ";" << std::endl;	

	std::cout << std::endl;
	char c0('x');
	char c1('y');	
	std::cout << "-- char --" << std::endl;
	std::cout << "c0 = " << c0 << "; c1 = " << c1 << ";" << std::endl;
	std::cout << "min: " << ::min(c0,c1) << std::endl;
	std::cout << "max: " << ::max(c0,c1) << std::endl; 
	std::cout << "*swap*" << std::endl;
	::swap(c0,c1);
	std::cout << "c0 = " << c0 << "; c1 = " << c1 << ";" << std::endl;	
	
	return 0;
}
