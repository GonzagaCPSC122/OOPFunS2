#include "Book.h"

// DVC
Book::Book() {
	// initialize to "default" values that make sense for this type
	title = "DEFAULT TITLE";
	author = "DEFAULT AUTHOR";
	numPages = -1;
}

// EVC
Book::Book(string t, string a, int n) {
	// initialize attributes to param values
	title = t;
	author = a;
	numPages = n;
}

// destructor
Book::~Book() {
	// book objects have nothing to free so there is nothing to do here..
	cout << "Hello from Book destructor" << endl;
}	

// :: scope resolution operator
// Book:: is it expands the scope of display() to include Book 
void Book::display() {
	cout << "Title: " << title << endl;
	cout << "Author: " << author << endl;
	cout << "Number of pages: " << numPages << endl;
}

void Book::setTitle(string newTitle) {
	// can access private member attributes because I'm in the class
	title = newTitle;
}

void Book::setAuthor(string newAuthor) {
	author = newAuthor;
}

void Book::setNumPages(int newNumPages) {
	numPages = newNumPages;
}

string Book::getTitle() const {
	return title;
}

string Book::getAuthor() const {
	return author;
}

int Book::getNumPages() const {
	return numPages;
}
