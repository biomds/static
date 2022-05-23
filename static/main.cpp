#include <iostream>
#include "Employee.h"

using namespace std;

int main()
{
	cout << "Number of empployees before instaniation and objects is "
		<< Employee::getCount() << endl;
	{
		Employee e1("Susan", "Baker");
		Employee e2("Robert", "Jones");
		Employee e3("Steve", "Jobs");
		cout << "Number of employees after objects are instantiated is "
			<< Employee::getCount();
		cout << "\n\nEmployee 1: "
			<< e1.getFirstName() << " " << e1.getLastName()
			<< "\nEmployee 2: "
			<< e2.getFirstName() << " " << e2.getLastName()
			<< "\nEmployee 3: "
			<< e3.getFirstName() << " " << e3.getLastName() << "\n\n" << endl;

	}
	cout << "\nNumber of employees after objects are deleted is "
		<< Employee::getCount() << endl;
	return 0;
}