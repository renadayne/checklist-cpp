/*
Geeksforgeaks example
C++ program without declaring the move constructor
*/
#include <iostream>
#include <vector>
using namespace std;

// Move Class
class Move {
private:
	// Declaring the raw pointer as
	// the data member of the class
	int* data;

public:
	// Constructor
	Move(int d)
	{
		// Declare object in the heap
		data = new int;
		*data = d;

		cout << "Constructor is called for "
			<< d << endl;
	};

	Move(const Move& source): Move{ *source.data }
	{

		// Copying constructor copying
		// the data by making deep copy
		cout << "Copy Constructor is called - "
			<< "Deep copy for "
			<< *source.data
			<< endl;
	}

	// Destructor
	~Move()
	{
		if (data != nullptr)
			cout << "Destructor is called for "
				<< *data << endl;
		else
			cout << "Destructor is called"
				<< " for nullptr"
				<< endl;
		delete data;
	}
};

int main()
{
	// Create vector of Move Class
	vector<Move> vec;
	vec.push_back(Move{10});
    cout << "_____" << endl;
    // constructor call of Move{10}, after that push back Move{10} in vector -> constructor call
    // copy destructor is call 
    // end command - destructor call of Move{10} in bracket () 
    // capacity = 1, size = 1
	vec.push_back(Move{20});
    cout << "_____" << endl;
    // constructor call of Move{20}, after that push back Move{20} in vector -> constructor call
    // copy constructor is call
    // end command - destructor call of Move{20} in bracket ()
    // capacity = 2, size = 2 -> allocate new memory -> push move{10} on stack, ....
    vec.push_back(Move{30});
    cout << "_____" << endl;
    // ...
    // capacity = 4, size = 3 -> allocate new memory -> push move{10}, move{20} on stack
    vec.push_back(Move{40});
    cout << "_____" << endl;
    // constructor call of {Move 40}, after that push back Move{40} in vector -> constructor call
    // copy constructor is call
    // end command - destructor call of Move{40} in bracket ()
    // capacity = 4, size = 4 -> nothing happen
    
	return 0;
} // call destructor vector 10, 20, 30, 40
