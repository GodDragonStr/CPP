#include <iostream>

int iteration(int n){
    
    if(n == 1 || n == 0) return (1);
    n--;
    return ((n+1) * iteration(n));
}

int main(){

    int n;
    std::cin >> n ;
    std::cout << iteration(n);

    return 0;
}