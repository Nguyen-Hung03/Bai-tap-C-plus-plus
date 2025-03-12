/*Cho bán kính R của hình tròn. Yêu cầu tính chu vi và diện tích của hình tròn đó.
Input Format
1 dòng chứa bán kính R là số nguyên dương.
Constraints
1≤R≤1000
Output Format
In ra chu vi và diện tích trên 1 dòng, kết quả lày độ chính xác 4 số sau phẩy.
Sample Input 0
10
Sample Output 0
62.8000 314.0000
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int r;
    cin>>r;
    cout<<fixed<<setprecision(4)<<2*3.14*r<<endl;
    cout<<fixed<<setprecision(4)<<3.14*r*r;
}