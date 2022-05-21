#include <iostream>
#include <algorithm>
using namespace std;
int a[]={77,5,5,22,13,55,97,4,796,1,0,9};
int alen = 12;
int b[]={0,1,2,3,4,5,6,7,8,9};
int blen = 10;
int c[30];
int d[30];
int e[30];

void intersection(int *m,int *n,int mlen,int nlen)
{
    int i,o,p,index=0;
    bool repeat;
    for(i=0;i<mlen;i++)
    {
        repeat = false;
        for(o=0;o<nlen;o++)
        {
            if(m[i]==n[o])
            {
                for(p=0;p<index;p++)
                    if(c[p]==m[i])
                        repeat=true;
                if(!repeat)
                    c[index++]=m[i];
            }
            if(repeat)
                break;
        }
    }
}

void complement(int *m,int *n,int mlen,int nlen)
{
    int i,o,p,index=0;
    bool repeat1,repeat2;
    for(i=0;i<mlen;i++)
    {
        repeat1 = false;
        for(o=0;o<nlen;o++)
        {
            if(m[i]==n[o])
                repeat1=true;
        }
        if(!repeat1)
        {
            repeat2=false;
            for(p=0;p<index;p++)
                if(c[p]==m[i])
                    repeat2=true;
            if(!repeat2)
                d[index++]=m[i];
        }
    }
}

void unionset(int *m,int *n,int mlen,int nlen)
{
    int i,o,p,index=0;
    bool repeat;
    for(i=0;i<mlen;i++)
    {
        repeat = false;
        for(p=0;p<index;p++)
            if(e[p]==m[i])
                    repeat=true;
        if(!repeat)
            e[index++]=m[i];
    }
    for(o=0;o<nlen;o++)
    {
        repeat = false;
        for(p=0;p<index;p++)
            if(e[p]==n[o])
                    repeat=true;
        if(!repeat)
            e[index++]=n[o];
    }
}

void PrintArray(int *arr,int size){
    for (int i = 0; i < size; i++) {
        if(arr[i]!=-1)
            cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    fill_n(c,30,-1);
    fill_n(d,30,-1);
    fill_n(e,30,-1);
    intersection(a,b,alen,blen);
    PrintArray(c,30);
    complement(a,b,alen,blen);
    PrintArray(d,30);
    unionset(a,b,alen,blen);
    PrintArray(e,30);
}