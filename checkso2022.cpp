/*Nhập vào 1 dãy số có không quá 10000 số nguyên. 
Hãy xác định xem trong quá trình nhập có xuất hiện số 2022 hay không?
Input Format
Dòng đầu tiên là số lượng số nguyên sẽ nhập: N. Dòng thứ 2 là N số viết cách nhau 1 khoảng trắng
Constraints
1<=N<=10000. Các số được nhập là số nguyên không quá 10^6
Output Format
In YES nếu trong các số vừa nhập có 2022, ngược lại in NO
Sample Input 0
4
2019 2020 2021 2022
Sample Output 0
YES
*/
#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int ok=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==2022) ok=1;
    }
    if(ok) cout<<"YES";
    else cout<<"NO";
}