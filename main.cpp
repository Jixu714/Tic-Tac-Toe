#include<iostream>
#include <string>
using namespace std;

void DisplayTable(char[3][3]);
void TableReference();
void Initialization(char[][3]);
void Turn_Player1(string,char[][3],int);
void Turn_Player2(string,char[][3],int);
bool Fin(string,string,char[][3]);
void Asking_Names(string&,string&);



int main(){

  const int FILAS = 3;
  const int COLUMNAS = 3;
  char table[FILAS][COLUMNAS];
  string Player1;
  string Player2;
  int selection_P1;
  int selection_P2;
  int counter = 1;


  Asking_Names(Player1,Player2);

  cout << Player1 << " " << Player2 << endl;
  Initialization(table);


do{
  Turn_Player1(Player1,table,selection_P1);
  counter++;
  if (Fin(Player1,Player2,table) == false){
  Turn_Player2(Player2,table,selection_P2);
  }
  counter++;
}while((Fin(Player1,Player2,table) == false) && counter < 9);

if ( counter == 9){
  cout << "It's a draw! .\n";
}

  return 0;
}

void Initialization(char p_table[][3]){
  for ( int i = 0 ; i < 3 ; i++){
    for ( int j = 0 ; j < 3 ; j++){
        p_table[i][j] = '*';
    }
  }
}

void DisplayTable(char p_table[3][3]){
  for ( int i = 0 ; i < 3 ; i++){
    for ( int j = 0 ; j < 3 ; j++){
        cout << "[" <<  p_table[i][j] << "] " <<  " ";
    }
    cout << endl;
  }
}

void Asking_Names(string& p_name1,string& p_name2){
  cout << "Enter the name of the first player: ";
  cin >> p_name1;
  cout << "Enter the name of the second player: ";
  cin >> p_name2;
}

void Turn_Player1(string name,char p_table[][3],int selection){
  bool samePosition = false;
  cout << name << "'s turn\n";
   do{
    cout << "choose an option:\n";
    DisplayTable(p_table);
    cin >> selection;
    switch (selection){
      case 1:
      if ( p_table[2][0] == '*'){
        p_table[2][0] = 'X';
      }else{
        cout << "you cannot choose that position. Please try again.\n";
        samePosition = true;
      }
      break;
      case 2:
          if ( p_table[2][1] == '*'){
        p_table[2][1] = 'X';
      }else{
        cout << "you cannot choose that position. Please try again.\n";
        samePosition = true;
      }
      break;
      case 3:
          if ( p_table[2][2] == '*'){
        p_table[2][2] = 'X';
      }else{
        cout << "you cannot choose that position. Please try again.\n";
        samePosition = true;
      }
      break;
      case 4:
          if ( p_table[1][0] == '*'){
        p_table[1][0] = 'X';
      }else{
        cout << "you cannot choose that position. Please try again.\n";
        samePosition = true;
      }
      break;
      case 5:
          if ( p_table[1][1] == '*'){
        p_table[1][1] = 'X';
      }else{
        cout << "you cannot choose that position. Please try again.\n";
        samePosition = true;
      }
      break;
      case 6:
          if ( p_table[1][2] == '*'){
        p_table[1][2] = 'X';
      }else{
        cout << "you cannot choose that position. Please try again.\n";
        samePosition = true;
      }
      break;
      case 7:
          if ( p_table[0][0] == '*'){
        p_table[0][0] = 'X';
      }else{
        cout << "you cannot choose that position. Please try again.\n";
        samePosition = true;
      }
      break;
      case 8:
          if ( p_table[0][1] == '*'){
        p_table[0][1] = 'X';
      }else{
        cout << "you cannot choose that position. Please try again.\n";
        samePosition = true;
      }
      break;
      case 9:
          if ( p_table[0][2] == '*'){
        p_table[0][2] = 'X';
      }else{
        cout << "you cannot choose that position. Please try again.\n";
        samePosition = true;
      }
      break;
      default:
        cout << "Your input is invalid, use this table as a reference and try again. \n";
        TableReference();
        cout << "\n\n";
        DisplayTable(p_table);
    }
   }while((selection < 1 || selection > 9) || samePosition == true);
}

void Turn_Player2(string name,char p_table[][3],int selection){
  bool samePosition = false;
  cout << name << "'s turn\n";
   do{
    cout << "choose an option: \n";
    DisplayTable(p_table);
    cin >> selection;
    switch (selection){
      case 1:
      if ( p_table[2][0] == '*'){
        p_table[2][0] = '0';
      }else{
        cout << "you cannot choose that position. Please try again.\n";
        samePosition = true;
      }
      break;
      case 2:
          if ( p_table[2][1] == '*'){
        p_table[2][1] = '0';
      }else{
        cout << "you cannot choose that position. Please try again.\n";
        samePosition = true;
      }
      break;
      case 3:
          if ( p_table[2][2] == '*'){
        p_table[2][2] = '0';
      }else{
        cout << "you cannot choose that position. Please try again.\n";
        samePosition = true;
      }
      break;
      case 4:
          if ( p_table[1][0] == '*'){
        p_table[1][0] = '0';
      }else{
        cout << "you cannot choose that position. Please try again.\n";
        samePosition = true;
      }
      break;
      case 5:
          if ( p_table[1][1] == '*'){
        p_table[1][1] = '0';
      }else{
        cout << "you cannot choose that position. Please try again.\n";
        samePosition = true;
      }
      break;
      case 6:
          if ( p_table[1][2] == '*'){
        p_table[1][2] = '0';
      }else{
        cout << "you cannot choose that position. Please try again.\n";
        samePosition = true;
      }
      break;
      case 7:
          if ( p_table[0][0] == '*'){
        p_table[0][0] = '0';
      }else{
        cout << "you cannot choose that position. Please try again.\n";
        samePosition = true;
      }
      break;
      case 8:
          if ( p_table[0][1] == '*'){
        p_table[0][1] = '0';
      }else{
        cout << "you cannot choose that position. Please try again.\n";
        samePosition = true;
      }
      break;
      case 9:
          if ( p_table[0][2] == '*'){
        p_table[0][2] = '0';
      }else{
        cout << "you cannot choose that position. Please try again.\n";
        samePosition = true;
      }
      break;
      default:
        cout << "Your input is invalid, use this table as a reference and try again. \n";
        TableReference();
        cout << "\n\n";
        DisplayTable(p_table);
    }
   }while((selection < 1 || selection > 9) || samePosition == true);
}

