#include <iostream>

using namespace std;

int main()
{
    int cont = 0, a, casos;
    cin >> casos;
    while (cont < casos){
        cin >> a;
        if (a == 0){
            cout << "NULL" <<endl;
        }else{
        if (a%2 == 0){
            cout << "EVEN ";
        }else{
        cout << "ODD ";
        }
        if (a < 0){
            cout << "NEGATIVE" <<endl;
        }else{
        cout << "POSITIVE" <<endl;
        }
        }
        cont++;
    }
    return 0;
}
