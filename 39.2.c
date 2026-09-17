/* Find the sum of main diagonal elements for a square matrix.


Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;  // n == m for a square matrix

    vector<vector<int>> mat(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> mat[i][j];

    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += mat[i][i];

    cout << sum << endl;
    return 0;
}
