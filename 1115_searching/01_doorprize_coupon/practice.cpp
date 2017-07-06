#include<iostream>
#include<math.h>
using namespace std;

int main(){
	long P, T, X, W = 0, WD = 0, i;

	cin >> T >> X;

	long N[T], D[T];

	for(i = 0; i < T; i++){
		cin >> N[i];
		D[i] = abs(X - N[i]);
	}

	for(i = 0; i < T; i++){
		if(i == 0){
			WD = D[i];
			P = i;
		}else{
			if(WD > D[i]){
				WD = D[i];
				P = i;
			}else if(WD == D[i]){
				if(N[P] > N[i]){
					P = i;
				}
			}
		}
    W = N[P];
	}
  
	cout << W << endl;

	return 0;
}