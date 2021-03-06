// lab07.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "RandomUtilities.h"
#include "ContainerPrinting.h"
#include "Lab7-jvaira.h"
#include "winTimer.h"
#include <iostream>
#include <vector>
using namespace std;


//the random number vector generator from the last lab
//modified to use bubbleSort
// post: a sorted vector of listSize random doubles from
//         the range minNum to maxNum has been returned.
vector<double>
getNums_bubble(size_t listSize, double minNum, double maxNum)
{
	vector<double> theList;
	for (size_t i = 0; i < listSize; ++i)
	{
		theList.push_back(randReal(minNum, maxNum));
	}

	//cout << "The list before sorting: " << theList << endl;

	//sort(begin(theList), end(theList));
	//use bubble sort
	bubbleSort(theList);
	return theList;
}

int main()
{
	// Construct a sorted list of numbers
	Timer get;
	get.start();
	vector<double> numbers = getNums_bubble(10, 1, 500);
	get.stop();
	cout << "Constructed in " << get() << " seconds"
		<< endl;
	cout << numbers << endl << endl;

	
	system("pause");
    return 0;
}

