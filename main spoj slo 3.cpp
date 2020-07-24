#include<iostream>
#include<string>
using namespace std;
int main(){
            char str[80],search[20];
            int c1=0,c2=0,i,j,flg;
            cin.getline(str,80);
            cin.getline(search,20);

            while(str[c1]!='\0')
                c1++;
            c1--;
            while(search[c2]!='\0')
                c2++;
            c2--;

            for(int i=0;i<=c1-c2;i++){
                for(int j=i;j<i+c2;j++)
                {

                    flg=1;
                    if(str[j]!=search[j-i])
                    {
                        flg=0;
                        break;
                    }
                }
                if(flg==1)
                    break;
            }
            if(flg==1){
                cout<<"Yes";
            }
            else{
                cout<<"No";
            }
}
