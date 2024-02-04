#include <iostream>
using namespace std;

int arr[102];
int n;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]*arr[i]<< ' ';
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}