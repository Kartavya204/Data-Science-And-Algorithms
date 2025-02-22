#include<bits/stdc++.h>
using namespace std;
/* Function are set of code which performs something or action for you
Function are used to modular code
Function are used to increase readability
Function are used to use same code multiple times
1.void -> which does not returns anything
2.return ->
3.parameterised ->
4.non-parameterised ->
*/

/*USING VOID  
void printname(){
	cout << "Hey Kartavya";
}
int main(){
	
	printname();


	return 0;
}*/

void printName(string name){
	cout<< "Hey " << name;
}
int main(){
	string name;
	cin >> name;
	printName(name);
	
	string name1;
	cin >> name1;
	printName(name1);
	return 0;
}
