
//descreption:this is the game number scrabble it has 2 players each player choose a number from 1 to 9 and the first player will have 3 numbers that up to 15 will win the game and the game end
//Auther:sohaila walid mohammed ,202310779,still no section
//this the version number 2 from the game
//DATE:3/1/2024





#include<bits/stdc++.h>
using namespace std;
bool check(vector<int> vec){//function check the 2 lists
    for(int i=0;i<vec.size();i++){
        for(int l=i+1;l<vec.size();l++){
            for(int k=l+1;k<vec.size();k++){
                if(vec[i]+vec[l]+vec[k]==15){
                    return true ;
                }
            }
        }
    }
    return false; // This should be outside the for loops
}
int main() {
    int count3=0;//set count3 to 0;
    int count4=0;//set count4 to 0;
    cout<<"Welcome to Number scrabble"<<endl;//diplay the welcome massege
    vector<int>arr{1,2,3,4,5,6,7,8,9};
    vector<int>arr2;
    vector<int>arr3;
    int count=1;
    int index=0;
    for(int i=0;i<9;i++) {
        if (i % 2 == 0) {
            cout << "Player 1: Please take a number from  1 to 9 :";
            int number;
            cin >> number;//take the number from the user
            while (std::find(arr.begin(), arr.end(), number) == arr.end()) { //check the validty of this number

                cout << "invalid input, Please select a non chosen number :";

                cin >> number;

            }


            arr.erase(std::remove(arr.begin(), arr.end(), number), arr.end());//remove the number from the main list
            arr2.push_back(number);// add this number to the list of the player
            cout << "[";
            for (int i = 0; i < arr.size(); i++) {
                if (i != arr.size() - 1) {
                    cout << arr[i] << "," << " ";
                } else {
                    cout << arr[i];
                }
            }
            cout << "]" << endl;
            //print the rest of the main list
        if (arr2.size() >= 3 && check(arr2)) { //check if the winner is player 1
            cout << "The winner is player 1";
            count3 = 1;
            break; // Break out of the main loop
        }
    }
        else{
            cout << "Player 2: Please take a number from  1 to 9 :";//take the number from the user
            int number;
            cin >> number;
            while (std::find(arr.begin(), arr.end(), number) == arr.end()) {//check the validty of this number

                cout << "invalid input, Please select a non chosen number :" ;

                cin >> number;

            }


            arr.erase(std::remove(arr.begin(), arr.end(), number), arr.end());//remove the number from the main list
            arr3.push_back(number);// add this number to the list of the player
            cout << "[";
            for (int i = 0; i < arr.size(); i++) {
                if (i != arr.size() - 1) {
                    cout << arr[i] << "," << " ";
                } else {
                    cout << arr[i];
                }
            }
            cout << "]" << endl;
            //print the rest of the main list
            if (arr3.size() >= 3 && check(arr3)) {//check if the winner is player 1
                cout << "The winner is player 1";
                count4 = 1;
                break;
            }
        }
        }

    if(count3==0&&count4==0){//check the case of draw(non of the 2 players win)
        cout<<"draw";
    }

    }

