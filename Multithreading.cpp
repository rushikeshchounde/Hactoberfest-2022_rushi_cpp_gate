#include <iostream>
#include <thread>

void printNumbers(int start, int end) {
    for (int i = start; i <= end; ++i) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::thread t1(printNumbers, 1, 5);
    std::thread t2(printNumbers, 6, 10);

    t1.join(); // Wait for thread t1 to finish
    t2.join(); // Wait for thread t2 to finish

    return 0;
}
