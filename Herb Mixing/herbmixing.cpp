#include <iostream>
using namespace std;
int main()
{
    int greenHerbs;
    int redHerbs;
    int health = 0;

    cin >> greenHerbs >> redHerbs;

    while(greenHerbs > 0){
        if(greenHerbs > 0 and redHerbs > 0){
            greenHerbs--;
            redHerbs--;
            health += 10;
        }
        else if(greenHerbs > 2){
            greenHerbs -= 3;
            health += 10;
        }
        else if(greenHerbs > 1){
            greenHerbs -= 2;
            health += 3;
        }
        else if(greenHerbs > 0){
            greenHerbs--;
            health += 1;
        }
    }

    cout << health;
    return 0;
}