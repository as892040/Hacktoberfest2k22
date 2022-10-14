#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        char a[9][9];
        int r=0,b=0;
      for(int i=1;i<=8;i++){
        for(int j=1;j<=8;j++){
            cin>>a[i][j];
            if(a[i][j]=='R'){
                r++;
            }
            else if(a[i][j]=='B'){
                b++;
            }
        }
      }
      
        if(r==0){
            cout<<"B"<<endl;
        }
        else if(b==0){
            cout<<"R"<<endl;
        }
        else{
        bool flag1,flag2;
        for(int i=1;i<=8;i++){
            flag1=false;
            flag2=false;
            int red=0,blue=0;
            for(int j=1;j<=8;j++){
                if(a[i][j]=='R'){
                    red++;
                }
                if(a[j][i]=='B'){
                    blue++;
                }
            }
            if(red==8){
                flag1=true;
                break;
            }
            if(blue==8){
                flag2=true;
                break;
            }
        }
        if(flag1==true){
            cout<<"R"<<endl;
        }
        else {
            cout<<"B"<<endl;;
        }
        }
    }
    return 0;
}
