#ifndef BOOK_H
#define BOOK_H

#include <iostream>

using namespace std;

// OOP object oriented programming
// OOP focuses on objects
// object is an instance of a class
// what is a class?
// a class is a collection of STATE AND BEHAVIOR that completely describes something
// state (AKA attributes) member variables that store data
// behavior (AKA member functions) functions that operate on the state (AKA attributes)

// class definitions go in a header file with the same name
class Book {
	// by default all members in a class are private
	// private: accessible only within this class (not accessible from main())
	private:
		// public: accessible anywhere
		// state
		string title;
		string author;
		int numPages;
	public:
		// behavior 
		// a constructor is a special member function that creates an object and initializes its state (attributes)
		// there is always a default constructor that is called... it does nothing
		// we can override this behavior by defining a default value constructor (DVC)
		// note: constructors have no return type
		Book(); // DVC prototype
		// explict value constructors (EVC)
		// these constuctors accept arguments to initialize attribute values too
		// can overload constructors!!
		Book(string, string, int); // EVC prototype
		// a destructor is a special member function that is automatically called whenever an object is about to be destoryed (AKA destructed AKA deallocated)
		// there in only desctructor!! no return type, no arguments
		// what should a destructor do?
		// free/release any resouces (e.g. close files)
		// free/dellacote any dynamically allocated mem associated with this object
		~Book(); // destructor prototype
		
		// member functions
		void display();
		// setters (AKA mutators)
		// setters are public member functions for setting values of private attributes
		void setTitle(string);
		// getters (AKA accessors)
		// getters are public member functions for retrieving values of private attributes (read only)
		void setAuthor(string);
		void setNumPages(int);
		string getTitle() const; // const means read only
		string getAuthor() const;
		int getNumPages() const;
};

#endif


