#include <iostream>

template<unsigned M,unsigned N>
struct gcd
{
    //static int const value = gcd<N,M%N>::value;
     static const  int value = gcd<N,M>::value;
};


template<unsigned M>
struct gcd<M,0>
{
    static_assert(M!=0);
     static const int  value = M;
};


template<unsigned M,unsigned N> const int gcd<M,N>::value;


int main (int argc,char* argv[])
{
    std::cout<<gcd<5,2>::value<<"\n";
    return 0 ;
}

