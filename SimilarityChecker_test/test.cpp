#include "pch.h"
#include "../SimilarityChecker/similar.cpp"

TEST(TestSimilarityChecker, Check) {
	SimilarityChecker checker;
	int actual = checker.getSimilarity("ABC","ABC");
	int expected = 100;
	EXPECT_EQ(actual, expected);
}