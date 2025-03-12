/*Cho mảng số nguyên A[] gồm N phần tử, 
tìm số lớn nhất và số lớn thứ 2 trong mảng. Chú ý 2 giá trị này có thể giống nhau
Input Format
Dòng đầu tiên là N: số lượng phần tử trong mảng. 
Dòng thứ 2 gồm N phần tử viết cách nhau một khoảng trống
Constraints
2<=N<=10^6; 0<=A[i]<=10^6
Output Format
In ra số lớn nhất và số lớn thứ 2 trong mảng
Sample Input 0
5
23 29 74 11 81 
Sample Output 0
81 74
*/
#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int max1=a[0],j;
    for(int i=0;i<n;i++){
        if(a[i]>max1){
            max1=a[i];
            j=i;
        }
    }
    int max2=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>max2 && j!=i) max2=a[i];
    }
    cout<<max1<<" "<<max2;
}