#include "pch.h"
#include "../SimilarityChecker/similar.cpp"

TEST(TestSimilarityChecker, SameString000) {
	SimilarityChecker checker;
	int actual = checker.getSimilarity("ABC","ABC");
	int expected = 100;
	EXPECT_EQ(actual, expected);
}
TEST(TestSimilarityChecker, SameString001) {
	SimilarityChecker checker;
	int actual = checker.getSimilarity("CAFEBADA","CAFEBADA");
	int expected = 100;
	EXPECT_EQ(actual, expected);
}