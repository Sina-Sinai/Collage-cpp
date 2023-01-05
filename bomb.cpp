#include<iostream>
using namespace std;
int main(){
    int m,n,k,x,y,counter=0;
    cin >> m >> n >> k;
    char arr[m][n];
    for(int i = 0; i < k; i++){
        cin >> x >> y;
        for (int i = 0; i <= m; i++){
            for (int j = 0; j <= n; j++){
                if (i == (x-1) && j == (y-1)){
                    arr[i][j] = '*';
                }else if(arr[i][j] != '*'){
                    arr[i][j] = ' ';
                }
            }
        }
    }
    for (int i = 0; i < (m); i++){
        for (int j = 0; j < (n); j++){
            if (arr[i][j] != '*'){
                for (int t = (i-1); t <= (i+1); t++){
                    for (int r = (j-1); r <= (j+1); r++){
                        if(arr[t][r] == '*' && t>=0 && r>=0 && t<m && r<n){
                            counter++;
                            // cout<<"("<<t<<","<<r<<")";
                        }
                    }
                }
                cout<<counter<<" ";
                counter = 0;
            }else{
                cout<<arr[i][j] << " ";
                counter = 0;
            }
        }
        counter = 0;
        cout<<endl;
    }
}