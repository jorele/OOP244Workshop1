/*
Name: Jorel Rutger
Email: jrutger@myseneca.ca
ID: 142964220
Date: 09/12/23

I have done all the coding by myself and only copied
the code that my professor provided to complete
my workshops and assignments.
*/

#ifndef SDDS_WORD_H
#define SDDS_WORD_H
namespace sdds {

#include <cstdio>
#include <iostream>
#include <iomanip>
using namespace std;

const int MAX_WORD_LEN = 21;

struct Word {
	char letters[MAX_WORD_LEN];
	int count;
};

}
#endif