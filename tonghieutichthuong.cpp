/*Nhập vào 2 số nguyên, in ra tổng, hiệu, tích thương(lấy đó chính xác với 4 chữ số) của 2 số đó. 
Bài này có thể bị sai do 2 nguyên nhân : 1. khi tính tích bị tràn số, 2 Độ chính xác của thương.
Input Format
2 số nguyên a,b trên 1 dòng.
Constraints
-10^8≤a,b≤10^8
Output Format
In ra tổng hiệu tích thương trên từng dòng. Nếu trường hợp không thể tìm được 
thương của 2 số thi se in ra “INVALID” cho đống kết quả của thuong.
Sample Input 0
3 7
Sample Output 0
10    
-4    
21    
0.4286
*/
#include <bits/stdc++.h>

using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(b==0){
        cout<<a+b<<endl<<a-b<<endl<<1ll*a*b<<endl<<"INVALID";
    }
    else{
        cout<<a+b<<endl<<a-b<<endl<<1ll*a*b<<endl;
        cout<<fixed<<setprecision(4)<<(double)a/b<<endl; // phải ép sang kiểu double nếu để float thì sẽ sai
        // vì độ chính xác của float không bằng double.
    }
}