void TableReference(){
  int number = 7;
  for ( int i = 0 ;  i < 3 ; i++){
    for ( int j = 0 ; j < 3 ; j++){
      cout << "[" << number << "]" << " ";
      number++;
    }
    cout << endl;
    number -= 6;
  }
}

bool Fin(string player_X,string player_0,char p_table[][3]){
  //Validando todas las FILAS para 'X'

  bool result = false;
  
  if ( p_table[0][0] == 'X' && p_table[0][1] == 'X' && p_table[0][2] == 'X' ){
    DisplayTable(p_table);
    cout << player_X << " ha ganado la partida.\n";
    result = true;
  }
  else if (p_table[1][0] == 'X' && p_table[1][1] == 'X' && p_table[1][2] == 'X' ){
    DisplayTable(p_table);
    cout << player_X << " ha ganado la partida.\n";
    result = true;
  }
  else if (p_table[2][0] == 'X' && p_table[2][1] == 'X' && p_table[2][2] == 'X'){
    DisplayTable(p_table);
    cout << player_X << " ha ganado la partida.\n";
    result = true;
}
//Validando todas las filas para '0'
else   if ( p_table[0][0] == '0' && p_table[0][1] == '0' && p_table[0][2] == '0' ){
     DisplayTable(p_table);
    cout << player_0 << " ha ganado la partida.\n";
    result = true;
  }
  else if (p_table[1][0] == '0' && p_table[1][1] == '0' && p_table[1][2] == '0' ){
    DisplayTable(p_table);
    cout << player_0 << " ha ganado la partida.\n";
    result = true;
  }
  else if (p_table[2][0] == '0' && p_table[2][1] == '0' && p_table[2][2] == '0'){
    DisplayTable(p_table);
    cout << player_0 << " ha ganado la partida.\n";
    result = true;
}
//Validando todas las columnas para 'X'
  else  if ( p_table[0][0] == 'X' && p_table[1][0] == 'X' && p_table[2][0] == 'X' ){
    DisplayTable(p_table);
    cout << player_X << " ha ganado la partida.\n";
    result = true;
  }
  else if (p_table[0][1] == 'X' && p_table[1][1] == 'X' && p_table[2][1] == 'X' ){
    DisplayTable(p_table);
    cout << player_X << " ha ganado la partida.\n";
    result = true;
  }
  else if (p_table[0][2] == 'X' && p_table[1][2] == 'X' && p_table[2][2] == 'X'){
    DisplayTable(p_table);
    cout << player_X << " ha ganado la partida.\n";
    result = true;
}
//Validando todas las columnas para '0'
  else if ( p_table[0][0] == '0' && p_table[1][0] == '0' && p_table[2][0] == '0' ){
    DisplayTable(p_table);
    cout << player_0 << " ha ganado la partida.\n";
    result = true;
  }
  else if (p_table[0][1] == '0' && p_table[1][1] == '0' && p_table[2][1] == '0' ){
    DisplayTable(p_table);
    cout << player_0 << " ha ganado la partida.\n";
    result = true;
  }
  else if (p_table[0][2] == '0' && p_table[1][2] == '0' && p_table[2][2] == '0'){
    DisplayTable(p_table);
    cout << player_0 << " ha ganado la partida.\n";
    result = true;
  }
  //Validando cruzado para 'X'
  else if ( p_table[0][0] == 'X' && p_table[1][1] == 'X' && p_table[2][2] == 'X' ){
    DisplayTable(p_table);
    cout << player_X << " ha ganado la partida.\n";
    result = true;
  }
  else if (p_table[2][0] == 'X' && p_table[1][1] == 'X' && p_table[0][2] == 'X' ){
    DisplayTable(p_table);
    cout << player_X << " ha ganado la partida.\n";
    result = true;
  }
  //Validando cruzado para '0'
  else if ( p_table[0][0] == '0' && p_table[1][1] == '0' && p_table[2][2] == '0' ){
    DisplayTable(p_table);
    cout << player_0 << " ha ganado la partida.\n";
    result = true;
  }
  else if (p_table[2][0] == '0' && p_table[1][1] == '0' && p_table[0][2] == '0' ){
    DisplayTable(p_table);
    cout << player_0 << " ha ganado la partida.\n";
    result = true;
  }

  return result;

}