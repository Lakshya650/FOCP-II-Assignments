#include <iostream>
#include <string>
using namespace std;

bool check(string s, int n, int k, int x) {
    int count = 0;
    int i = 0;

    while (i < n) {
        if (s[i] == '1') {
            count++;  
            i = i + x;  
        } else {
            i++;       
        }
    }

    if (count <= k) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int n, k;
    cin>>n>>k;

    string s;
    cin>>s;

    int low = 1;
    int high = n;
    int answer = n;

    while (low <= high){
        int mid =(low + high)/2;

        if(check(s, n, k, mid)) {
            answer = mid;    
            high = mid - 1;  
        }else {
            low = mid + 1;
        }
    }

    cout<<answer<<endl;

    return 0;
}