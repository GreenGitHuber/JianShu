/*这段代码是为了不使用+来实现a+b这样的操作
因为我们知道位运算中异或是不带进位的加法*/

#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    while(b)
    {
        int _a = a^b;
        int _b = (a & b) << 1;//进位/*这里要注意，不要写成a&b <<1 .<<优先级比&高*/
        a = _a;
        b = _b;
    }
    cout<<a;
    return a;
}
