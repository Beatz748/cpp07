#include "Array.hpp"

int main()
{
	Array<int>int_arr(21);
	Array<float>f_arr(21);
	int i = 0;
	while ((unsigned int)i < 22)
	{
		try
		{
			int_arr[i] = i;
			std::cout << "int: " << int_arr[i] << std::endl;
		}
		catch (Array<int>::BadNumException & ex)
		{
			std::cout << ex.what() << std::endl;
		}
		i++;
	}
	i = 0;
	while ((unsigned int)i < 22)
	{
		try
		{
			f_arr[i] = i + 0.1;
			std::cout << "float: " << f_arr[i] << std::endl;
		}
		catch (Array<float>::BadNumException & ex)
		{
			std::cout << ex.what() << std::endl;
		}
		i++;
	}

}
