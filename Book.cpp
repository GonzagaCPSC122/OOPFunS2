#include "Book.h"

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
