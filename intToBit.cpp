#include<iostream>
// #include<>
using namespace std;
/*这段代码是将整数转化为二进制*/
int main()
{
    int bit[32]={0};
    int n = 2;
    int tem =n;
    for(int i = 31;i>=0;--i)
    {
        
        if(tem)
        {
            bit[i]=tem&1;
            tem=tem>>1;  
        }
        // if(n)
        // {
        //      bit[i]=((n>>i)&1);
        //      n=n>>i;//注意这里就改变了n的值了
        // }   
       
    }
    for(int i = 0;i<32;i++)
    {
        
        cout<<bit[i];
       
    }
    cout<<endl;

    int result;
    for(int i = 31;i>=0;i--)
    {
        if(bit[i])
            result+=(1<<(31-i));
    }
    cout<<result<<endl;
    return 0;
}