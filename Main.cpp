#include "Book.h"

int main() {
	// make Book objects (AKA Book variables or Book memory)
	Book dustinsBook; // invokes DVC
	/*dustinsBook.title = "Helldivers";
	dustinsBook.author = "Someone";
	cout << dustinsBook.author << endl;
	cout << dustinsBook.numPages << endl;*/
	
	dustinsBook.display(); // call member function using invoking object dustinsBook	
	Book ryansBook; // invokes DVC
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
	
	// pointers to objects
	Book * bookPtr = &ryansBook;
	// just like with structs, we can use ->
	bookPtr->display();
	// can also dyn allocate objects with new

	Book hp1; // DVC
	hp1.display();
	Book hp2("Chamber of Secrets", "JKR", 321); // EVC
	hp2.display();
	
	// task 1: define a Point class in Point.h and Point.cpp that represents a Point in 2D space (2 private double attributes, x and y). define DVC, EVC(s), display() that prints out the object's state in the form (x, y). test your Point class by making Point objects in main()
	// task 2: define a Circle class in Circle.cpp and Circle.h that represents a 2D circle with private attributes double radius and Point center. This is an example of composition, which is a "has-a" relationship between two classes. "Circle has a Point". Include DVC, EVC(s), and display(). Test in main()
	
	return 0;
}
