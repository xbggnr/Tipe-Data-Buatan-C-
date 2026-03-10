#include <bits/stdc++.h>
using namespace std;

int main(void){
    int array[] = {2, 4, 6, 8};
    for(int i = 0; i <= 8; i++){
        cout << array[i] << endl;
        cout << "id: " << &array[i] << endl;
    }
    return 0;
}