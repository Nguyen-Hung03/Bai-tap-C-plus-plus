/*Cho mảng số nguyên A[] gồm N phần tử, hãy tìm vị trí (bắt đầu từ 0) cuối cùng của giá trị nhỏ nhất trong mảng và vị trí đầu tiên của giá trị lớn nhất trong mảng. Tức là nếu có nhiều số có cùng 
giá trị nhỏ nhất thì bạn phải in ra vị trí cuối cùng, và có nhiều số có cùng 
giá trị lớn nhất trong mảng bạn phải in ra vị trí đầu tiên lớn nhất đó
Input Format
Dòng đầu tiên là N: số lượng phần tử trong mảng. 
Dòng thứ 2 gồm N phần tử viết cách nhau một khoảng trống
Constraints
1<=N<=10^6; 1<=A[i]<=10^6
Output Format
In trên 1 dòng 2 chỉ số mà bạn tìm được
Sample Input 0
9
7531 17893 14018 16445 32453 9392 30488 14679 29799 
Sample Output 0
0 4
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int min=a[0],max=a[0],nho=0,lon=0;
    for(int i=1;i<n;i++){
        if(min>=a[i]){
            min=a[i];
            nho=i;
        }
        else if(a[i]>max){
            max = a[i];
            lon=i;
        }
    }
    cout<<nho<<" "<<lon;
}