#include <iostream>
using namespace std;


class Calcul
{
public:
	string expresie;

	Calcul()
	{

	}

	void gasesteParantezele()
	{
		for (int i = 0; i < 10; i++)
		{
			if (expresie[i] == '(')
				int beginP = i;
			if (expresie[i] == ')')
				int endP = i;
	    }
	}
};
int main()
{
	Calcul c;
	cout << endl << "Introduceti expresia: ";
	cin >> c.expresie;
	cout << endl << c.expresie;
} 