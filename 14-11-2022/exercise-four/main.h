#define LENGTH 10

template <typename T>
T createRandomNumber(T number);
template <typename T>
T *handleQuickSort(T *array, int start, int end);
template <typename T>
T *handlePopulateArray(T *array, int length);
template <typename T>
int handleSplitTheArray(T *array, int start, int end);
template <typename T>
void handleSwapArrayElement(T *elementForExchange, T *element);

template <typename T>
void printArray(T *array, int length);
