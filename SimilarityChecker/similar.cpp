
#include <string>
#include <vector>
using namespace std;

class SimilarityChecker
{
public:
	int getLengthScore(string a, string b) {
		int length_a = a.size();
		int length_b = b.size();

		int length_short = (length_b > length_a ? length_a : length_b); // Select short len as base
		int length_gap = (length_b > length_a ? length_b - length_a : length_a - length_b);

		if (length_gap >= length_short)
			return 0;

		return MAX_LEN_SCORE*(length_short-length_gap)/length_short;
	}

private:
	const int MAX_LEN_SCORE = 60;
};