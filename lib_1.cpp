/******************************************************************************/
/*!
\file   lib_1.cpp
\author Harrison Parrish
\par   email: harrison.parrish@digipen.edu
\brief Defining function foo for B

*/
/******************************************************************************/

#include <iostream> // std::cout, std::endl
#include "lib_1.h"

/******************************************************************************/
/*!
  Brief function functionality description.

  \param int n
    Foo takes in a number to run through the for loop

*/
/******************************************************************************/

void A::foo( int n ) 
{
  for ( int i=0; i<n; ++i ) {
    std::cout << "From " << __FILE__ << std::endl;
  }
}
