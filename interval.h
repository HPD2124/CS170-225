#pragma once
#ifndef INTERVAL_H
#define INTERVAL_H
#define _CRT_SECURE_NO_WARNINGS
class Interval {
    int start;
    int end;

public:
    Interval();
    Interval(int start, int end);
    int getStart();
    int getEnd();
    void setStart(int new_start);
    void setEnd(int new_end);
    void scale(int factor);
    void translate(int offset);
    void print();
};

#endif // INTERVAL_H
