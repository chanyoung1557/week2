#include <iostream>
#include <cstdlib>
#include <ctime>
int game(int x,int y);
int ran();
int main() {
    int n;
    n=ran();
    int qn;
    while (true) {
        std::cout << "Enter a guess: ";
        std::cin >> qn;
        if (n == qn) {
            std::cout << "You win!" << std::endl;
            break;
        }
        else {
            game(n, qn);
        }
    }
    return 0;
}

