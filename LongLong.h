//
// Created by Олександр Пірожак on 01.03.2024.
//
#pragma once

#include <string>

using namespace std;

class LongLong
{
    long older;
    long younger;

public:
    long getOlder() const;
    void setOlder(long older);
    long getYounger() const;
    void setYounger(long younger);
    static LongLong subtract(LongLong num1, LongLong num2);
    //static LongLong divide(LongLong num1, LongLong num2);
    static bool notBigger(LongLong num1, LongLong num2);
    static bool areEqual(LongLong num1, LongLong num2);
    static bool areNotEqual(LongLong num1, LongLong num2);
    bool Init(long older, long younger);
    bool Read();
    void Display() const;
    string toString() const;
};