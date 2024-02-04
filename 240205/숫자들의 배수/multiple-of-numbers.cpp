#include <iostream>
using namespace std;

int arr[100002];
int n,i,cnt;
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    while(1)
    {
        if(cnt==2)
        {
            for(int j=0;j<i;j++)
            {
                cout<<arr[j]<<' ';
            }
            break;
        }
        arr[i]=n*(i+1);
        
        if(arr[i]%5==0)
        {
            cnt++;
        }
        i++;
    }
    return 0;
}