
#include <string>
#include <vector>
using namespace std;

class SimilarityChecker
{
public:
	int getSimilarity(string input1, string input2)
	{
		getLengthScore(input1, input2);
		getAppearenceScore(input1, input2);
		return 100;
	}
	int getLengthScore(string a, string b) {
		int lena = a.size();
		int lenb = b.size();
		int base = (lenb > lena ? lena : lenb); // Select short len as base
		int gap = (lenb > lena ? lenb - lena : lena - lenb);
		if (gap >= base)
			return 0;
		return MAX_LEN_SCORE*(base-gap)/base;
	}
	int getAppearenceScore(string a, string b) {
		return MAX_APR_SCORE;
	}
private:
	const int MAX_LEN_SCORE = 60;
	const int MAX_APR_SCORE = 40;
};