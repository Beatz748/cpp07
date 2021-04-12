#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <exception>
#include <iostream>

template <typename T>
class Array{
	public:
		Array(){ _arr_data = NULL; _n = 0;};

		Array(unsigned int n)
		{
			_arr_data = new T[n];
			_n = n;
		}

		Array(const Array& right)
		{
			this->_arr_data = NULL;
			*this = right;
		}

		~Array()
		{
			if (_arr_data != NULL)
				delete [] _arr_data;
		}

		Array & operator=( const Array & right){
			if (this == &right){
				return *this;
			}
			this->_n = right._n;
			if (this->_arr_data != NULL){
				delete [] this->_arr_data;
			}
			this->_arr_data = new T[this->_n];
			for (int i = 0; i < _n; i++){
				this->_arr_data[i] = right._arr_data[i];
			}
			return *this;
		}

		T & operator[](int i)
		{
			if (i < 0 || (unsigned int)i >= _n)
				throw BadNumException();
			return _arr_data[i];
		}

		const T & operator[](int i) const
		{
			if (i < 0 || (unsigned int)i >= _n){
				throw BadNumException();
			}
			return _arr_data[i];
		}

		unsigned int size() const{
			return _n;
		}

	 class BadNumException : public std::exception
	{
		public:
			const char * what() const throw()
			{
				return "bad index ";
			}
	};

	private:
		T *_arr_data;
		unsigned int _n;
};


#endif
