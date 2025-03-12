/*Tìm ước số lớn nhất của một số nguyên dương
Input Format
Dòng đầu tiên đưa vào số lượng bộ test T. Những dòng kế tiếp đưa vào 
T bộ test. Mỗi bộ test là một số nguyên dương N được ghi trên một dòng.
Constraints
1<=T<=500; 2<=N<=10000000
Output Format
Đưa ra kết quả mỗi test theo từng dòng.
Sample Input 0
2
10
17
Sample Output 0
5
17
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        int cnt;
        for(int i=2;i<=sqrt(a);i++){
            if(a%i==0){
                cnt=i;
                while(a%i==0) a/=i;
            }
        }
        if(a!=1) cnt=a;
        cout<<cnt<<endl;
    }
}