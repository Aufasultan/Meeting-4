#include <iostream>
using namespace std;

int main() {
    
    cout<<"please insert a number: ";
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin>>n;

	int sum=0;

	for(int i=1; i<=n; i++)
	{
		sum+=i;
	}

	cout<<"Sum = "<<sum<<endl;
	
}
