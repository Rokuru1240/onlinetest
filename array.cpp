#include <iostream>
using namespace std;

int oringinal[] = {0,1,2,3,4,5,6,7,8,9};
int ArrayLength = 10;

int OddOrEvenSum(int list[],int i,int len)
{
    int sum=0;
    int index;
    for(index=0;index<len;index++)
    {
        if(list[index]%2==i)
            sum+=list[index];
    }
    
    return sum;
}

int OddOrEvenArray(int list[],int i,int len)
{
    int sum=0;
    int index;
    for(index=0;index<len;index++)
    {
        if(list[index]%2==i)
            sum+=list[index];
    }
    
    return sum;
}

void splitOddEven(int list[],int i,int len,int a[])
{
    int index,o=0;
    for(index=0;index<len;index++)
    {
        if(list[index]%2==i)
            a[o++]=list[index];
    }
}

int main()
{
    //計算奇數總和減去偶數總和
    cout<<OddOrEvenSum(oringinal,1,ArrayLength)-OddOrEvenSum(oringinal,0,ArrayLength)<<endl;
    //分割兩陣列
    int oddnum=0,evennum=0;
    for(int index=0;index<ArrayLength;index++)
    {
        if(oringinal[index]%2==1)
            oddnum+=1;
        else
            evennum+=1;
    }
    int oddarray[oddnum];
    splitOddEven(oringinal,1,ArrayLength,oddarray);
    int evenarray[evennum];
    splitOddEven(oringinal,0,ArrayLength,evenarray);
    int i;
    for(i=0;i<oddnum;i++)
        cout<<oddarray[i]<<' ';
    cout<<endl;
    for(i=0;i<evennum;i++)
        cout<<evenarray[i]<<' ';
    cout<<endl;
}