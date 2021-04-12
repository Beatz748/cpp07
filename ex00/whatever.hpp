#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <ostream>

class Awesome {
    public:
        Awesome( int n ) : _n( n ) {}
        bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
        bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
        bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
        bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
        bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
        bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }

        int getN() const { return (this->_n); }

    private:
        int _n;
};


std::ostream & operator<<(std::ostream & in, const Awesome & aw)
{
    in << aw.getN();
    return (in);
}

template <typename T> void swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T> const T & min( const T & a, const T & b){
    if (a < b)
		    return a;
    return b;
}

template <typename T> const T & max( const T & a, const T & b){
    if (a > b)
        return a;
		return b;
}

#endif
