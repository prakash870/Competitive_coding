// https://codeforces.com/problemset/problem/1886/B
#include<bits/stdc++.h>
using namespace std;

 
using namespace std;
using ll = long long;




 
int pa, pb, ax, ay, bx, by;
 
bool check(double w) {
    double o1 = 0, o2 = 0;
    double dhc1 = sqrt(pow(ax-pa, 2) + pow(ay-pb, 2));
    double doc1 = sqrt(pow(ax-o1, 2) + pow(ay-o2, 2));
    double dhc2 = sqrt(pow(bx-pa, 2) + pow(by-pb, 2));
    double doc2 = sqrt(pow(bx-o1, 2) + pow(by-o2, 2));
 
    if((dhc1 <= w) && (doc1 <= w)) {
        return true;
    }
    else if((dhc2 <= w) && (doc2 <= w)) {
        return true;
    }
 
    double lightD = sqrt(pow(ax-bx, 2) + pow(ay-by, 2));
    if(lightD <= (2*w)) {
        if(((dhc1 <= w) || (dhc2 <= w)) && ((doc1 <= w) || (doc2 <= w))) {
            return true;
        }
        else return false;
    }
    else return false;
}
 
void test() {
    cin >> pa >> pb >> ax >> ay >> bx >> by;
 
    double lo = 0, hi = 1e9, mid;
    int x = 100;
    while(x--) {
        mid = (lo + hi) / 2;
    
        if(check(mid)) {
            hi = mid;
        }
        else lo = mid;
    }
    cout << fixed << setprecision(12);
    cout << lo << "\n";
}
 
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);
    int t = 1;  cin >> t;
    while(t--) {
        test();
    }
    return 0;
}
