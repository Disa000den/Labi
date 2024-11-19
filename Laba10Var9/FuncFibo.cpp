
int fibonacci(int n) {
    if (n <= 1) 
    {
        return n;
    }

    int prev1 = 0, prev2 = 1, fib;
    for (int i = 2; i <= n; ++i) 
    {
        fib = prev1 + prev2;
        prev1 = prev2;
        prev2 = fib;
    }

    return fib;
}
