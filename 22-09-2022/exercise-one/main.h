using namespace std;

struct Test
{
  string name;
  double note;
  int amountQuestion;
};

template <typename T, int number>
T generateNumber();
Test generateTest();
void spaceLine();
void showTestResult(Test test);