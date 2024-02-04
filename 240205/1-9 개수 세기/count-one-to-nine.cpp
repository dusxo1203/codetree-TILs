#include <iostream>
using namespace std;

int n;
int arr[102];
int out[10];

int main() {
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>> arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1) out[1]++;
        else if(arr[i]==2) out[2]++;
        else if(arr[i]==3) out[3]++;
        else if(arr[i]==4) out[4]++;
        else if(arr[i]==5) out[5]++;
        else if(arr[i]==6) out[6]++;
        else if(arr[i]==7) out[7]++;
        else if(arr[i]==8) out[8]++;
        else if(arr[i]==9) out[9]++;
    }
    for(int i=1;i<=9;i++)
    {
        cout<<out[i];
        cout<<'\n';
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}