/*
 * Vector.cpp
 */

#include "Vector.h"

void Vector::initialize() {
	for (int i = 0; i < SIZE; i++) {
		vector[i] = 0;
	}
	lastposition = 0;
}

bool Vector::addElem(int val) {
	if (lastposition != SIZE) {
		vector[lastposition] = val;
		lastposition++;
		return true;
	} else {
		return false;
	}
}

int Vector::getElem(int loc) const {
	return vector[loc];
}

bool Vector::setElem(int loc, int val) {
	if (loc >= 0 && loc < SIZE && val !=0) {
		vector[loc] = val;
		return true;
	} else {
		return false;
	}
}

int Vector::size() const {
	int counter = 0;
	for (int i = 0; i < SIZE; i++) {
		if (vector[i] != 0) {
			counter++;
		}
	}
	return lastposition;
}

void Vector::clear() {
	// TODO: complete me
	for (int i = 0; i < SIZE; i++) {
		vector[i] = 0;
	}
	lastposition = 0;
}
