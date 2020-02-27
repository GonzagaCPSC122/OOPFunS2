#include "Book.h"

int main() {
	// make Book objects (AKA Book variables or Book memory)
	Book dustinsBook;
	/*dustinsBook.title = "Helldivers";
	dustinsBook.author = "Someone";
	cout << dustinsBook.author << endl;
	cout << dustinsBook.numPages << endl;*/
	
	dustinsBook.display(); // call member function using invoking object dustinsBook	
	Book ryansBook;
	/*ryansBook.title = "1984";
	ryansBook.author = "George Orwell";
	ryansBook.numPages = 300;*/
	ryansBook.display();
	
	ryansBook.setTitle("1984");
	cout << ryansBook.getTitle() << endl;
	ryansBook.setAuthor("George Orwell");
	ryansBook.setNumPages(300);
	ryansBook.display();
	
	// task: write the remaining getters and setters for author and num pages
	// tuesday start with constructors

	return 0;
}
