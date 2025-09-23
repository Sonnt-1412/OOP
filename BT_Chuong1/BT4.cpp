#include<bits/stdc++.h>
    using namespace std;
#define ll long long
class NV{
public: 
    string MNV;
    string HoVaTen;
    string PhongBan;   
    ll Luong;
    ll Thuong;
    ll ThucLanh;

    NV(string mnv, string hovaten, string phongban, ll luong, ll thuong){
        MNV = mnv;
        HoVaTen = hovaten;
        PhongBan = phongban;
        Luong = luong;
        Thuong = thuong;
        ThucLanh = luong + thuong;
    }
    void display(){
        cout << MNV <<" " << HoVaTen <<" " << PhongBan <<" " << Luong <<" " << Thuong <<" " << ThucLanh << endl;
    }
};
class congty{
private: 
    vector<NV> dsNV;
public:  
    vector<NV>& GETdsNV(){
        return dsNV;
    }
    void Insert(const NV &X){
        dsNV.push_back(X);
    }
    ll TongThucLanh(){
        ll total = 0;
        for(auto nv : dsNV){
            total = total + nv.ThucLanh;
        }
        return total;
    }
    void NhanVienLuongCoBanThapNhat(){
        ll MIN = __LONG_LONG_MAX__;
        for(auto nv : dsNV){
            MIN = min(MIN, nv.Luong);
        }
        for(auto nv : dsNV){
            if(nv.Luong == MIN){
                nv.display();
            }
        }
    }
    ll DemNV_LuongTren1200000(){
        ll cnt = 0;
        for(auto nv : dsNV){
            if(nv.Luong > 1200000){
                cnt++;
            }
        }
        return cnt;
    }
    void display(){
        for(auto nv: dsNV){
            cout << nv.MNV <<" " << nv.HoVaTen <<" " << nv.PhongBan <<" " << nv.Luong <<" " << nv.Thuong <<" " << nv.ThucLanh << endl;
        }
    }
};
bool cmp(const NV &A, const NV&B){
    if(A.PhongBan == B.PhongBan){
        return A.MNV > B.MNV;
    }
    else{
        return A.PhongBan < B.PhongBan;
    }
    
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  cout.tie(NULL); 
    congty cty;

    cty.Insert(NV("NV01", "Nguyen Van A", "IT", 500000, 1200000));
    cty.Insert(NV("NV02", "Tran Thi B", "HR", 450000, 800000));
    cty.Insert(NV("NV03", "Le Van C", "IT", 5000000, 1500000));
    cty.Insert(NV("NV04", "Pham Thi D", "Finance", 4000000, 1000000));
     cty.Insert(NV("NV05", "Pham Thi E", "Finance", 4000000, 1000000));
    // cout << cty.TongThucLanh(); --> Task 1
    // cty.NhanVienLuongCoBanThapNhat(); --> Task2
    // cout << cty.DemNV_LuongTren1200000();
    // sort(cty.GETdsNV().begin(), cty.GETdsNV().end(), cmp);
    // cty.display();


}   