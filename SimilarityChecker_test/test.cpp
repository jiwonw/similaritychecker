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
TEST(SimilarityChecker, AlphaTest002) {
	SimilarityChecker checker;
	int actual = checker.getAppearenceScore("ABCD","AAA");
	int expected = 10;
	EXPECT_EQ(actual,expected);
}
TEST(SimilarityChecker, AlphaTest003) {
	SimilarityChecker checker;
	int actual = checker.getAppearenceScore("AB","BBBAAA");
	int expected = 40;
	EXPECT_EQ(actual,expected);
}
TEST(SimilarityChecker, AlphaTest004) {
	SimilarityChecker checker;
	for (int i = 0; i < 500; i++)
	{
		int actual = checker.getAppearenceScore("ABCABCDEFGHIJKABC", "KABCJBFEDABKKKHKIGHA");
		int expected = 40;
		EXPECT_EQ(actual, expected);
	}
}
TEST(SimilarityChecker, AlphaTest005) {
	SimilarityChecker checker;
	for (int i = 0; i < 500; i++)
	{
		int actual = checker.getAppearenceScore("ABCDEFGHIJKLMNOPQRSTUVWXYZ", "ZYXWVUTSRQPONMLKJIHGFEDCBA");
		int expected = 40;
		EXPECT_EQ(actual, expected);
	}
}