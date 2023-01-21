#include <iostream>

using namespace std;

int main()
{
    srand(time(nullptr));
    //int begin = -20;
    //int end = 20;

    const int size{ 10 };
    
    int array[size]{};

    for (int i = 0; i < size; i++)
        array[i] = rand() % 100;

    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << "\n";

    
    int minIndex = 0;
    
    for (int i = 1; i < size; i++)
        if (array[minIndex] > array[i])
            minIndex = i;
            
    cout << "min = " << array[minIndex] << "\n";
    cout << "min index = " << minIndex << "\n";

    int maxIndex = 0;
    for (int i = 1; i < size; i++)
        if (array[maxIndex] < array[i])
            maxIndex = i;

    cout << "max = " << array[maxIndex] << "\n";
    cout << "max index = " << maxIndex << "\n";

    int temp = array[minIndex];
    array[minIndex] = array[maxIndex];
    array[maxIndex] = temp;

    int minNext = 0;

    for (int i = 1; i < size; i++)
        if (i != minIndex && array[minNext] > array[i])
            minNext = i;

    cout << "next min = " << array[minNext] << "\n";
    cout << "next min index = " << minNext << "\n";
   


}
