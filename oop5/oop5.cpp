#include <iostream>
#include <thread>
#include <atomic>

void summator(int n, int inputArray, const int size, const int numberOfThreads, std::atomic<int>& sumResult)
{
    for (int i = n; i < size; i += numberOfThreads) {
        sumResult += inputArray[i];
    }
}

int main()
{
    const int size = 10115;
    intinputArray = new int[size];
    const int numberOfThreads = 9;
    std::atomic<int> sumResult(0);

    for (int i = 0; i < size; i++) {
        inputArray[i] = 1;
    }

    for (int i = 0; i < numberOfThreads; i++) {
        std::thread t(summator, i, inputArray, size, numberOfThreads, std::ref(sumResult));
        t.detach();
    }

    std::this_thread::sleep_for(std::chrono::seconds(2));

    std::cout << sumResult << std::endl;
}