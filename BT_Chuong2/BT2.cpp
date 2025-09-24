#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll total = 0;

class Fraction{
public:
ll num, den;  
Fraction (ll x = 0, ll y = 1){
    num = x;
    den = y;
    ll g = __gcd(num, den);
    num = num / g, den = den / g;
    if(den < 0){num = -num, den = -den;}
}
Fraction GCD(){
    ll g = __gcd(num, den);
    num = num / g, den = den / g;
    return Fraction(num, den);
}
Fraction operator+(const Fraction &F){
    return Fraction(num * F.den + F.num * den, den * F.den).GCD();
}
Fraction compare(const Fraction &F){
    if(num * F.den > F.num * den){
        return Fraction(num, den);
    }
        return Fraction(F.num, F.den);
}
void display(){
    cout << num <<" " << den << endl;
}

};
    signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  cout.tie(NULL);
    vector<Fraction> arr_Fraction;
    Fraction MAX, SUM;
    cin >> total;
    for(long i = 1; i <= total; i++){
        ll x, y;    cin >> x >> y;
        Fraction A(x, y);
        SUM = SUM + A;
        MAX = MAX.compare(A);
    }
    SUM.display();
    MAX.display();
}