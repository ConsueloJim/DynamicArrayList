

#ifndef LIST_H
#define	LIST_H

#include <cstdlib>
#include <cctype>
#include "listExceptions.h"


typedef double ListItemType;

/** @class List
 * ADT list - Array-based implementation with exceptions */
class List
{
public:
	// constructor
   List();

   // destructor
   ~List();

   // copy constructor
   List(const List & copyList);

   /** @throw None. */
   bool isEmpty() const;

   /** @throw None. */
   int getLength() const;

   void operator =(const List& rhs);
   
   void print();

   void insert(const ListItemType& newItem)
      throw(ListIndexOutOfRangeException, ListException);

   /** @throw ListIndexOutOfRangeException  If index < 1 or index >
    *         getLength(). */
   void remove(int index)
      throw(ListIndexOutOfRangeException);

   void pop_back(const ListItemType& newItem)throw(ListIndexOutOfRangeException, ListException);
   void push_back(const ListItemType& newItem)  throw(ListIndexOutOfRangeException, ListException);
   void resize(int mysize,const ListItemType& newItem);
   void shrink_to_fit();
   friend ostream & operator << (ostream & out, const List & aList);

private:
   /** array of list items */
   ListItemType *items;


   /** number of items in list */
   int          size;

   int translate(int index) const;
}; // end List
// End of header file.


#endif	/* LIST_H */

