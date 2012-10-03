//============================================================================
// Midterm Project 1 - Average Test Scores
// -------------------------
// Programmer: Jeremy F McKay
// Date: October 2, 2012
// -------------------------
// This program is for finding the average of three test grades and
// should not allow invalid test scores to be entered.
//
// ---------1---------2---------3---------4---------5---------6---------7
// 1234567890123456789012345678901234567890123456789012345678901234567890

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	//Variables
	int test1, test2, test3, intavg;
	double average;
	char grade;

	cout << "\n   "
		 << "Test Score Average"
		 << "\n   "
		 << "--------------------------";

	// Start asking for input
	cout << "\n   "
		 << "Enter first test score: ";

	cin >> test1;

	// Test for correct range
	if (test1 < 0 || test1 > 100)
	{
		cout << "\n   "
		 	 << "Enter a test score between 0 and 100\n"
		 	 << "   "
		 	 << "Please rerun program";
		return -1;
	}

	// Ask for second input
	cout << "   "
		 << "Enter second test score: ";

	cin >> test2;

	// Test second input
	if (test2 < 0 || test2 > 100)
	{
		cout << "\n   "
		 	 << "Enter a test score between 0 and 100\n"
		 	 << "   "
		 	 << "Please rerun program";
		return -1;
	}

	// Ask for third input
	cout << "   "
		 << "Enter third test score: ";

	cin >> test3;

	//test 3 input
	if (test3 < 0 || test3 > 100)
	{
		cout << "\n   "
		 	 << "Enter a test score between 0 and 100\n"
		 	 << "   "
		 	 << "Please rerun program";
		return -1;
	}

	//Start doing math
	average = (test1 + test2 + test3)/3.0;
	intavg = static_cast<int> (average + 0.5);

	// Test for average for letter grade
	if (intavg >= 90 && intavg <= 100)

		grade = 'A';

	else if (intavg >= 80 && intavg <= 89)

		grade = 'B';

	else if (intavg >= 70 && intavg <= 79)

		grade = 'C';

	else if (intavg >= 60 && intavg <= 69)

		grade = 'D';
	else

		grade = 'F';


	// Output average and grade

	cout << setprecision(1) << fixed;

	cout << "\n   "
		 << "The average test score is: " << average << endl;

	cout << "   "
		 << "The letter grade is: " << grade << endl;

	return 0;
}
