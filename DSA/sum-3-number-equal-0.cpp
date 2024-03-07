// Author: Rena - GitHub: github.com/renadayne
#include <iostream>
using namespace std;

// Problem: https://www.geeksforgeeks.org/find-triplets-array-whose-sum-equal-zero/
// Funtion to calculate combination of 3
int Combination(int n) {
    if(n < 3) return 0;
    int res, factorial = 1, factorial_2;
    for(int i = 0; i < n; i++) {
        factorial = factorial * (i + 1);
        if(n - 4 == i) factorial_2 = factorial;
    }
    res = factorial / (6 * factorial_2);
    return res;
}


int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int num = 0; num < n; num++) {
        cin >> arr[num];
    }


    // set i, j, k default value
    int i = 0, j = 1, k = 2;
    int numberOfLoop = Combination(n);

    for(int x = 0; x < numberOfLoop; x++) {
        if(arr[i] + arr[j] + arr[k] == 0) 
            cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
        
        if(k < n - 1) k++;

        else if(k == n - 1 && (j + 1) != n - 1) {
            j = j + 1;
            k = j + 1;
        }

        else if(k == n - 1 && (j + 1) == n - 1) {
            i++;
            j = i + 1;
            k = j + 1;
        }
    }
    return 0;
}

/*
Giải thích: Hướng giải quyết của bài toán sẽ sử dụng 1 vòng for duyệt số phần từ tương đương
tổ hợp chập 3 của n (Bộ 3 số trong n số). => độ phức tạp O(n)
Với logic 2 phần tử i, j sẽ ở vị trí default value và cho k chạy, khi chạy đến n - 1 sẽ chạy
j lên 1, tiếp tục chạy k. Tương tự khi đẩy j lên n - 2 (k lúc này ở n - 1) sẽ tiếp tục cho i
chạy. Cứ như vậy duyệt được toàn bộ phần tử. 
*/