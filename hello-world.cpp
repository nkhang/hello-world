#include<iostream>
#include<cstdint>
#include<limits.h>
#include<cstring>
#include<cmath>
using namespace std;
//not
class QInt
{
private:
  int64_t Bits[2];
public:
  QInt();
  ~QInt();
};

int main()
{
  int64_t value = 0;
  string a="123456";
  int length= a.length();
  for(int i = 0; i < length; i++)
  {
    value = value + (a[length-i-1]-'0')*(int)pow(10,i);
  }
  cout<<value <<endl;
  return 0;
}
