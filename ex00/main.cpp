#include "whatever.hpp"

int main(){
	{
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
	}

	std::string str1 = "Hello";
	std::string str2 = "world";
	std::cout << "Before swap: str1 = " << str1 << ", str2 = " << str2 << std::endl;
	::swap(str1, str2);
	std::cout << "After swap: str1 = " << str1 << ", str2 = " << str2 << std::endl;
	std::cout << "max: " << ::max(str1, str2) << std::endl;
	std::cout << "min: " << ::min(str1, str2) << std::endl;


	Awesome aw_1(10);
	Awesome aw_2(6);
	std::cout << "Before swap: aw_1 = " << aw_1 << ", aw_2 = " << aw_2 << std::endl;
	::swap(aw_1, aw_2);
	std::cout << "After swap: aw_1 = " << aw_1 << ", aw_2 = " << aw_2 << std::endl;
	Awesome max = ::max(aw_1, aw_2);
	Awesome min = ::min(aw_1, aw_2);
	std::cout << "max: " << max << std::endl;
	std::cout << "min: " << min << std::endl;

	return 0;
}
