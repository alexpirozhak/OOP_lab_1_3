//
// Created by Олександр Пірожак on 01.03.2024.
//
#include "gtest/gtest.h"
#include "../LongLong.h"



TEST(LongLongTestSuite, LongLongTest)
{
    LongLong num1, num2;
    num1.Init(123, 456);
    num2.Init(456, 123);

    EXPECT_FALSE(LongLong::areEqual(num1, num2));
    EXPECT_TRUE(LongLong::areNotEqual(num1, num2));
    EXPECT_TRUE(LongLong::notBigger(num1, num2));

    LongLong res = LongLong::subtract(num2, num1);
    EXPECT_EQ(res.getOlder(), 332);
    EXPECT_EQ(res.getYounger(), 2147483315);
}