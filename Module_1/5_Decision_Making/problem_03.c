// https://www.hackerrank.com/challenges/halloween-sale/problem

#include <stdio.h>
#include<math.h>
int main() {
    int p, d, m, s;
    scanf("%d %d %d %d", &p, &d, &m, &s);

    int games = 0;

    while (s >= p) {
        s -= p;
        games++;
        p = (p - d > m) ? (p - d) : m;

    }

    printf("%d\n", games);
    return 0;
}

/*
int howManyGames(int p, int d, int m, int s) {
    // Return the number of games you can buy
    int games = 0;

    while (s >= p) {
        s -= p;
        games++;
        p = (p - d > m) ? (p - d) : m;

    }

    
    return games;

}
*/