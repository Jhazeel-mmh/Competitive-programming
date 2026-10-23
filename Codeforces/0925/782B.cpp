#include <bits/stdc++.h>
using namespace std;
using dd = double;
using ll = long long;

const dd MAX_ERROR = 10e-7;

vector <dd> locations;
vector <dd> speeds;

dd min_ans = (dd) INT_MAX;
dd curr_min_time;
bool left_has_max = false;
bool right_has_max = false;

dd get_time(dd loc){
    dd max_time = 0;
    for (int i = 0; i < locations.size(); i++){
        if (locations[i] == loc) {continue;}

        dd i_time = abs(locations[i] - loc) / speeds[i];

        if (i_time > max_time){
            left_has_max = false;
            right_has_max = false;

            if (locations[i] > loc){
                right_has_max = true;
            } else {
                left_has_max = true;
            }

            max_time = i_time;
        } else if (i_time == max_time){
            if (locations[i] > loc){
                right_has_max = true;
            } else {
                left_has_max = true;
            }
        }
    }
    return max_time;
}   

int main(){
    int n; 
    cin >> n;
    locations.resize(n);
    speeds.resize(n);

    dd lo = 0, hi = 0;
    dd mid;

    for (int i = 0; i < n; i++){
        cin >> locations[i];
        hi = max(hi, locations[i]);
    }

    for (auto &e: speeds) cin >> e;

    while (hi - lo > MAX_ERROR){
        mid = (hi + lo) / 2;

        curr_min_time = get_time(mid);


        min_ans = min(min_ans, curr_min_time);

        if (left_has_max && right_has_max){
            break;
        } else if (left_has_max){
            hi = mid;
        } else {
            lo = mid;
        }
    }

    cout << fixed << min_ans << endl;
}   