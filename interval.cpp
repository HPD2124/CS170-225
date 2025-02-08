#include "interval.h"
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
// default constructor
// implemented
Interval::Interval() {
    this->start = 0;
    this->end = 1;
}

// constructor with parameters
Interval::Interval(int start, int end) {
    if (start <= end) {
        this->start = start;
        this->end = end;
    }
    else {
        this->start = 0;
        this->end = 1;
    }
}

// getters 
// implemented 
int Interval::getStart() {
    return this->start;
}

// implemented 
int Interval::getEnd() {
    return this->end;
}

// setters
void Interval::setStart(int new_start) {
    if (new_start <= this->end) {
        this->start = new_start;
    }
    else {
        std::cout << "Invalid interval" << std::endl;
    }
}

void Interval::setEnd(int new_end) {
    if (new_end >= this->start) {
        this->end = new_end;
    }
    else {
        std::cout << "Invalid interval" << std::endl;
    }
}

void Interval::scale(int factor) {
    this->start = this->start * factor;
    this->end = this->end * factor;
    if (this->start > this->end) {
        std::cout << "Invalid interval" << std::endl;
        this->start = 0;
        this->end = 1;
    }
}

void Interval::translate(int offset) {
    this->start = this->start + offset;
    this->end = this->end + offset;
}

// implemented
void Interval::print() {
    std::cout << "[" << this->start << ", " << this->end << "]" << std::endl;
}
