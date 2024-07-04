
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class SimilarityChecker
{
public:

	int getAppearenceScore(string a, string b) 
	{
		vector<char> appearA = getAppearList(a);
		vector<char> appearB = getAppearList(b);

		int cntSame = countSameAlpha(appearA, appearB);
		int cntTotal = appearA.size() + appearB.size() - cntSame;

		return MAX_APR_SCORE * cntSame / cntTotal;
	}

private:

	const int MAX_APR_SCORE = 40;

	vector<char> getAppearList(string str)
	{
		vector<char> appear = {};
		sort(str.begin(), str.end());
		for (const char ch : str)
			if (appear.size() == 0 || appear[appear.size() - 1] != ch)
				appear.push_back(ch);
		return appear;
	}

	int countSameAlpha(vector<char> appearA, vector<char> appearB)
	{
		int cntSame = 0;
		for (int idxA = 0, idxB = 0; idxA < appearA.size() && idxB < appearB.size(); )
		{
			if (appearA[idxA] == appearB[idxB]) {
				cntSame++;
				idxA++;
				idxB++;
				continue;
			}
			else if (appearA[idxA] > appearB[idxB]) {
				idxB++;
				continue;
			}
			idxA++;
		}
		return cntSame;
	}
};