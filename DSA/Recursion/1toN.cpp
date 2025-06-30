#include<iostream>

using namespace std;
void print(int N) {
    if (N == 1) {
        cout << N << endl;
        return;

    }
    print(N - 1);
    cout << N << endl;




}
int main() {
    print(10);

}