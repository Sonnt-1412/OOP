#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Matrix{
private: 
    ll rows, cols; 
    ll a[100][100];

public: 
Matrix(ll r = 0, ll c = 0){
        rows = r;
        cols = c;
    }
void input(){
        for(long i = 1; i <= rows; i++){
            for(long j = 1; j <= cols; j++){
                cin >> a[i][j];
            }
        }   
    }
Matrix operator*(const Matrix &X){
    if(cols != X.rows)  cout <<"Can't Mul these matrix" << endl;
    ll x = rows, y = X.cols;
    ll total = 0;
    Matrix B(x, y);
    for(long i = 1; i <= rows; i++){
        for(long j = 1; j <= X.cols; j++){
            for(long k = 1; k <= X.cols; k++){
                total += a[i][k] * X.a[k][j];
            }
            B.a[i][j] = total;
            total = 0;
        }
    }
    return B;
}
// 
// 1 2   4 2
// 2 1.  3 5
void display(){
    cout << rows <<" " << cols << endl;
    for(long i = 1; i <= rows; i++){
        for(long j = 1; j <= cols; j++){
            cout << a[i][j] <<" ";
        }
            cout << endl;
        }
    }
};

signed main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);  cout.tie(NULL);
        ll x1, y1, x2, y2;  cin >> x1 >> y1 >> x2 >> y2;
        Matrix A(x1,y1);  A.input();
        Matrix B(x2,y2);  B.input();
        Matrix C = A * B;
        C.display();

}