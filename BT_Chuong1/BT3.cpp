#include<bits/stdc++.h>
using namespace std;
#define ll long long


class Fraction{
public:
ll Num, Den;
Fraction(ll Tu, ll Mau){
    Num = Tu;
    Den = (Mau == 0) ? 1 : Mau;
    if(Den < 0){
        Num = -Num, Den = -Den;
    }
} 
Fraction GCD(){
    ll g = gcd(abs(Num), abs(Den));
    return Fraction(Num / g, Den / g);
} 

bool IsGreater(const Fraction &F){
    return  Num * F.Den > F.Num * Den;
}

Fraction Add(const Fraction &F){
    return Fraction(Num * F.Den + F.Num * Den, Den * F.Den).GCD();
}
Fraction Minus(const Fraction &F){
    return Fraction(Num * F.Den - F.Num * Den, Den * F.Den).GCD();
}
Fraction Mul(const Fraction &F){
    return Fraction(Num *  F.Num, Den * F.Den).GCD();
}
Fraction Divide(const Fraction &F){
    return Fraction(Num * F.Den, Den * F.Num).GCD();
}

void display(){
    cout << Num <<" " << Den << endl;
}

};
string list_of_month[14] = {"NULL", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};   
long day_of_month[14] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
long extra_day_of_month[14]= {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
class Date{
public: 
    ll day, month, year; 
    Date(ll d, ll m, ll y){
        day = d, month = m, year = y;
    }
    Date Next_Day(){
        if(year % 4 == 0){
            if(day == extra_day_of_month[month]){
               day = 1;
                if(month == 12){
                    month = 1;
                    year +=1;
                }
                else    month+=1; 
            }
            else day+=1;
        }
        else{
            if(day == day_of_month[month]){
                day = 1;
                if(month == 12){
                    month = 1;
                    year += 1;
                }
                else            month +=1;
            }
            else day +=1; 
        }
        return Date(day, month, year);
    }
    void display(){
        cout << day <<" "<< list_of_month[month] <<" " << year << endl;
    }
};
signed main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);  cout.tie(NULL);
        Fraction A(4, 6);
        Fraction B(1, 2);
        Fraction C(7, 4);
        // Tim phan so lon hon
        // A.IsGreater(B) ? A.display() : B.display();
        Fraction D = A.Add(B);
        Fraction E = A.Minus(B);
        Fraction F = A.Mul(B);
        Fraction G = A.Divide(B);
        // 
        Date DAY(29, 2, 2020);
        DAY.Next_Day().display();
        

}