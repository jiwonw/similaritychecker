#include "pch.h"
#include "../SimilarityChecker/similar.cpp"

TEST(TestSimilarityChecker, GetLength000) {
	SimilarityChecker checker;
	int actual = checker.getLengthScore("ABC","ABC");
	int expected = 60;
	EXPECT_EQ(actual, expected);
}
TEST(TestSimilarityChecker, GetLength001) {
	SimilarityChecker checker;
	int actual = checker.getLengthScore("CAFEBADA","CAFEBADA");
	int expected = 60;
	EXPECT_EQ(actual, expected);
}
TEST(TestSimilarityChecker, GetLength002) {
	SimilarityChecker checker;
	int actual = checker.getLengthScore("ADA","CAFEBADA");
	int expected = 0;
	EXPECT_EQ(actual, expected);
}
TEST(TestSimilarityChecker, GetLength003) {
	SimilarityChecker checker;
	int actual = checker.getLengthScore("ADAB","CAFEBA");
	int expected = 30;
	EXPECT_EQ(actual, expected);
}
TEST(TestSimilarityChecker, GetLength004) {
	SimilarityChecker checker;
	int actual = checker.getLengthScore("ADAB","CAFEB");
	int expected = 45;
	EXPECT_EQ(actual, expected);
}