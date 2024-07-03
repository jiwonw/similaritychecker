
#include <string>
#include <vector>
using namespace std;

class SimilarityChecker
{
public:
	int getLengthScore(string a, string b) {
		int lena = a.size();
		int lenb = b.size();
		int base = (lenb > lena ? lena : lenb); // Select short len as base
		int gap = (lenb > lena ? lenb - lena : lena - lenb);
		if (gap >= base)
			return 0;
		return MAX_LEN_SCORE*(base-gap)/base;
	}
private:
	const int MAX_LEN_SCORE = 60;
};