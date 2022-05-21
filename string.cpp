#include <iostream>
#include <string>
using namespace std;

string oringinal = "人易科技:上 機 測 驗 - 演算法";

int main()
{
    int index ;
    string result = "";
    cout<<oringinal<<endl;
    //將:替換成全形
    for(index=0;index<oringinal.length();index++)
    {
        if( oringinal[index] == ':')
            result += "："; //全形符號占用兩個字元位置
        else
            result +=oringinal[index];
    }
    cout<<result<<endl;
    //去掉中文字間的空白
    result.clear();
     for(index=0;index<oringinal.length();index++)
    {
        if( oringinal[index] == ' ')
        {
            if(oringinal[index-1] != '-'&&oringinal[index+1] != '-')
                continue;
            else
                result += oringinal[index];
        }
        else
            result += oringinal[index];

    }
    cout<<result<<endl;
    result.clear();
    //列印出:到-之間的字元
    bool flag = false;
     for(index=0;index<oringinal.length();index++)
    {
        if( oringinal[index] == '-')
            flag=false;
        if(flag)
            result+=oringinal[index];
        if( oringinal[index] == ':')
            flag=true;
    }
    cout<<result<<endl;
}