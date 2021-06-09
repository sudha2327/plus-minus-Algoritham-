#include<iostream>
#include <iomanip>
#include<cmath>
#include<vector>
using namespace std;
int main(){
	int plus=0,minus=0,zero=0;
	int n,temp;
	vector<int> a;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>i;
		if(i>0){
			plus++;
		}else if(i<0){
			minus++;
		}else{
			zero++;
		}
		temp=i;
		a.push_back(temp);
	}
//	cout.precision(6);
    
	cout<<std::fixed<<(float)plus/n<<endl;
	cout<<std::fixed<<(float)minus/n<<endl;
	cout<<std::fixed<<(float)zero/n<<endl;
	
	return 0;
}
