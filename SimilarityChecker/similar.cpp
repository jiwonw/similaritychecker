
#include <string>
#include <vector>
using namespace std;

class SimilarityChecker
{
public:
	int getAppearenceScore(string a, string b) 
	{
		for (int i=0;i<a.size() && i<b.size();i++)
		{
			if (a[i] != b[i])
			return 0;
		}
		return MAX_APR_SCORE;
	}
private:

	const int MAX_APR_SCORE = 40;
};