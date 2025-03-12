/*Công thức chuyển đơn vị nhiệt độ từ C sang F như sau: F = (C * 9/5) + 32. Viết chương trình C 
cho phép nhập vào nhiệt độ theo đơn vị C là số nguyên 
dương không quá 10^6 , thực hiện chuyển 
sang đơn vị đo F và in ra màn hình. (Lưu ý luôn lấy 2 chữ số thập phân sau dấu phẩy)
Input Format
Nhiệt độ đo C là một số nguyên không âm.
Constraints
0≤n≤10^6
Output Format
Kết quả đầu ra là nhiệt độ C sang độ F
Sample Input 0
30
Sample Output 0
86.00
*/
#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    int c;
    cin>>c;
    cout<<fixed<<setprecision(2)<<(double)c*9/5+32;
}