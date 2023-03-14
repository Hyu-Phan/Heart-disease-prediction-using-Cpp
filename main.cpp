#include <bits/stdc++.h>
#include "gautruc.h"

using namespace std;

int main() {
    DataFrame dataFrame = read_csv("heart.csv");
    for(string s : dataFrame.columns) cout << s << " ";
    cout << endl;
    for(vector<string> v : dataFrame.df) {
        for (string s: v)
            cout << s << " ";
        cout << endl;
    }
}
