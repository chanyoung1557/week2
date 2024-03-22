#include <iostream>
#include <cstdlib>
#include <ctime>
int game(int x,int y);
int ran();
int main() {
    int n;
    int count=5;
    n=ran();
    int qn;
    while (true) {
        if(count==0){
            std::cout<<"You lose!";
            break;
        }
        std::cout<<count<<" chances left."<<std::endl;
        std::cout << "Enter a guess: ";
        std::cin >> qn;
        if (n == qn) {
            std::cout << "You win!" << std::endl;
            break;
        }
        else {
            game(n, qn);
            count--;
        }
        
    }
    return 0;
}
