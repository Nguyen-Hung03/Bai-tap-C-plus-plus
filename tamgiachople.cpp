/*Cho 3 cạnh của tam giác a, b, c có thể tạo thành 1 tam giác hợp lệ hay không?
Input Format
1 dòng chứa 3 số a, b, c
Constraints
-10^6<=a, b, c<=10^6
Output Format
In ra YES nếu a, b, c là 3 cạnh của 1 tam giác hợp lệ, ngược lại in ra NO
Sample Input 0
3 4 5
Sample Output 0
YES
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a,b,c;
    cin>>a>>b>>c;
    if(a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a) cout<<"YES";
    else cout<<"NO";
    return 0;
}
