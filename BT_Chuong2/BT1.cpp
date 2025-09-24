#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Fraction{
public:
ll num, den;  
Fraction (ll x, ll y){
    num = x;
    den = y;
    if(den < 0){num = -num, den = -den;}
}
Fraction operator+(const Fraction &F){
    return Fraction(num * F.den + F.num * den, den * F.den);
}
Fraction operator-(const Fraction &F){
    return Fraction(num * F.den - F.num * den, den * F.den);
}
Fraction operator*(const Fraction &F){
    return Fraction(num * F.num, den * F.den);
}
Fraction operator/(const Fraction &F){
    return Fraction(num * F.den, den * F.num);
}
void display(){
    cout << num <<" " << den << endl;
}

};
    signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  cout.tie(NULL);
    ll x1, y1, x2, y2;  
    cin >> x1 >> y1 >> x2 >> y2;
    Fraction A(x1, y1);   
    Fraction B(x2, y2);   
    Fraction C = A + B;
    Fraction D = A - B;
    Fraction E = A * B;
    Fraction F = A / B;
    C.display();
    D.display();
    E.display();
    F.display();
}