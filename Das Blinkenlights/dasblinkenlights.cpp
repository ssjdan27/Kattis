#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int p,q,s;
    cin >> p >> q >> s;

    set<int> lightOne;
    set<int> lightTwo;
    vector<int> intersection;

    for(int i = p; i <= s; i+= p){
        lightOne.insert(i);
    }

    for(int i = q; i <= s; i+= q){
        lightTwo.insert(i);
    }

    set_intersection(lightOne.begin(), lightOne.end(), lightTwo.begin(), lightTwo.end(), back_inserter(intersection));

    if(intersection.size()){
        cout << "yes";
    }
    else{
        cout << "no";
    }

    return 0;
}