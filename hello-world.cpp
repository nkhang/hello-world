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
  string a = "170141183460469231731687303715884105727";
  cout<<a.length()<<endl;
  return 0;
}
