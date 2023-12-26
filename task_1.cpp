//       CODSOFT Internship   
//       TASK 01 : NUMBER GUESSING GAME 
//       Submitted By : Puneet K Rai          



// these are the libraries included
#include<iostream>

#include<cstdlib>   
#include<time.h>    
using namespace std;



int main(){
	
	cout<<"\n\t\t\tNUMBER GUESSING GAME "<<endl;
	cout<<"\t\t\t--------------------\n"<<endl;
	srand(time(0));//for different  numbers generation
	
    int random_number= 1 + rand() % 101;// for random number generation
    
	int user_input;
	
	
	do{       //using do while loop once it will run and then until the user enters the correct number
		
		cout<<"\n\nGuess The Number  (1-100)??"<<endl;
		cin>>user_input;
		
		
		if(user_input<random_number){
			
			cout<<"Your guessed number is less than the actual number "<<endl;
			cout<<"TRY AGAIN !!!"<<endl;
			
		}else if(user_input>random_number){
			
			cout<<"Your guessed number is greater than the actual number "<<endl;
			cout<<"TRY AGAIN !!!\n"<<endl;
		}
		else{
			
			cout<<"\nCongratulations !! you guessed the correct Number!!"<<endl;
			cout<<" "<<endl<<random_number<<"  is the actual number "<<endl;
			
		}
		
		
	}while(user_input!=random_number);
	
	
	
	return 0;
}