// Copyright 2025 UNN-CS
#include <gtest/gtest.h>
#include "alg.h"

TEST(PrimeTest, CheckPrime_EdgeCases) {
    EXPECT_FALSE(checkPrime(0));
    EXPECT_FALSE(checkPrime(1));
    EXPECT_TRUE(checkPrime(2));
    EXPECT_TRUE(checkPrime(3));
    EXPECT_FALSE(checkPrime(4));
    EXPECT_TRUE(checkPrime(5));
    EXPECT_FALSE(checkPrime(9));
    EXPECT_TRUE(checkPrime(17));
    EXPECT_FALSE(checkPrime(100));
    EXPECT_TRUE(checkPrime(997));
}

TEST(PrimeTest, NPrime_CorrectValues) {
    EXPECT_EQ(nPrime(1), 2);
    EXPECT_EQ(nPrime(2), 3);
    EXPECT_EQ(nPrime(3), 5);
    EXPECT_EQ(nPrime(4), 7);
    EXPECT_EQ(nPrime(5), 11);
    EXPECT_EQ(nPrime(6), 13);
    EXPECT_EQ(nPrime(10), 29);
}

TEST(PrimeTest, NextPrime_Basic) {
    EXPECT_EQ(nextPrime(1), 2);
    EXPECT_EQ(nextPrime(2), 3);
    EXPECT_EQ(nextPrime(3), 5);
    EXPECT_EQ(nextPrime(4), 5);
    EXPECT_EQ(nextPrime(5), 7);
    EXPECT_EQ(nextPrime(11), 13);
    EXPECT_EQ(nextPrime(14), 17);
    EXPECT_EQ(nextPrime(97), 101);
}

TEST(PrimeTest, SumPrime_Values) {
    EXPECT_EQ(sumPrime(2), 0);
    EXPECT_EQ(sumPrime(3), 2);
    EXPECT_EQ(sumPrime(4), 2+3);
    EXPECT_EQ(sumPrime(6), 2+3+5);
    EXPECT_EQ(sumPrime(10), 2+3+5+7);
    EXPECT_EQ(sumPrime(11), 2+3+5+7);
}

TEST(PrimeTest, SumPrime_Large) {
    uint64_t res = sumPrime(2000000);
    EXPECT_EQ(res, 142913828922ULL);
}

TEST(PrimeTest, CheckPrime_ZeroAndOne) {
    EXPECT_FALSE(checkPrime(0));
    EXPECT_FALSE(checkPrime(1));
}

TEST(PrimeTest, CheckPrime_EvenNumbers) {
    EXPECT_FALSE(checkPrime(6));
    EXPECT_FALSE(checkPrime(8));
    EXPECT_FALSE(checkPrime(10));
}

TEST(PrimeTest, NPrime_EdgeCases) {
    EXPECT_EQ(nPrime(1), 2);
    EXPECT_EQ(nPrime(6), 13);
    EXPECT_EQ(nPrime(7), 17);
}

TEST(PrimeTest, NextPrime_AfterPrime) {
    EXPECT_EQ(nextPrime(2), 3);
    EXPECT_EQ(nextPrime(5), 7);
    EXPECT_EQ(nextPrime(13), 17);
}

TEST(PrimeTest, NextPrime_AfterComposite) {
    EXPECT_EQ(nextPrime(6), 7);
    EXPECT_EQ(nextPrime(8), 11);
    EXPECT_EQ(nextPrime(9), 11);
}
