#include <iostream>
using namespace std;
int main()
{
    int n;
    char needle;
    string haystack;
    bool found = false;
    cin >> n;
    cin >> needle;
    cin >> haystack;

    for(int i = 0; i < n;i++){
        if(haystack[i] == needle){
            found = true;
            break;
        }
    }

    if (found) cout << "Unnar fann hana!";
    else cout << "Unnar fann hana ekki!";

    return 0;
}