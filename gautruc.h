//
// Created by Khanhnvtb on 14-Mar-23.
//

#ifndef HEART_DISEASE_PREDICTION_USING_C___GAUTRUC_H
#define HEART_DISEASE_PREDICTION_USING_C___GAUTRUC_H

#endif //HEART_DISEASE_PREDICTION_USING_C___GAUTRUC_H

#include <bits/stdc++.h>

using namespace std;

struct DataFrame{
    vector<vector<string>> df;
    vector<string> columns;

};

vector <string> split(string str, char del) {
    string tmp = "";
    vector <string> ans;
    for (char c: str) {
        if (c != del) tmp += c;
        else {
            ans.push_back(tmp);
            tmp = "";
        }
    }
    ans.push_back(tmp);
    return ans;
}

DataFrame read_csv(const char *file) {
    DataFrame dataFrame;
    freopen(file, "r", stdin);
    string s;
    getline(cin, s);
    dataFrame.columns = split(s, ' ');
    while(getline(cin, s)){
        vector <string> v = split(s, ',');
        dataFrame.df.push_back(v);
    }
    return dataFrame;
}