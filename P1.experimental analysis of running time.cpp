#include<iostream>
#include<algorithm>
#include<ctime>
using namespace std;

//bubblesort
void bubblesort(int a[], int n){
	for(int itr=1;itr<n;itr++){
		for(int j=0;j<(n-1);j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
	
	cout<<"\nsorted array ";
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}

int main(){
	int n, key;
	cout<<"enter n";cin>>n;
	
	int a[1000000];
	//time_t start=clock();
	
	for(int i=0;i<n;i++){
		a[i]=n-i;
	}
	
	cout<<"unsorted array ";
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	time_t start=clock();
	bubblesort(a,n);
	time_t end=clock();
	cout<<"\nbubble sort "<<end-start<<endl;
	
	
	for(int i=0;i<n;i++){
		a[i]=n-i;
	}
	cout<<"unsorted array ";
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
    start=clock();
	sort(a,a+n);
	end=clock();
	cout<<"\nsorted array ";
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<"\nmerge sort "<<end-start<<endl;
	
	return 0;
}
