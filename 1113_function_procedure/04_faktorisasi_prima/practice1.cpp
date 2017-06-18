// #include <bits/stdc++.h>
#include <iostream>
// #include <std>

#define ll long long

using namespace std;

bool isprime(ll z){
	for (ll i = 2; i*i <= z; i++){
		if (z%i == 0){
			return false;
			break;
		}
	}
	return true;
}

int main(){
    ll x, count=0,catet;
    cin>>x;
    ll save=x,d[9596], j=1, dd[1000000];
    //inisiasi dd
    for(ll i=1; i<=9593; i++){
    		dd[i]=0;
    		d[i]=0;
    }
    //tabel bil. prima sebanyak 9593
    for(ll i=2; i<=100003; i++){
        if (isprime(i)){
                d[j]=i;
                j++;
        }
    }
    //algoritma
    for(ll i=1; i<=9590 ; i++){
    	if(isprime(x)){
    		dd[x]++;
    		catet=x;
    		break;
    	}
    	if(x%d[i]==0){
    		dd[d[i]]++;
    		x/=d[i];
    		i--;
    	}
    }

    //output
    if(isprime(save)) cout<<save<<endl;
    else{
	for(ll i=1; i<=9590; i++){
		if(d[i]==catet){
			if(dd[d[i]]!=1){
				cout<<catet<<"^"<<dd[catet]<<endl;
				break;
			}
			else if(dd[d[i]]==1){
				cout<<catet<<endl;
				break;
			}
		}
		else if(dd[d[i]]!=0){
			if(dd[d[i]]==1) cout<<d[i]<<" x ";
			else cout<<d[i]<<"^"<<dd[d[i]]<<" x ";
		}
	}
    }
	return 0;
}