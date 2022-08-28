int arr[100001];
int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    if (arr[n] != -1)
    {
        return arr[n];
    }
    arr[n] = fib(n - 1) + fib(n - 2);
    return arr[n];
}
