#include<iostream>
#include<string>
#include<fstream>
using namespace std;
void newlogin(){
    int check=0;
	string username;
	string password_user;
	string line_username;
	string line_password;
	bool loop_check_username= true;
	bool loop_check_password=true;
	
	
		
	cout<<"Would you like to login or signup? Press '1' for signup, Press '2' for login"<<endl;
	cin>>check;
	cout<<endl;
	
	//Creating file of login
	ofstream my_file;
	my_file.open("Login.txt",  ios::app);
	my_file.close();
	
	//Creating file of password
	ofstream myfile_password;
	myfile_password.open("Password.txt", ios::app);
	myfile_password.close();
    //=====================================================================================
    cout<<"Please enter a username"<<endl;
	cin>>username;
	cout<<endl;
	
	ifstream login;
	login.open("Login.txt");
	

	
	while(!login.eof()){
		
		getline(login, line_username);
		
		if (line_username == username){
			
			cout<<"You have entered a duplicate username"<<endl<<endl;
			loop_check_username=false;
			//goto loop_username_signup;
		}
			
		}
		
		login.close();

    //==================================================================================
     cout<<"Please enter a password"<<endl;
   cin>>password_user;
   cout<<endl;
   
   ifstream password;
   password.open("Password.txt", ios::app);
   
   while(!password.eof()){
   	
   	getline(password, line_password);
   	
   	if (line_password== password_user){
   		
   		cout<<"Your password is not unique"<<endl;
   		loop_check_password= false;
   		//goto loop_password_signup;
	   }
	   
   }
   password.close();
   
   if (loop_check_password== true){
   	
   	
		ofstream myfile_password;
	    myfile_password.open("Password.txt", ios::app);
	    myfile_password<<endl<<password_user;
   }
   

}


	void login(){
	int check=0;
	string username;
	string password_user;
	string line_username;
	string line_password;
	bool loop_check_username= true;
	bool loop_check_password=true;
	
	
		
	// cout<<"Would you like to login or signup? Press '1' for signup, Press '2' for login"<<endl;
	// cin>>check;
	// cout<<endl;
	
	// //Creating file of login
	// ofstream my_file;
	// my_file.open("Login.txt",  ios::app);
	// my_file.close();
	
	// //Creating file of password
	// ofstream myfile_password;
	// myfile_password.open("Password.txt", ios::app);
	// myfile_password.close();
	
	
	//If you want to signup, this code block will run
	
	if (check== 1){
	
	//This is the code for taking username and checking if it is duplicate
	
	//loop_username_signup:
		
	// cout<<"Please enter a username"<<endl;
	// cin>>username;
	// cout<<endl;
	
	// ifstream login;
	// login.open("Login.txt");
	

	
	// while(!login.eof()){
		
	// 	getline(login, line_username);
		
	// 	if (line_username == username){
			
	// 		cout<<"You have entered a duplicate username"<<endl<<endl;
	// 		loop_check_username=false;
	// 		goto loop_username_signup;
	// 	}
			
	// 	}
		
	// 	login.close();
		
	if (loop_check_username==true){
	
			
		ofstream myfile_login;
	    myfile_login.open("Login.txt", ios::app);
	    myfile_login<<endl<<username;
}


//Now adding code for entering and checking password


//    loop_password_signup:

//    cout<<"Please enter a password"<<endl;
//    cin>>password_user;
//    cout<<endl;
   
//    ifstream password;
//    password.open("Password.txt", ios::app);
   
//    while(!password.eof()){
   	
//    	getline(password, line_password);
   	
//    	if (line_password== password_user){
   		
//    		cout<<"Your password is not unique"<<endl;
//    		loop_check_password= false;
//    		goto loop_password_signup;
// 	   }
	   
//    }
//    password.close();
   
   if (loop_check_password== true){
   	
   	
		ofstream myfile_password;
	    myfile_password.open("Password.txt", ios::app);
	    myfile_password<<endl<<password_user;
   }
   

}

// If you want to access login, this code block will run

else if (check==2){
	
	
	for (int counter=3; counter>0; counter--){
	
	cout<<"Please enter your username"<<endl;
	cin>>username;
	cout<<endl;
	
	
	ifstream  login_open;
	login_open.open("Login.txt");
	while (!login_open.eof()){
	
	getline(login_open, line_username);
	
	if(line_username==username){
		
	
		loop_check_username=false;
		break;
		
	}
	
}
    if (loop_check_username==false){
    	
    	login_open.close();
    	
    	login_open.open("Password.txt");
    	
    	cout<<"Please enter your password"<<endl;
    	cin>>password_user;
    	cout<<endl;
    	
    	while(!login_open.eof()){
    		
    		getline(login_open, line_password);
    		
    		if(password_user==line_password){
    			
    			loop_check_password=false;
			}
		}
		
		if (loop_check_password==false){
			
			cout<<"Welcome to the terminal";
			break;
		}
		
		else{
			
			cout<<"Your password is incorrect. Please try again."<<endl;
			cout<<"You have "<<counter<<" tries remaining"<<endl<<endl;
		}
    	
	}
	
	else{
		
		cout<<"Your username is incorrect. Please try again"<<endl;
		cout<<"You have "<<counter<<" tries remaining"<<endl<<endl;
	}
}
}
	

}
int main(){
    newlogin();
    cout<<"============================================;";
    login();
}
	

