#include "pch.h"
#include "../SimilarityChecker/similar.cpp"

TEST(SimilarityChecker, AlphaTest000) {
	SimilarityChecker checker;
	int actual = checker.getAppearenceScore("ABC","ABC");
	int expected = 40;
	EXPECT_EQ(actual,expected);
}
TEST(SimilarityChecker, AlphaTest001) {
	SimilarityChecker checker;
	int actual = checker.getAppearenceScore("ABC","QWE");
	int expected = 0;
	EXPECT_EQ(actual,expected);
}