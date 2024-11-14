#include <iostream>
using namespace std;
int main()
{   
    int excluded = 0;
    int n;

    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++){
        int diff;
        cin >> diff;
        if(diff % 2 == 1){
            excluded++;
        }
    }

    cout << excluded;

    return 0;
}