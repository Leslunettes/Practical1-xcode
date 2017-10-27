/*
 * main.cpp
 *
 *  Created on: 15 Oct 2014
 *      Author: np183
 */

#include <iostream>
#include <string>

#include "VectorTester.h"
//git text vendredif

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char* argv[]) {

	if (false) {
		for (unsigned int i=0 ; i<1 ; ++i) {
			VectorTester t;
			t.testAddGetElem();
		}
		return 0;

	}
//test
	while (argc > 1) {

		switch (argv[--argc][0]) {
		case 'a':
		{
			VectorTester t;
			t.testInitialize();
		}
		break;
		case 'b':
		{
			VectorTester t;
			t.testAddGetElem();
		}
		break;
		case 'c':
		{
			VectorTester t;
			t.testSize();
		}
		break;
		case 'd':
		{
			VectorTester t;
			t.testSetElem();
		}
		case 'e':
		default:
		{
			VectorTester t;
			t.testInitialize();
		}
		break;
        }
	}
	return 0;
}

