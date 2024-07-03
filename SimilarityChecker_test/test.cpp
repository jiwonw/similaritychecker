#include "pch.h"
#include "../SimilarityChecker/similar.cpp"

TEST(SimilarityChecker, AlphaTest000) {
	SimilarityChecker checker;
	int actual = checker.getAppearenceScore("ABC","ABC");
	int expected = 40;
	EXPECT_EQ(actual,expected);
}