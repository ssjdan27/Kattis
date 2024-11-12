#include <iostream>

using namespace std;

int main() {
    string letters;
    char centerLetter;
    int n;

    cin >> letters;
    cin >> n;
    centerLetter = letters[0];
    
    for(int i = 0; i < n; i++){
        bool invalidLetter = false;
        int count = 0;
        string word;
        cin >> word;

        if(word.find(centerLetter) == string::npos){
            continue;
        }
    
        for(char c: word){
            if(letters.find(c) != string::npos){
                count += 1;
            }
            else{
                invalidLetter = true;
                break;
            }
        }
        
        if (!invalidLetter && count > 3){
            cout << word << "\n";
        }
    }
    return 0;
}