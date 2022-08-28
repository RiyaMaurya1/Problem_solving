int hcf(int a, int b, int n)
{
    if (n < 1)
    {
        return 0;
    }
    if (a % n == 0 && b % n == 0)
    {
        cout << "HCF: " << n << endl;
        return n;
    }
    return hcf(a, b, n - 1);
}
int main(){
   int n = 0;
   int a = 0, b = 0;
    cin >> a >> b;
    n = min(a, b);
    int x = hcf(a, b, n);

    cout << "LCM:  " << (a * b) / x;
    return 0;
}
