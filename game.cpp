#include <iostream>
int game(int x, int y) {
    int n, a, b, c;
    n = x;
    int qn, qa, qb, qc;
    qn = y;
    int Strikes = 0;
    int Balls = 0;
    a = n / 100;
    b = (n - a * 100) / 10;
    c = (n - a * 100) - b * 10;
    qa = qn / 100;
    qb = (qn - qa * 100) / 10;
    qc = (qn - qa * 100) - qb * 10;
    if (qa == a) {
        Strikes++;
    }
    if (qa == b) {
        Balls++;
    }
    if (qa == c) {
        Balls++;
    }
    if (qb == b) {
        Strikes++;
    }
    if (qb == a) {
        Balls++;
    }
    if (qb == c) {
        Balls++;
    }
    if (qc == c) {
        Strikes++;
    }
    if (qc == a) {
        Balls++;
    }
    if (qc == b) {
        Balls++;
    }
    std::cout << "Strikes: " << Strikes << ", Balls: " << Balls << std::endl;
}