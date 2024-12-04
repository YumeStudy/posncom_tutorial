#include <iostream>
using namespace std;

int main() {
    int n; //ประกาศตัวแปร n
    cin >> n; //รับค่า n เข้ามา
    
    if (n%2 == 0) {
        cout << "Even";
        //ถ้า n หารด้วย 2 แล้วเศษเป็น 0 (หารลงตัว) -> n เป็นจำนวนคู่
    }

    else {
        cout << "Odd";
        //ถ้าไม่ตรงกับเงื่อนไขข้างบน (n%2!=0) -> n เป็นจำนวนคี่
    }

    /*trick: ถ้าต้องการทำงานแค่คำสั่งเดียวไม่จำเป็นต้องมีปีกกาก็ได้~
        ex. if(n%2==0) cout << "Even"; 
            else cout << "Odd";
    */
}
