#include<iostream>
using namespace std;
int main(){
	int number;
	cout<<"Enter number = ";
	cin>>number;
	int arr[100][100]={{}};
	for(int i=0;i<number;i++){
		for(int j=i;j<(number*2)-1-i;j++){
			arr[i][j]=number-i;
		}
		for(int j=i;j<(number*2)-1-i;j++){
			arr[(number*2)-2-i][j]=number-i;
		}
		for(int j=i;j<(number*2)-1-i;j++){
			arr[j][i]=number-i;
		}
		for(int j=(number*2)-2-i;j>i;j--){
			arr[j][(number*2)-2-i]=number-i;
		}				
	}
	for(int i=0;i<(number*2)-1;i++){
			for(int j=0;j<(number*2)-1;j++){
			cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl<<endl;
	
	
	
}


