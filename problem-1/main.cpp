#include <iostream>
using namespace std;

int main() {
    
    cout<<"please insert a number: ";

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin>>n;

	for(int i=1; i<=10; i++)
	{
		int cnt = n*i;
		cout<<n<<" x "<<i<<" = "<<cnt<<'\n';
	}
	
}
