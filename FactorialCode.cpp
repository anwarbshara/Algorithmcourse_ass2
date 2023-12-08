#include <iostream>
#include <time.h>
using namespace std;
int iterativeFact( long long n) {
long long f=1;
for (int i=1;i<=n;i++)
f*=i;
return f;  }
int recursiveFact ( long long n)
{
if (n<=1)
return 1;
return n*recursiveFact(n-1);
}
int main () {
clock_t startTime ;
long long n;
cout<<"Please enter the value of n : ";
cin>>n;
startTime = clock();
long long result = iterativeFact(n);
// long long result = recursiveFact(n);
double time_execution=double (startTime) /double(CLOCKS_PER_SEC);
cout<<"The factorial of n "<<"("<<n<<")! = "<<result<<endl;
cout << "Execution Time in Seconds: " << time_execution <<"seconds"<<endl;
return 0;
}

