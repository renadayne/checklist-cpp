#include <iostream>
using namespace std;

// https://codefun.vn/problems/CHD1A
int main()
{
    long long T, n, k, temp_1, arr[10000], result_1, result_2;
    cin >> T;
    for(int i = 0; i < T; i++)
    {
        cin >> n >> k;
        result_1 = 1;
        result_2 = 1;
        temp_1 = (k-1) % 6971;
        for(int j = 0; j < n; j++)
        {
            result_1 = temp_1 * result_1;
            result_1 = result_1 % 6971;
        }
        
        if(n % 2 == 0) result_2 = (k - 1) % 6971;
        else result_2 = (1 - k) % 6971;

        arr[i] = (result_1 + result_2) % 6971;
    }
    
    for(int i = 0; i < T; i++)
    cout << arr[i] << " " << endl;

}