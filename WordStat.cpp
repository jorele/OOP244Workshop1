/*
Name: Jorel Rutger
Email: jrutger@myseneca.ca
ID: 142964220
Date: 09/12/23

I have done all the coding by myself and only copied
the code that my professor provided to complete
my workshops and assignments.
*/

#include <iostream>
#include "Word.h"
using namespace sdds;
using namespace std;
int main() {
	char filename[256];
	programTitle();
	cout << "Enter filename: ";
	cin >> filename;
	wordStats(filename);
	return 0;
}