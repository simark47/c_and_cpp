//  https://www.hackerearth.com/problem/algorithm/prime-palindromes-5/
// https://leetcode.com/problems/prime-palindrome/description/

int primePalindrome(int n) {
    while(1){
    int temp=n;
    int rev=0;
    while(temp>0){
        int rem=temp%10;
        rev=rev*10+rem;
        temp/=10;

    }
    int isPalin=(rev==n);
    int isPrime=1;
    if(n<2){
        isPrime=0;
    }else{
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                isPrime=0;
                break;
            }
        }
    }
    if(isPrime && isPalin){
        return n;
        break;
    }n++;
    }
}

#include <stdio.h>
#include <stdbool.h>

int main(void) {
    long N;
    scanf("%ld", &N);

    while (1) {
        // ---------- palindrome check ----------
        long temp = N;
        long rev = 0;

        while (temp > 0) {
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }

        bool palin = (rev == N);

        // ---------- prime check ----------
        bool prime = true;
        if (N < 2) {
            prime = false;
        } else {
            for (long i = 2; i * i <= N; i++) {
                if (N % i == 0) {
                    prime = false;
                    break;
                }
            }
        }

        // ---------- answer ----------
        if (palin && prime) {
            printf("%ld\n", N);
            break;
        }

        N++;
    }
    return 0;
}
