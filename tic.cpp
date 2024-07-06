// Coded by VimKidCodez
// Git Hub : https://github.com/VimKidCodez/TIC-TAC-TOE
#include <iostream>
#include <string.h>
using namespace std;
int t=1;
int won(string k){
	cout << "Player" << k << " has won the game" << "\n";
	t=0;
	return 0;

}
int generate(string box [3][3]){

	for (int j =0 ; j<3;j++){
		for(int i =0 ; i<3;i++){
			cout << box[j] [i]<<"|" ;
		}
		
		cout << "\n";
		cout << "~~~~~~~";
		cout << "\n";
	}
return 0;}

int main(){
	int choice;
	string box[3] [3] ={ {" "," "," "},
	{" "," "," "}, {" "," "," "} };
	cout << "TIC TAC TOE GAME" << "\n";
	cout << "Enter 1 for play 2 for exit: ";
	cin >> choice;
	if (choice == 2){
		return 0;
	}

	while (t){
	generate(box);
	int p_one_r, p_one_c,p_two_r, p_two_c;
	cout << "Player X Enter row num : ";
	cin >> p_one_r;
	cout << "Player X Enter column num : ";
	cin >> p_one_c;
	cout << "Player O Enter row num : ";
	cin >> p_two_r;
	cout << "Player O Enter column num : ";
	cin >> p_two_c;

	// Inserting values
	box [p_one_r-1] [p_one_c-1] = "X";
	box [p_two_r-1] [p_two_c-1] = "O";

	for(int k =0;k<=2;k++){
		// Check Downwards
		if (box[k][k]==box[k+1][k] && box[k+1][k]==box[k+2][k]) {
			won(box[k][k]);
			break;
		}
		// Check Sidewards
		if (box[k][k]==box[k][k+1] && box[k][k+1]==box[k][k+2]){
			won(box[k][k]);
			break;
		}}
		int k=0;
		// Check slanting (\)
		if (box[k][k]==box[k+1][k+1] && box[k+1][k+1]==box[k+2][k+2]){
			won(box[k][k]);
			break;
		}
		// Check back Slanting (\)
		if (box[k][k+2]==box[k+1][k+1] && box[k+1][k+1]==box[k+2][k]){
			won(box[k][k+2]);
			break;
		}
		return 0;
}
}
