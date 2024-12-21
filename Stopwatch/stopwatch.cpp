#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int timeElapsed = 0;
    int lastTime;
    bool running = false;
    cin >> n;

    while(n--){
        int num;
        cin >> num;
        running = !running;
        if(!running){
            timeElapsed += num - lastTime;
        }
        lastTime = num;
    }

    if(running){
        cout << "still running";
    }
    else{
        cout << timeElapsed;
    }

    return 0;
}