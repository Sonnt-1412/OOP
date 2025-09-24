#include<bits/stdc++.h>
    using namespace std;

class Student{
private: 
    string MHS; 
    string HoVaTen;
    string GioiTinh;
    double Toan;
    double Ly;
    double Hoa;
public:
    Student(string mhs, string hovaten, string gioitinh, double toan, double ly, double hoa){
        MHS = mhs, HoVaTen = hovaten, GioiTinh = gioitinh, Toan = toan, Ly = ly, Hoa = hoa;
    }
    double DiemTB(){
        return (Toan + Ly + Hoa) / 3;
    }
    void display(){
        cout << MHS <<" " <<GioiTinh <<" " << Toan <<" " << Ly <<" " << Hoa << endl;
    }
};

    signed main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);  cout.tie(NULL);
        Student H("ABC", "NguyenThanhSon","Nam",3,4,5);  
        cout << H.DiemTB() << endl;
        H.display();
}