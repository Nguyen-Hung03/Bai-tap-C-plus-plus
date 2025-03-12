/*Yêu cầu: Cho biết điểm kiểm tra Tin học của 1 em học sinh (2 con điểm hệ số 1, 1 con 
điểm hệ số 2, 1 con điểm hệ số 3). In ra kết quả học tập môn Tin học của em đó. 
Nếu điểm tổng kết >=8 đạt kết quả Giỏi, <8 và 
>=6,5 đạt kết quả Khá ,<6,5 và >=5 đạt kết quả Trung Bình ,<5 đạt két quả Yếu.
Input Format
Một dòng chứa 4 số điểm của hoc sinh.
Constraints
Điểm là số thực từ 0 tới 10
Output Format
Kêt quả học tập môn Tin học của em hoc sinh ở dạng in hoa không dấu
Sample Input 0
9 8 7 8
Sample Output 0
GIOI
Sample Input 1
8.5 7.5 6.5 7
Sample Output 1
KHA
*/
#include<bits/stdc++.h>

using namespace std;
int main(){
    float a,b,c,d;
    cin>>a>>b>>c>>d;
    double tb=(a+b+c*2+d*3)/7;
    if(tb>=8.0) cout<<"GIOI";
    else if(tb>=6.5) cout<<"KHA";
    else if(tb>=5) cout<<"TRUNG BINH";
    else cout<<"YEU";
}