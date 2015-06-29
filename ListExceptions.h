/* 
 * File:   listExceptions.h
 * Author: connie
 *
 * Created on May 6, 2015, 10:12 PM
 */

#ifndef LISTEXCEPTIONS_H
#define	LISTEXCEPTIONS_H

#include <stdexcept>
#include <string>

using namespace std;

class ListIndexOutOfRangeException : public out_of_range
{
public:
   
   /**/
   ListIndexOutOfRangeException(const string & message = "")
      : out_of_range(message.c_str())
   { }  // end constructor
   /**/
   //virtual const char* what() const throw()
   //{return "list: out of range";}
}; // end ListIndexOutOfRangeException


class ListException : public logic_error
{
public:
   
   /**/    
   ListException(const string & message = "")
      : logic_error(message.c_str())
   { }  // end constructor
   /**/
   // virtual const char* what() const throw()
   //{return "list: logic error";}   //list is full
}; // end ListException


#endif	/* LISTEXCEPTIONS_H */

