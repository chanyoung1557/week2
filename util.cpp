#include <iostream>
#include <cstdlib>
#include <ctime>
int ran() {
    srand((unsigned int)time(NULL));
    int number;
    bool digits[10] = {false};
    do {
        number = rand() % 1000;
        int temp = number;
        bool isUnique = true;
        while (temp > 0) {
            int digit = temp % 10;
            if (digits[digit]) {
                isUnique = false;
                break;
            }
            digits[digit] = true;
            temp /= 10;
        }
        if (isUnique) {
            break;
        } else {
            for (int i = 0; i < 10; ++i) {
                digits[i] = false;
            }
        }
    } while (true);

    return number;
}