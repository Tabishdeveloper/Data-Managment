#include <iostream>
#include<fstream>
#include<string>
#include <conio.h> // For _getch() function
using namespace std;

void printOptions(int selectedOption) {
    system("cls"); // Clear the console (for Windows)

    cout << "Select One of them :\n";
    cout << (selectedOption == 1 ? "> " : "  ") << "1. Gross Domestic Product [GDP]\n";
    cout << (selectedOption == 2 ? "> " : "  ") << "2. Population\n";
    cout << (selectedOption == 3 ? "> " : "  ") << "3. Industry\n";
    // cout << (selectedOption == 4 ? "> " : "  ") << "4. Industry\n";
}
struct personal_info
{
    string name;
    string contact;
    string cnic;
    string guardian;
    string g_contact;
    string address;
    string bloodgroup;
    string gender;
};
//================================================================================================
// FUNCTION FOR FILE READING

void fileHandling(string fileName){
    string data;

    ifstream file;
    file.open(fileName.c_str(), ios::in);

    if (!file.is_open()) {
        cout << "File open Error: " << fileName << endl;
    } else {
        while (!file.eof()) {
            data = file.get();
            cout << data;
        }
        file.close();  // Close the file after reading
    }
}
//============================================================================================
// Funtion for validation
void validation(){
     int first,last;

    int sum_11=0;

int long a_11[16]; // 4  9  0  4  7  1  0  0  1  5  8  6  2  3  1  4
int long  mul_11[16];
int long a_23[16]={2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1};
card_valid:
    cout<<endl<<"PLease Enter your Master-card / Visa-card Number : ";
for(int i=0;i<16;i++){
    cin>>a_11[i];
}


for(int i=0;i<16;i++){
    mul_11[i]=a_11[i]*a_23[i];
    if(mul_11[i]>9){
        first = mul_11[i]/10;
        last = mul_11[i]%10;
        sum_11= sum_11 + first + last ;

    }
    else{
        sum_11+= mul_11[i];
       
}
}

if(sum_11 % 10 == 0){
    cout<<"\nConguratulation Your Payment Successfully Transferred\n";
}
else{
    cout<<"Sorry Sir,Your Card is not Working\n";
    goto card_valid;
    


   }   }

// ===================================================================================================
//  Function for Industry

void industry(){
// 4  9  0  4  7  1  0  0  1  5  8  6  2  3  1  4

       
    int industry_selection,service_selection,car_selection,check,bill,payment; 
    string customer_service,pcu,toyota;
    personal_info customer_contact,customer_CNIC,customer_name,guardian_name,guardian_contact,customer_adress,customer_bloodgroup,customer_gender;
    cout<<"\n1. Automobile Production Unit \t\t 2. Textile Production Unit\n";
    cout<<"3. Sugar Production Unit    \t\t 4. Ammunition Production Unit\n";
    cout<<"---------------------------------\n";
    cout<<"Please Select your Industry : "; 
    cin>>industry_selection;
    cin.ignore();
    switch(industry_selection){
        case 1:
        cout<<"================================================\n";
        cout<<"You Selected :- Automobile Production Units\n\n";
       // cout<<"1. Toyota\n";
        // cout<<"2. Honda\n";
        // cout<<"3. BMW\n";
        // cout<<"4. Mercedes\n";
        cout<<"Enter Company : ";
        getline(cin,toyota);
        
        if(toyota == "Toyota"|| toyota == "toyota"){
            cout<<"1. Customer-Service\n";
            cout<<"2. Production Control Unit [PCU]\n";
            cout<<"Press Number to select service : ";
            cin>>service_selection;
            cin.ignore();
            switch(service_selection){
                case 1:
                cout<<"Dear customer welcome to the Customer-Service\n";
                cout<<"How can I help you...?\n";
                cout<<"==============================================\n";
                getline(cin,customer_service);
                if(customer_service=="I want to buy a car"||customer_service=="i want to buy a car"){
                    cout<<endl;
                    cout<<"Some cars model are here.........\n";
                    cars_repeat:
                    cout<<"------------------------------------------\n";
                    cout<<"1.Toyota Corolla XLi       \n";
                    cout<<"2.Toyota Fortuner Legender \n";
                    cout<<"3.Toyota Supra Mk-5        \n";
                    cout<<"4.Toyota Landcrusier ZX    \n";
                    cout<<"5.Toyota Crown             \n";
                    cout<<"6.Toyota Cross(Hybrid)     \n\n";
                    cout<<"Please select your car According to Number : ";
                    cin>>car_selection;
                    cin.ignore();
                    if(car_selection==1){
                        cout<<"=====================================================\n\n";
                        cout<<"Detail about Toyota Corolla XLi : \n";
                        cout<<"Model         : 2013\n";
                        cout<<"Make          : Toyota\n";
                        cout<<"Varrient      : Xli-Auto Transmission\n";
                        cout<<"Colour        : Black\n";
                        cout<<"Engine        : 1300-CC\n";
                        cout<<"Average/Litre : 11-km/L\n";
                        cout<<"Tyre-Size     : 215/45ZR17\n";
                        

                    }
                    else if(car_selection==2){
                        cout<<"=====================================================\n\n";
                        cout<<"Detail about Toyota Fortuner Legender : \n";
                        cout<<"Model         : 2023\n";
                        cout<<"Make          : Toyota\n";
                        cout<<"Varrient      : Fortuner legender-Auto Transmission\n";
                        cout<<"Colour        : Glossy-Black\n";
                        cout<<"Engine        : 2.8L, 1GD-FTV (High)-/-500 / 1,600-2,800 (Nm/rpm)\n";
                        cout<<"Average/Litre : 11-km/L\n";
                        cout<<"Tyre-Size     : 265 / 65 R17 Front Tyres & 265 / 65 R17 Rear Tyres\n";
                        

                    }
                    else if(car_selection==3){
                        cout<<"=====================================================\n\n";
                        cout<<"Detail about Toyota Supra MK-5  : \n";
                        cout<<"Model         : 2023\n";
                        cout<<"Make          : Toyota\n";
                        cout<<"Varrient      : Toyota Supra MK-5-Auto Transmission\n";
                        cout<<"Colour        : Cherry-Red\n";
                        cout<<"Engine        : 2.0-Liter Turbocharged Inline-Four-/-500 / 1,600-2,800 (Nm/rpm)\n";
                        cout<<"Average/Litre : 7-km/L\n";
                        cout<<"Tyre-Size     : 225/50R17 98H XL\n";
                        

                    }
                    else if(car_selection==4){
                        cout<<"=====================================================\n\n";
                        cout<<"Detail about Toyota Landcrusier ZX  : \n";
                        cout<<"Model         : 2018\n";
                        cout<<"Make          : Toyota\n";
                        cout<<"Varrient      : Toyota Landcrusier ZX-Auto Transmission\n";
                        cout<<"Colour        : Pearl-White\n";
                        cout<<"Engine        :  3.3-liter F33A-FTV twin-turbo V6 diesel\n";
                        cout<<"Average/Litre : 7-km/L\n";
                        cout<<"Tyre-Size     : 265/55R20\n";
                        

                    }
                    else if(car_selection==5){
                        cout<<"=====================================================\n\n";
                        cout<<"Detail about Toyota Crown  : \n";
                        cout<<"Model         : 2023\n";
                        cout<<"Make          : Toyota\n";
                        cout<<"Varrient      : Toyota Crown-Auto Transmission\n";
                        cout<<"Colour        : Pearl-White\n";
                        cout<<"Engine        : 2.4L turbocharged hybrid engine\n";
                        cout<<"Average/Litre : 23-km/L\n";
                        cout<<"Tyre-Size     : 225/45R21 95W\n";
                        

                    }
                    else if(car_selection==6){
                        cout<<"=====================================================\n\n";
                        cout<<"Detail about Toyota Cross  : \n";
                        cout<<"Model         : 2023\n";
                        cout<<"Make          : Toyota\n";
                        cout<<"Varrient      : Toyota Cross-Auto Transmission\n";
                        cout<<"Colour        : BLue\n";
                        cout<<"Engine        : 2.4L turbocharged hybrid engine\n";
                        cout<<"Average/Litre : 23-km/L\n";
                        cout<<"Tyre-Size     : 225/45R21 95W\n";
                        

                    }
                    else{
                        cout<<"Invalid Entry\n";
                        goto cars_repeat;
                    }
                    

                     
                    
                }
                else{
                    cout<<"=============================================\n";
                    cout<<"Please Enter Correct Number\n";
                    cout<<"=============================================\n\n";
                }
                cout<<endl;
                cout<<"========================================================\n";

                cout<<"Dear customer,Please fill some documentation\n\n";
                cout<<"Customer Name           : ";
                getline(cin,customer_name.name);
                cout<<"Customer Contact-Number : ";
                getline(cin,customer_contact.contact);
                cout<<"Customer CNIC           : ";
                getline(cin,customer_CNIC.cnic);
                cout<<"Customer Blood-Group    : ";
                getline(cin,customer_bloodgroup.bloodgroup);
                cout<<"Customer Adress         : ";
                getline(cin,customer_adress.address);
                cout<<"Customer Gender         : ";
                getline(cin,customer_gender.gender);
                cout<<"Guardian Name           : ";
                getline(cin,guardian_name.guardian);
                cout<<"Guardian Contact Number : ";
                getline(cin,guardian_contact.g_contact);
                cout<<"==================================================================\n";
                cout<<"Press 1 to View your personal Details : \n";
                cout<<"Press 0 to continue Booking Process : \n";
                cin>>check;
                if(check==1){
                cout<<"================================================================\n";
                cout<<"Customer Name          : ";
                cout<<customer_name.name<<endl;
                cout<<"Contact-Number         : ";
                cout<<customer_contact.contact<<endl;
                cout<<"CNIC                   : ";
                cout<<customer_CNIC.cnic<<endl;
                cout<<"Blood-Group            : ";
                cout<<customer_bloodgroup.bloodgroup<<endl;
                cout<<"Adress                 : ";
                cout<<customer_adress.address<<endl;
                cout<<"Gender                : ";
                cout<<customer_gender.gender<<endl;
                cout<<"Guardian Name          : ";
                cout<<guardian_name.guardian<<endl;
                cout<<"Guardian Contact Number: ";
                cout<<guardian_contact.g_contact<<endl;
                cout<<"========================================================================\n";

                }
                else if(check ==0){
                    cout<<"================================================\n";
                    cout<<"              Your Bill Calculation             \n";
                    cout<<"================================================\n";
                    if(car_selection==1){
                        cout<<" Toyota Corolla Xli \t 2013\n";
                        cout<<"Total Payment in Pkr = Rs:3000000\n";
                        cout<<"                OR                \n";
                        cout<<"Total Payment in USD = 10676.93 Usd\n";
                        cout<<"=================================================\n";
                        cout<<"Press 1 to continue the Booking Process : ";
                        cin>>bill;
                        if(bill==1){
                            cout<<"==============================================\n";
                            cout<<"            PAYMENT METHOD                    \n";
                            cout<<"==============================================\n";
                            cout<<"1. Bank transfer\n";
                            cout<<"2. Cash Payment\n";
                            cout<<"================================================\n";
                            cout<<"Please Select Your Payment Method : ";
                            cin>>payment;
                            
                            if(payment==1){                                
validation();

                            }

                            else if(payment==2){
                                cout<<"\nConguratulation Your Payment Successfully Recieved\n";
                            }
                        }
                    }
                    else if(car_selection==2){
                        cout<<" Toyota Fortuner Legender \t 2018\n";
                        cout<<"Total Payment in Pkr = Rs:25000000\n";
                        cout<<"                OR                \n";
                        cout<<"Total Payment in USD = 88974.38 Usd\n";
                        cout<<"=================================================\n";
                        cout<<"Press 1 to continue the Booking Process : ";
                        cin>>bill;
                        if(bill==1){
                            cout<<"==============================================\n";
                            cout<<"            PAYMENT METHOD                    \n";
                            cout<<"==============================================\n";
                            cout<<"1. Bank transfer\n";
                            cout<<"2. Cash Payment\n";
                            cout<<"================================================\n";
                            cout<<"Please Select Your Payment Method : ";
                            cin>>payment;
                           
                            if(payment==1){                                
validation();

                            }
                            else if(payment==2){
                                cout<<"\nConguratulation Your Payment Successfully Recieved\n";
                            }
                        }
                    }
                    else if(car_selection==3){
                        cout<<" Toyota Supra Mk-5 \t 2023\n";
                        cout<<"Total Payment in Pkr = Rs:60000000\n";
                        cout<<"                OR                \n";
                        cout<<"Total Payment in USD = 213538.50 Usd\n";
                        cout<<"=================================================\n";
                        cout<<"Press 1 to continue the Booking Process : ";
                        cin>>bill;
                        if(bill==1){
                            cout<<"==============================================\n";
                            cout<<"            PAYMENT METHOD                    \n";
                            cout<<"==============================================\n";
                            cout<<"1. Bank transfer\n";
                            cout<<"2. Cash Payment\n";
                            cout<<"================================================\n";
                            cout<<"Please Select Your Payment Method : ";
                            cin>>payment;
                           
                            if(payment==1){                               
validation();

                            }
                            else if(payment==2){
                                cout<<"\nConguratulation Your Payment Successfully Recieved\n";
                            }
                        }
                    }
                    else if(car_selection==4){
                        cout<<" Toyota LandCrusier ZX \t 2018\n";
                        cout<<"Total Payment in Pkr = Rs:50000000\n";
                        cout<<"                OR                \n";
                        cout<<"Total Payment in USD = 177948.75 Usd\n";
                        cout<<"=================================================\n";
                        cout<<"Press 1 to continue the Booking Process : ";
                        cin>>bill;
                        if(bill==1){
                            cout<<"==============================================\n";
                            cout<<"            PAYMENT METHOD                    \n";
                            cout<<"==============================================\n";
                            cout<<"1. Bank transfer\n";
                            cout<<"2. Cash Payment\n";
                            cout<<"================================================\n";
                            cout<<"Please Select Your Payment Method : ";
                            cin>>payment;
                            
                            if(payment==1){                             
validation();

                            }
                            else if(payment==2){
                                cout<<"\nConguratulation Your Payment Successfully Recieved\n";
                            }
                        }
                    }
                    else if(car_selection==5){
                        cout<<" Toyota Crown  \t 20\n";
                        cout<<"Total Payment in Pkr = Rs:25000000\n";
                        cout<<"                OR                \n";
                        cout<<"Total Payment in USD = 88974.38 Usd\n";
                        cout<<"=================================================\n";
                        cout<<"Press 1 to continue the Booking Process : ";
                        cin>>bill;
                        if(bill==1){
                            cout<<"==============================================\n";
                            cout<<"            PAYMENT METHOD                    \n";
                            cout<<"==============================================\n";
                            cout<<"1. Bank transfer\n";
                            cout<<"2. Cash Payment\n";
                            cout<<"================================================\n";
                            cout<<"Please Select Your Payment Method : ";
                            cin>>payment;
                           
                            if(payment==1){                                
validation();

                            }
                            else if(payment==2){
                                cout<<"\nConguratulation Your Payment Successfully Recieved\n";
                            }
                        }
                    }
                    else if(car_selection==6){
                        cout<<" Toyota Cross\t 2023\n";
                        cout<<"Total Payment in Pkr = Rs:15000000\n";
                        cout<<"                OR                \n";
                        cout<<"Total Payment in USD = 53384.63 Usd\n";
                        cout<<"=================================================\n";
                        cout<<"Press 1 to continue the Booking Process : ";
                        cin>>bill;
                        if(bill==1){
                            cout<<"==============================================\n";
                            cout<<"            PAYMENT METHOD                    \n";
                            cout<<"==============================================\n";
                            cout<<"1. Bank transfer\n";
                            cout<<"2. Cash Payment\n";
                            cout<<"================================================\n";
                            cout<<"Please Select Your Payment Method : ";
                            cin>>payment;
                         
                            if(payment==1){                               
validation();

                            }
                            else if(payment==2){
                                cout<<"\nConguratulation Your Payment Successfully Recieved\n";
                            }
                        }
                    }
                    

                }
                
                
            
            }

            
            
        }


    }
}

void feedback_formula(int formula){
                                 cout<<"__________________________________________________________________________________\n";
                                cout<<"|                                                                                 |\n";
                                cout<<"| GDP  = private consumption + gross private investment + government investment + |\n";
                                cout<<"| government spending + (exports - imports).                                      |\n";
                                cout<<"|_________________________________________________________________________________|\n";
                                cout<<"Press '1' to check how to use GDP Data : ";
                                cin>>formula;
                                if(formula==1){
                                    string star;
                                    // GDP data usage...........
                                    cout<<"__________________________________________________________________________________________________\n";
                                    cout<<"| In economics, the final users of goods and services are divided into three main groups:         |\n";
                                    cout<<"|  households, businesses, and the government. One way gross domestic product (GDP) is calculated |\n";
                                    cout<<"|  known as the expenditure approach—is by adding the expenditures made by those                 |\n";
                                    cout<<"|  three groups of user. Accordingly, GDP is defined by the following formula:                    |\n";
                                    cout<<"|                                                                                                 |\n";
                                    cout<<"|             GDP = Consumption + Investment + Government Spending + Net Exports                  |\n";
                                    cout<<"|                                                                                                 |\n";
                                    cout<<"|  where consumption (C) represents private-consumption expenditures by households and            |\n";
                                    cout<<"|   nonprofit organizations, investment (I) refers to business expenditures                       |\n";
                                    cout<<"|                                                                                                 |\n";
                                    cout<<"|                                                                                                 |\n";
                                    cout<<"|________________________________________________________________________________________________ |\n";


                                     cout<<"Thank you for using me\n";
                                    cout<<"Please give Feedback of my service out of five stars : ";

                                    cin>>star;
 cout<<"==============================================================================================\n";
                                    if(star=="*****"){
                                        cout<<"Thanks Sir\n";
                                    }
                                    else if(star=="****"){
                                        cout<<"Thanks Sir\n";
                                    }
                                    else if(star=="***"){
                                        cout<<"Thanks Sir,I will improve my service\n";
                                    }
                                    else if(star=="**"){
                                        cout<<"Thanks Sir,I will improve my service alot\n";
                                    }
                                    else if(star=="*"){
                                        cout<<"Sorry Sir,I think should improve my service alot\n";
                                    }
                                

                                }
}

void graph(){
    
  cout << "35T`|  " << endl;
  cout << "30T`|        " << endl;
  cout << "25T`|             ,~~''" << endl;
  cout << "20T`|      ,~~~~~/" << endl;
  cout << "15T`| ,~~~/  " << endl;
  cout << "10T`|/_____________________  "<<endl;
  cout<<  "   `      `      `   `"<<endl;
  cout<<  "  1960  1980  2000  2020"<<endl;
}
void feedback(){
    string star;

  cout<<"============================================================================================\n";
  
                        
                                    cout<<"Thank you for using me\n";
                                    cout<<"Please give Feedback of my service out of five stars : ";

                                    cin>>star;
 cout<<"==============================================================================================\n";
                                    if(star=="*****"){
                                        cout<<"Thanks Sir\n";
                                    }
                                    else if(star=="****"){
                                        cout<<"Thanks Sir\n";
                                    }
                                    else if(star=="***"){
                                        cout<<"Thanks Sir,I will improve my service\n";
                                    }
                                    else if(star=="**"){
                                        cout<<"Thanks Sir,I will improve my service alot\n";
                                    }
                                    else if(star=="*"){
                                        cout<<"Sorry Sir,I think should improve my service alot\n";
                                    }
                                
                            

}
// STRUCTURE FOR COUNTRY DATA WHICH IS ALREADY ENTERED
struct Country {
    string name;
    string location;
    string area;
    string capital;
    string language;
    string currency;
};
//  USING STRUCTURE TO STORE DATA WHICH IS INPUT BY USER
struct Country_info {
    string name1;
    string location1;
    string area1;
    string capital1;
    string language1;
    string currency1;
};
// FUNCIONS TO DISPLAY COUNTRY DATA
void display( Country Country1); 
// FUNCTION TO TAKE INPUT FROM USER IN STRUCTURES
void input(Country_info &Country);
// FUNCTION TO DISPLAY THE DATA ENTERED BY THE USER
void output(Country_info Country);

//======================================================================================================
// STRUCTURE TO STORE THE GDP OF COUNTRIES
struct GDP {
    string GDP_value;
    string GDP_growth;
};
// STRUCTURE TO TAKE INPUT FROM USER
struct GDP_info {
    string GDP_value;
    string GDP_growth;
};
// FUNCTIONS
void display_GDP( GDP gdp);
void input_GDP( GDP_info &gdp2);
void output_GDP( GDP_info gdp2);
//===============================================================================================
// STRUCTURE TO STORE DATA ABOUT POPULATION

struct Population{
    string population;
    string population_growth;
    string birth_rate;
    string death_rate;
    string effects;

};
// FUNCTION TO DISPLAY THE POPULATION DATA

void display_population(Population data);


//==========================================================================================================



int main() {
    char y_n;
    int formula;
    string argument,star;
    char num;
    int country_name;
    string customer;


    const int totalOptions = 3;
    int selectedOption = 1;
 //==============================================================================================================================================================//
    GDP gdp1 = {"23.32 Trillion USD (2021)","2.06 %"};
    GDP gdp2 = {"1.779 Trillion USD (2021)","-2.07 %"};
    GDP gdp3 = {"17.73 Trillion USD (2021)","2.99 %"};
    GDP gdp4 = {"1.988 Trillion USD (2021)","3.40 %"};
    GDP gdp5 = {"1.609 Trillion USD (2021)","2.90 %"};
    GDP gdp6 = {"1.553 Trillion USD (2021)","3.62 %"};
    GDP gdp7 = {"3.176 Trillion USD (2021)","7.00 %"};
    GDP gdp8 = {"487.2 Billion  USD (2021)","5.24 %"};
    GDP gdp9 = {"197.1 Billion  USD (2021)","3.20 %"};
    GDP gdp10 = {"163 Billion  USD (2021)","3.10 %"};
    GDP gdp11 = {"833.5 Billion  USD (2021)","8.74 %"};
    GDP gdp12 = {"1.273 Trillion  USD (2021)","3.06 %"};
    GDP gdp13 = {"1.186 Trillion  USD (2021)","5.31 %"};
    GDP gdp14 = {"419 Billion  USD (2021)","2.04 %"};
    GDP gdp15 = {"14.79 Billion  USD (2021)",""};
    GDP gdp16 = {"4.941 Trillion  USD (2021)","1.03 %"};
    GDP gdp17 = {"505.9 Billion  USD (2021)","2.59 %"};
    GDP gdp18 = {"635.7 Billion  USD (2021)","2.64 %"};
    GDP gdp19 = {"819 Billion  USD (2021)","5.57 %"};
    GDP gdp20 = {"404.1 Billion  USD (2021)","6.59 %"};
    GDP gdp21 = {"1.811 Trillion  USD (2021)","2.56 %"};
    GDP gdp22 = {"344.134 Billion  USD (2021)","2.44 %"};
    GDP gdp23 = {"373 Billion  USD (2021)","8.69 %"};
    GDP gdp24 = {"223.2 Billion  USD (2021)","2.68 %"};
    GDP gdp25 = {"348.3 Billion  USD (2021)","6.19 %"};

    //==========================================================================================================
    // INPUT OF COUNTRY GDP BY USER
    GDP_info gdp_info1  = {};
    GDP_info gdp_info2  = {};
    GDP_info gdp_info3  = {};
    GDP_info gdp_info4  = {};
    GDP_info gdp_info5  = {};
    GDP_info gdp_info6  = {};
    GDP_info gdp_info7  = {};
    GDP_info gdp_info8  = {};
    GDP_info gdp_info9  = {};
    GDP_info gdp_info10 = {};
    GDP_info gdp_info11 = {};
    GDP_info gdp_info12 = {};
    GDP_info gdp_info13 = {};
    GDP_info gdp_info14 = {};
    GDP_info gdp_info15 = {};
    GDP_info gdp_info16 = {};
    GDP_info gdp_info17 = {};
    GDP_info gdp_info18 = {};
    GDP_info gdp_info19 = {};
    GDP_info gdp_info20 = {};
    GDP_info gdp_info21 = {};
    GDP_info gdp_info22 = {};
    GDP_info gdp_info23 = {};
    GDP_info gdp_info24 = {};
    GDP_info gdp_info25 = {};


//================================================================================================================================================================//
    Country Country1  = {"United States", " North America", "9,631,418 sq km", "Washington, D.C."};
    Country Country2  = {"Russia", "Europe and Asia" , "17,098,242 sq km", "Moscow"};
    Country Country3  = {"China", "Asia" , "9,596,960 sq km", "Beijing"};
    Country Country4  = {"Canada", "North America" , "9,984,670 sq km", "Ottawa"};
    Country Country5  = {"Brazil", "South America" , "8,515,767 sq km", "Brasília"};
    Country Country6  = {"Australia", "Oceania" , "7,686,850 sq km", "Canberra"};
    Country Country7  = {"India", "Asia" , "3,287,263 sq km", "New Delhi"};
    Country Country8  = {"Argentina", "South America" , "2,780,400 sq km", "Buenos Aires"};
    Country Country9  = {"Kazakhstan", "Asia and Europe" , "2,724,900 sq km", "Nur-Sultan"};
    Country Country10 = {"Algeria", "Africa" , "2,381,741 sq km", "Algiers"};
    Country Country11 = {"Saudi Arabia", " Asia" , "2,149,690 sq km", "Riyadh"};
    Country Country12 = {"Mexico", " North America" , "1,964,375 sq km", "Mexico City"};
    Country Country13 = {"Indonesia", " Asia" , "1,904,569 sq km", "Jakarta"};
    Country Country14 = {"South Africa", " Africa" , "1,221,037 sq km", "Pretoria (administrative), Bloemfontein (judicial), Cape Town (legislative)"};
    Country Country15 = {"Afghanistan", " Asia" , "652,230 sq km", "Kabul"};
    Country Country16 = {"Japan", " East Asia" , "377,975 sq km", "Tokyo","Japanese"}; 
    Country Country17 = {"Thailand", " Southeast Asia" , "513,120 sq km", "Bangkok","Thai"}; 
    Country Country18 = {"Sweden", " Northern Europe" , "450,295 sq km", "Stockholm"," Swedish"}; 
    Country Country19 = {"Turkey", " Western Asia" , " 783,356 sq km","Ankara","Turkish"}; 
    Country Country20 = {"Egypt", " North Africa", " 1.01 million sq km" , " Cairo", "Arabic"}; 
    Country Country21 = {"South Korea", "  East Asia", " 100,210 sq km" , " Seoul", "Korean"}; 
    Country Country22 = {"Chile", "  South America", " 756,102 sq km" , " Santiago", "Spanish"}; 
    Country Country23 = {"Malaysia", "  Southeast Asia", "  330,803 sq km" , " Kuala Lumpur", "Malay"}; 
    Country Country24 = {"Peru", "  South America", "  1.28 million sq km" , " Lima", "Spanish"}; 
    Country Country25 = {"Pakistan", " South Asia", "  881,913 sq km" , " Islamabad", "Urdu"}; 

    //==============================================================================================//
    // INPUT OF COUNTRY BY USER
    Country_info Country_info1 =  {};
    Country_info Country_info2 =  {};
    Country_info Country_info3 =  {};
    Country_info Country_info4 =  {};
    Country_info Country_info5 =  {};
    Country_info Country_info6 =  {};
    Country_info Country_info7 =  {};
    Country_info Country_info8 =  {};
    Country_info Country_info9 =  {};
    Country_info Country_info10 = {};
    Country_info Country_info11 = {};
    Country_info Country_info12 = {};
    Country_info Country_info13 = {};
    Country_info Country_info14 = {};
    Country_info Country_info15 = {};
    Country_info Country_info16 = {}; 
    Country_info Country_info17 = {}; 
    Country_info Country_info18 = {}; 
    Country_info Country_info19 = {}; 
    Country_info Country_info20 = {}; 
    Country_info Country_info21 = {}; 
    Country_info Country_info22 = {}; 
    Country_info Country_info23 = {}; 
    Country_info Country_info24 = {}; 
    Country_info Country_info25 = {}; 

    //=====================================================================================================
   

    //==================================================================================================================================//
    cout<<endl<<endl;
    cout<<"1.  United States\t\t2.  Russia       \t\t3.   China       \t\t4.  Canada"<<endl;
    cout<<"5.  Brazil       \t\t6.  Australia    \t\t7.   India       \t\t8.  Argentina"<<endl;
    cout<<"9.  Kazakhstan   \t\t10. Algeria      \t\t11.  Saudi Arabia\t\t12. Mexico "<<endl;
    cout<<"13. Indonesia    \t\t14. South Africa \t\t15.  Afghanistan \t\t16. Japan"<<endl;
    cout<<"17. Thailand     \t\t18. Sweden       \t\t19.  Turkey      \t\t20. Egypt"<<endl;
    cout<<"21. South Korea  \t\t22. Chile        \t\t23.  Malaysia    \t\t24. Peru"<<endl;
    cout<<"25. Pakistan"<<endl;
    cout<<"-----------------------------------------------------------------------------------\n";
   
    cout<<"Please Select Country(1-25) : ";
    cin>>country_name;

    //=============================================================================================================================//

    while (true) {
        printOptions(selectedOption);

        // Get arrow key input
        int key = _getch();

        // Process arrow key input
        switch (key) {
            case 72: // Up arrow key
                selectedOption = (selectedOption > 1) ? (selectedOption - 1) : totalOptions;
                break;
            case 80: // Down arrow key
                selectedOption = (selectedOption < totalOptions) ? (selectedOption + 1) : 1;
                break;
            case 13: // Enter key
                cout<<"========================================="<<endl;
                cout << "You selected " << selectedOption << ": ";
                switch (selectedOption) {
      //===================================================================================================//              
                    case 1:
                        cout << "'Gross Domestic Product [GDP]'\n";
                        cout<<"_____________________________________________________________________________"<<endl;
                        cout<<"|1. Gross domestic product (GDP) is the standard measure of the value added  |"<<endl;
                        cout<<"|  created through the production of goods and services in a country during  |"<<endl;
                        cout<<"|                       a certain period.                                    |"<<endl;
                        cout<<"|2.  It is often considered to be the world's most powerful statistical      |"<<endl;
                        cout<<"|      indicator of national development and progress.                       |"<<endl;
                        cout<<"|____________________________________________________________________________"<<endl;
                        
                        
                        
                        
                        switch(country_name){
                            case 1:
                            cout<<"What Would you to do ??"<<endl;
                            cout<<"1. Press 'y' to Enter Data of choosen Country: "<<endl;
                            cout<<"2. Press 'n' to Simply show Data of choosen Country ( Already  Data Entered): "<<endl;
                            cin>>y_n;
                            if(y_n=='y'){
                                cout<<"Please Enter Basic Information about United States : "<<endl;
                                input(Country_info1);
                                cout<<"---------------------------------------------------------------\n";
                                cout<<"PLease Enter GDP of United States : "<<endl;
                                input_GDP(gdp_info1);
                            
                                cout<<"========================================================\n";
                                cout<<"Would you like to view your Input Data ???"<<endl;
                                cout<<"========================================================\n";
                                cout<<"Press '1' to yes :"<<endl;
                                cout<<"Press '0' to No :"<<endl;
                                cin>>num;
                                switch(num){
                                    case '1':
                                    output(Country_info1);
                                    output_GDP(gdp_info1);
                                    feedback();
                                    break;
                                    case '0':
                                    feedback();
                                    break;
                                    default:
                                    cout<<"Error  !!!\n";
                                    break;

                                }
                                

                            }
                            else if(y_n == 'n'){
                                cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about United States : "<<endl;
                            display(Country1);
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Gross Domestic Product [GDP] of United-States"<<endl;
                            display_GDP(gdp1);
                            cout<<"=====================================================================\n";
                            cout<<"            => How to Calculate the GDP OF a Country\n";
                            cout<<"            => GDP OF United States Graphically\n";
                            cout<<"=====================================================================\n";
                            cout<<"How can I help you : ";
                            cin>>argument;
                            
                            if(argument == "graph"/*||argument=="i need graph of gdp"||argument=="graphical respresentation"||argument=="show the graph of gdp"||argument=="display the chart"||argument=="present the visual representation"||argument=="exhibit the plotted data"||argument=="demonstrate the graph"||argument=="illustrate the information graphically"||argument=="could you show the graph"||argument=="let see the graphical representation"*/)
                            {
                                graph();
                                feedback();
                                 }

                            else if (argument == "formula") {
                                
                                feedback_formula(formula);
                                
                                    
                                }
                            }
                            

                            break;  
                            case 2:
                            cout<<"What Would you to do ??"<<endl;
                            cout<<"1. Press 'y' to Enter Data of choosen Country: "<<endl;
                            cout<<"2. Press 'n' to Simply show Data of choosen Country ( Already  Data Entered): "<<endl;
                            cin>>y_n;
                            if(y_n=='y'){
                                cout<<"Please Enter Basic Information about Russia : "<<endl;
                                input(Country_info2);
                                cout<<"---------------------------------------------------------------\n";
                                cout<<"PLease Enter GDP of Russia : "<<endl;
                                input_GDP(gdp_info2);
                                cout<<"========================================================\n";
                                cout<<"Would you like to view your Input Data ???"<<endl;
                                cout<<"========================================================\n";
                                cout<<"Press '1' to yes :"<<endl;
                                cout<<"Press '0' to No :"<<endl;
                                cin>>num;
                                switch(num){
                                    case '1':
                                    output(Country_info2);
                                    output_GDP(gdp_info2);
                                    feedback();
                                    break;
                                    case '0':
                                    feedback();
                                    break;
                                    default:
                                    cout<<"Error  !!!\n";
                                    break;

                                }
                                

                            }
                            else if(y_n =='n'){
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Russia' : "<<endl;
                            display(Country2);
                             cout<<"-------------------------------------------------"<<endl;
                            cout<<"Gross Domestic Product [GDP] of Russia"<<endl;
                            display_GDP(gdp2);
                            cout<<"=====================================================================\n";
                            cout<<"            => How to Calculate the GDP OF a Country\n";
                            cout<<"            => GDP OF Russia Graphically\n";
                            cout<<"=====================================================================\n";
                            cout<<"How can I help you : ";
                            cin>>argument;
                            
                            if(argument == "graph"/*||argument=="i need graph of gdp"||argument=="graphical respresentation"||argument=="show the graph of gdp"||argument=="display the chart"||argument=="present the visual representation"||argument=="exhibit the plotted data"||argument=="demonstrate the graph"||argument=="illustrate the information graphically"||argument=="could you show the graph"||argument=="let see the graphical representation"*/)
                            {
                                graph();
                                feedback();
                                 }

                            else if (argument == "formula") {
                                
                                feedback_formula(formula);
                                
                                    
                                }
                            }

                            break;  
                            case 3:
                            cout<<"What Would you to do ??"<<endl;
                            cout<<"1. Press 'y' to Enter Data of choosen Country: "<<endl;
                            cout<<"2. Press 'n' to Simply show Data of choosen Country ( Already  Data Entered): "<<endl;
                            cin>>y_n;
                            if(y_n=='y'){
                                cout<<"Please Enter Basic Information about China : "<<endl;
                                input(Country_info3);
                                cout<<"---------------------------------------------------------------\n";
                                cout<<"PLease Enter GDP of China : "<<endl;
                                input_GDP(gdp_info3);
                                cout<<"========================================================\n";
                                cout<<"Would you like to view your Input Data ???"<<endl;
                                cout<<"========================================================\n";
                                cout<<"Press '1' to yes :"<<endl;
                                cout<<"Press '0' to No :"<<endl;
                                cin>>num;
                                switch(num){
                                    case '1':
                                    output(Country_info3);
                                    output_GDP(gdp_info3);
                                    feedback();
                                    break;
                                    case '0':
                                    feedback();
                                    break;
                                    default:
                                    cout<<"Error  !!!\n";
                                    break;

                                }
                                

                            }
                            else if(y_n == 'n'){
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'China' : "<<endl;
                            display(Country3);
                             cout<<"-------------------------------------------------"<<endl;
                            cout<<"Gross Domestic Product [GDP] of China"<<endl;
                            display_GDP(gdp3);
                            cout<<"=====================================================================\n";
                            cout<<"            => How to Calculate the GDP OF a Country\n";
                            cout<<"            => GDP OF CHINA Graphically\n";
                            cout<<"=====================================================================\n";
                            cout<<"How can I help you : ";
                            cin>>argument;
                            
                            if(argument == "graph"/*||argument=="i need graph of gdp"||argument=="graphical respresentation"||argument=="show the graph of gdp"||argument=="display the chart"||argument=="present the visual representation"||argument=="exhibit the plotted data"||argument=="demonstrate the graph"||argument=="illustrate the information graphically"||argument=="could you show the graph"||argument=="let see the graphical representation"*/)
                            {
                                graph();
                                feedback();
                                 }

                            else if (argument == "formula") {
                                
                                feedback_formula(formula);
                                
                                    
                                }
                            }

                            break;  
                            case 4:
                            cout<<"What Would you to do ??"<<endl;
                            cout<<"1. Press 'y' to Enter Data of choosen Country: "<<endl;
                            cout<<"2. Press 'n' to Simply show Data of choosen Country ( Already  Data Entered): "<<endl;
                            cin>>y_n;
                            if(y_n=='y'){
                                cout<<"Please Enter Basic Information about Canada : "<<endl;
                                input(Country_info4);
                                cout<<"---------------------------------------------------------------\n";
                                cout<<"PLease Enter GDP of canada : "<<endl;
                                input_GDP(gdp_info4);
                                cout<<"========================================================\n";
                                cout<<"Would you like to view your Input Data ???"<<endl;
                                cout<<"========================================================\n";
                                cout<<"Press '1' to yes :"<<endl;
                                cout<<"Press '0' to No :"<<endl;
                                cin>>num;
                                switch(num){
                                    case '1':
                                    output(Country_info4);
                                    output_GDP(gdp_info4);
                                    feedback();
                                    break;
                                    case '0':
                                    feedback();
                                    break;
                                    default:
                                    cout<<"Error  !!!\n";
                                    break;

                                }
                                

                            }
                            else if(y_n == 'n'){
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'canada' : "<<endl;
                            display(Country4);
                             cout<<"-------------------------------------------------"<<endl;
                            cout<<"Gross Domestic Product [GDP] of Canada"<<endl;
                            display_GDP(gdp4);
                            cout<<"=====================================================================\n";
                            cout<<"            => How to Calculate the GDP OF a Country\n";
                            cout<<"            => GDP OF Canada Graphically\n";
                            cout<<"=====================================================================\n";
                            cout<<"How can I help you : ";
                            cin>>argument;
                            
                            if(argument == "graph"/*||argument=="i need graph of gdp"||argument=="graphical respresentation"||argument=="show the graph of gdp"||argument=="display the chart"||argument=="present the visual representation"||argument=="exhibit the plotted data"||argument=="demonstrate the graph"||argument=="illustrate the information graphically"||argument=="could you show the graph"||argument=="let see the graphical representation"*/)
                            {
                                graph();
                                feedback();
                                 }

                            else if (argument == "formula") {
                                
                                feedback_formula(formula);
                                
                                    
                                }
                            }

                            break;  
                            case 5:
                            cout<<"What Would you to do ??"<<endl;
                            cout<<"1. Press 'y' to Enter Data of choosen Country: "<<endl;
                            cout<<"2. Press 'n' to Simply show Data of choosen Country ( Already  Data Entered): "<<endl;
                            cin>>y_n;
                            if(y_n=='y'){
                                cout<<"Please Enter Basic Information about Brazil : "<<endl;
                                input(Country_info5);
                                cout<<"---------------------------------------------------------------\n";
                                cout<<"PLease Enter GDP of Brazil : "<<endl;
                                input_GDP(gdp_info5);
                                cout<<"========================================================\n";
                                cout<<"Would you like to view your Input Data ???"<<endl;
                                cout<<"========================================================\n";
                                cout<<"Press '1' to yes :"<<endl;
                                cout<<"Press '0' to No :"<<endl;
                                cin>>num;
                                switch(num){
                                    case '1':
                                    output(Country_info5);
                                    output_GDP(gdp_info5);
                                    feedback();
                                    break;
                                    case '0':
                                    feedback();
                                    break;
                                    default:
                                    cout<<"Error  !!!\n";
                                    break;

                                }
                                

                            }
                            else if(y_n == 'n'){
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Brazil' : "<<endl;
                            display(Country5);
                             cout<<"-------------------------------------------------"<<endl;
                            cout<<"Gross Domestic Product [GDP] of Brazil"<<endl;
                            display_GDP(gdp5);
                            cout<<"=====================================================================\n";
                            cout<<"            => How to Calculate the GDP OF a Country\n";
                            cout<<"            => GDP OF Brazil Graphically\n";
                            cout<<"=====================================================================\n";
                            cout<<"How can I help you : ";
                            cin>>argument;
                            
                            if(argument == "graph"/*||argument=="i need graph of gdp"||argument=="graphical respresentation"||argument=="show the graph of gdp"||argument=="display the chart"||argument=="present the visual representation"||argument=="exhibit the plotted data"||argument=="demonstrate the graph"||argument=="illustrate the information graphically"||argument=="could you show the graph"||argument=="let see the graphical representation"*/)
                            {
                                graph();
                                feedback();
                                 }

                            else if (argument == "formula") {
                                
                                feedback_formula(formula);
                                
                                    
                                }
                            }

                            break;  
                            case 6:
                            cout<<"What Would you to do ??"<<endl;
                            cout<<"1. Press 'y' to Enter Data of choosen Country: "<<endl;
                            cout<<"2. Press 'n' to Simply show Data of choosen Country ( Already  Data Entered): "<<endl;
                            cin>>y_n;
                            if(y_n=='y'){
                                cout<<"Please Enter Basic Information about Australia : "<<endl;
                                input(Country_info6);
                                cout<<"---------------------------------------------------------------\n";
                                cout<<"PLease Enter GDP of Australia : "<<endl;
                                input_GDP(gdp_info6);
                                cout<<"========================================================\n";
                                cout<<"Would you like to view your Input Data ???"<<endl;
                                cout<<"========================================================\n";
                                cout<<"Press '1' to yes :"<<endl;
                                cout<<"Press '0' to No :"<<endl;
                                cin>>num;
                                switch(num){
                                    case '1':
                                    output(Country_info6);
                                    output_GDP(gdp_info6);
                                    feedback();
                                    break;
                                    case '0':
                                    feedback();
                                    break;
                                    default:
                                    cout<<"Error  !!!\n";
                                    break;

                                }
                                

                            }
                            else if(y_n=='n'){
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Australia' : "<<endl;
                            display(Country6);
                             cout<<"-------------------------------------------------"<<endl;
                            cout<<"Gross Domestic Product [GDP] of Austrila"<<endl;
                            display_GDP(gdp6);
                            cout<<"=====================================================================\n";
                            cout<<"            => How to Calculate the GDP OF a Country\n";
                            cout<<"            => GDP OF Australia Graphically\n";
                            cout<<"=====================================================================\n";
                            cout<<"How can I help you : ";
                            cin>>argument;
                            
                            if(argument == "graph"/*||argument=="i need graph of gdp"||argument=="graphical respresentation"||argument=="show the graph of gdp"||argument=="display the chart"||argument=="present the visual representation"||argument=="exhibit the plotted data"||argument=="demonstrate the graph"||argument=="illustrate the information graphically"||argument=="could you show the graph"||argument=="let see the graphical representation"*/)
                            {
                                graph();
                                feedback();
                                 }

                            else if (argument == "formula") {
                                
                                feedback_formula(formula);
                                
                                    
                                }
                            }

                            break;  
                            case 7:
                            cout<<"What Would you to do ??"<<endl;
                            cout<<"1. Press 'y' to Enter Data of choosen Country: "<<endl;
                            cout<<"2. Press 'n' to Simply show Data of choosen Country ( Already  Data Entered): "<<endl;
                            cin>>y_n;
                            if(y_n=='y'){
                                cout<<"Please Enter Basic Information about India : "<<endl;
                                input(Country_info7);
                                cout<<"---------------------------------------------------------------\n";
                                cout<<"PLease Enter GDP of India : "<<endl;
                                input_GDP(gdp_info7);
                                cout<<"========================================================\n";
                                cout<<"Would you like to view your Input Data ???"<<endl;
                                cout<<"========================================================\n";
                                cout<<"Press '1' to yes :"<<endl;
                                cout<<"Press '0' to No :"<<endl;
                                cin>>num;
                                switch(num){
                                    case '1':
                                    output(Country_info7);
                                    output_GDP(gdp_info7);
                                    feedback();
                                    break;
                                    case '0':
                                    feedback();
                                    break;
                                    default:
                                    cout<<"Error  !!!\n";
                                    break;

                                }
                                

                            }
                            else if(y_n=='n'){
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'India' : "<<endl;
                            display(Country7);
                             cout<<"-------------------------------------------------"<<endl;
                            cout<<"Gross Domestic Product [GDP] of India"<<endl;
                            display_GDP(gdp7);
                            cout<<"=====================================================================\n";
                            cout<<"            => How to Calculate the GDP OF a Country\n";
                            cout<<"            => GDP OF India Graphically\n";
                            cout<<"=====================================================================\n";
                            cout<<"How can I help you : ";
                            cin>>argument;
                            
                            if(argument == "graph"/*||argument=="i need graph of gdp"||argument=="graphical respresentation"||argument=="show the graph of gdp"||argument=="display the chart"||argument=="present the visual representation"||argument=="exhibit the plotted data"||argument=="demonstrate the graph"||argument=="illustrate the information graphically"||argument=="could you show the graph"||argument=="let see the graphical representation"*/)
                            {
                                graph();
                                feedback();
                                 }

                            else if (argument == "formula") {
                                
                                feedback_formula(formula);
                                
                                    
                                }
                            }

                            break;  
                            case 8:
                            cout<<"What Would you to do ??"<<endl;
                            cout<<"1. Press 'y' to Enter Data of choosen Country: "<<endl;
                            cout<<"2. Press 'n' to Simply show Data of choosen Country ( Already  Data Entered): "<<endl;
                            cin>>y_n;
                            if(y_n=='y'){
                                cout<<"Please Enter Basic Information about Argentina : "<<endl;
                                input(Country_info8);
                                cout<<"---------------------------------------------------------------\n";
                                cout<<"PLease Enter GDP of Argentina : "<<endl;
                                input_GDP(gdp_info8);
                                cout<<"========================================================\n";
                                cout<<"Would you like to view your Input Data ???"<<endl;
                                cout<<"========================================================\n";
                                cout<<"Press '1' to yes :"<<endl;
                                cout<<"Press '0' to No :"<<endl;
                                cin>>num;
                                switch(num){
                                    case '1':
                                    output(Country_info8);
                                    output_GDP(gdp_info8);
                                    feedback();
                                    break;
                                    case '0':
                                    feedback();
                                    break;
                                    default:
                                    cout<<"Error  !!!\n";
                                    break;

                                }
                                

                            }
                            else if(y_n=='n'){
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Argentina' : "<<endl;
                            display(Country8);
                             cout<<"-------------------------------------------------"<<endl;
                            cout<<"Gross Domestic Product [GDP] of Argentina"<<endl;
                            display_GDP(gdp8);
                            cout<<"=====================================================================\n";
                            cout<<"            => How to Calculate the GDP OF a Country\n";
                            cout<<"            => GDP OF Argentina Graphically\n";
                            cout<<"=====================================================================\n";
                            cout<<"How can I help you : ";
                            cin>>argument;
                            
                            if(argument == "graph"/*||argument=="i need graph of gdp"||argument=="graphical respresentation"||argument=="show the graph of gdp"||argument=="display the chart"||argument=="present the visual representation"||argument=="exhibit the plotted data"||argument=="demonstrate the graph"||argument=="illustrate the information graphically"||argument=="could you show the graph"||argument=="let see the graphical representation"*/)
                            {
                                graph();
                                feedback();
                                 }

                            else if (argument == "formula") {
                                
                                feedback_formula(formula);
                                
                                    
                                }
                            }

                            break;  
                            case 9:
                             cout<<"What Would you to do ??"<<endl;
                            cout<<"1. Press 'y' to Enter Data of choosen Country: "<<endl;
                            cout<<"2. Press 'n' to Simply show Data of choosen Country ( Already  Data Entered): "<<endl;
                            cin>>y_n;
                            if(y_n=='y'){
                                cout<<"Please Enter Basic Information about Kazakhstan : "<<endl;
                                input(Country_info9);
                                cout<<"---------------------------------------------------------------\n";
                                cout<<"PLease Enter GDP of Kazakhstan : "<<endl;
                                input_GDP(gdp_info9);
                                cout<<"========================================================\n";
                                cout<<"Would you like to view your Input Data ???"<<endl;
                                cout<<"========================================================\n";
                                cout<<"Press '1' to yes :"<<endl;
                                cout<<"Press '0' to No :"<<endl;
                                cin>>num;
                                switch(num){
                                    case '1':
                                    output(Country_info9);
                                    output_GDP(gdp_info9);
                                    feedback();
                                    break;
                                    case '0':
                                    feedback();
                                    break;
                                    default:
                                    cout<<"Error  !!!\n";
                                    break;

                                }
                                

                            }
                            else if(y_n=='n'){
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Kazakhstan' : "<<endl;
                            display(Country9);
                             cout<<"-------------------------------------------------"<<endl;
                            cout<<"Gross Domestic Product [GDP] of Kazakhstan"<<endl;
                            display_GDP(gdp9);
                            cout<<"=====================================================================\n";
                            cout<<"            => How to Calculate the GDP OF a Country\n";
                            cout<<"            => GDP OF Kazakhstan Graphically\n";
                            cout<<"=====================================================================\n";
                            cout<<"How can I help you : ";
                            cin>>argument;
                            
                            if(argument == "graph"/*||argument=="i need graph of gdp"||argument=="graphical respresentation"||argument=="show the graph of gdp"||argument=="display the chart"||argument=="present the visual representation"||argument=="exhibit the plotted data"||argument=="demonstrate the graph"||argument=="illustrate the information graphically"||argument=="could you show the graph"||argument=="let see the graphical representation"*/)
                            {
                                graph();
                                feedback();
                                 }

                            else if (argument == "formula") {
                                
                                feedback_formula(formula);
                                
                                    
                                }
                            }


                            break;  
                            case 10:
                             cout<<"What Would you to do ??"<<endl;
                            cout<<"1. Press 'y' to Enter Data of choosen Country: "<<endl;
                            cout<<"2. Press 'n' to Simply show Data of choosen Country ( Already  Data Entered): "<<endl;
                            cin>>y_n;
                            if(y_n=='y'){
                                cout<<"Please Enter Basic Information about Algeria : "<<endl;
                                input(Country_info10);
                                cout<<"---------------------------------------------------------------\n";
                                cout<<"PLease Enter GDP of Algeria : "<<endl;
                                input_GDP(gdp_info10);
                                cout<<"========================================================\n";
                                cout<<"Would you like to view your Input Data ???"<<endl;
                                cout<<"========================================================\n";
                                cout<<"Press '1' to yes :"<<endl;
                                cout<<"Press '0' to No :"<<endl;
                                cin>>num;
                                switch(num){
                                    case '1':
                                    output(Country_info10);
                                    output_GDP(gdp_info10);
                                    feedback();
                                    break;
                                    case '0':
                                    feedback();
                                    break;
                                    default:
                                    cout<<"Error  !!!\n";
                                    break;

                                }
                                

                            }
                            else if(y_n=='n'){
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Algeria' : "<<endl;
                            display(Country10);
                             cout<<"-------------------------------------------------"<<endl;
                            cout<<"Gross Domestic Product [GDP] of Algeria"<<endl;
                            display_GDP(gdp10);
                            cout<<"=====================================================================\n";
                            cout<<"            => How to Calculate the GDP OF a Country\n";
                            cout<<"            => GDP OF Algeria Graphically\n";
                            cout<<"=====================================================================\n";
                            cout<<"How can I help you : ";
                            cin>>argument;
                            
                            if(argument == "graph"/*||argument=="i need graph of gdp"||argument=="graphical respresentation"||argument=="show the graph of gdp"||argument=="display the chart"||argument=="present the visual representation"||argument=="exhibit the plotted data"||argument=="demonstrate the graph"||argument=="illustrate the information graphically"||argument=="could you show the graph"||argument=="let see the graphical representation"*/)
                            {
                                graph();
                                feedback();
                                 }

                            else if (argument == "formula") {
                                
                                feedback_formula(formula);
                                
                                    
                                }
                            }
                            break;  
                            case 11:
                             cout<<"What Would you to do ??"<<endl;
                            cout<<"1. Press 'y' to Enter Data of choosen Country: "<<endl;
                            cout<<"2. Press 'n' to Simply show Data of choosen Country ( Already  Data Entered): "<<endl;
                            cin>>y_n;
                            if(y_n=='y'){
                                cout<<"Please Enter Basic Information about Saudia-Arabia : "<<endl;
                                input(Country_info11);
                                cout<<"---------------------------------------------------------------\n";
                                cout<<"PLease Enter GDP of Saudia-Arabia : "<<endl;
                                input_GDP(gdp_info11);
                                cout<<"========================================================\n";
                                cout<<"Would you like to view your Input Data ???"<<endl;
                                cout<<"========================================================\n";
                                cout<<"Press '1' to yes :"<<endl;
                                cout<<"Press '0' to No :"<<endl;
                                cin>>num;
                                switch(num){
                                    case '1':
                                    output(Country_info11);
                                    output_GDP(gdp_info11);
                                    feedback();
                                    break;
                                    case '0':
                                    feedback();
                                    break;
                                    default:
                                    cout<<"Error  !!!\n";
                                    break;

                                }
                                

                            }
                            else if(y_n=='n'){
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Saudia-Arabia' : "<<endl;
                            display(Country11);
                             cout<<"-------------------------------------------------"<<endl;
                            cout<<"Gross Domestic Product [GDP] of Saudia-Arabia"<<endl;
                            display_GDP(gdp11);
                            cout<<"=====================================================================\n";
                            cout<<"            => How to Calculate the GDP OF a Country\n";
                            cout<<"            => GDP OF Saudia-Arabia Graphically\n";
                            cout<<"=====================================================================\n";
                            cout<<"How can I help you : ";
                            cin>>argument;
                            
                            if(argument == "graph"/*||argument=="i need graph of gdp"||argument=="graphical respresentation"||argument=="show the graph of gdp"||argument=="display the chart"||argument=="present the visual representation"||argument=="exhibit the plotted data"||argument=="demonstrate the graph"||argument=="illustrate the information graphically"||argument=="could you show the graph"||argument=="let see the graphical representation"*/)
                            {
                                graph();
                                feedback();
                                 }

                            else if (argument == "formula") {
                                
                                feedback_formula(formula);
                                
                                    
                                }
                            }

                            break;  
                            case 12:
                             cout<<"What Would you to do ??"<<endl;
                            cout<<"1. Press 'y' to Enter Data of choosen Country: "<<endl;
                            cout<<"2. Press 'n' to Simply show Data of choosen Country ( Already  Data Entered): "<<endl;
                            cin>>y_n;
                            if(y_n=='y'){
                                cout<<"Please Enter Basic Information about Mexico : "<<endl;
                                input(Country_info12);
                                cout<<"---------------------------------------------------------------\n";
                                cout<<"PLease Enter GDP of Mexico : "<<endl;
                                input_GDP(gdp_info12);
                                cout<<"========================================================\n";
                                cout<<"Would you like to view your Input Data ???"<<endl;
                                cout<<"========================================================\n";
                                cout<<"Press '1' to yes :"<<endl;
                                cout<<"Press '0' to No :"<<endl;
                                cin>>num;
                                switch(num){
                                    case '1':
                                    output(Country_info12);
                                    output_GDP(gdp_info12);
                                    feedback();
                                    break;
                                    case '0':
                                    feedback();
                                    break;
                                    default:
                                    cout<<"Error  !!!\n";
                                    break;

                                }
                                

                            }
                            else if(y_n=='n'){
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Mexico' : "<<endl;
                            display(Country12);
                             cout<<"-------------------------------------------------"<<endl;
                            cout<<"Gross Domestic Product [GDP] of Mexico"<<endl;
                            display_GDP(gdp12);
                            cout<<"=====================================================================\n";
                            cout<<"            => How to Calculate the GDP OF a Country\n";
                            cout<<"            => GDP OF Mexico Graphically\n";
                            cout<<"=====================================================================\n";
                            cout<<"How can I help you : ";
                            cin>>argument;
                            
                            if(argument == "graph"/*||argument=="i need graph of gdp"||argument=="graphical respresentation"||argument=="show the graph of gdp"||argument=="display the chart"||argument=="present the visual representation"||argument=="exhibit the plotted data"||argument=="demonstrate the graph"||argument=="illustrate the information graphically"||argument=="could you show the graph"||argument=="let see the graphical representation"*/)
                            {
                                graph();
                                feedback();
                                 }

                            else if (argument == "formula") {
                                
                                feedback_formula(formula);
                                
                                    
                                }
                            }

                            break;  
                            case 13:
                             cout<<"What Would you to do ??"<<endl;
                            cout<<"1. Press 'y' to Enter Data of choosen Country: "<<endl;
                            cout<<"2. Press 'n' to Simply show Data of choosen Country ( Already  Data Entered): "<<endl;
                            cin>>y_n;
                            if(y_n=='y'){
                                cout<<"Please Enter Basic Information about Indonesia : "<<endl;
                                input(Country_info13);
                                cout<<"---------------------------------------------------------------\n";
                                cout<<"PLease Enter GDP of Indonesia : "<<endl;
                                input_GDP(gdp_info13);
                                cout<<"========================================================\n";
                                cout<<"Would you like to view your Input Data ???"<<endl;
                                cout<<"========================================================\n";
                                cout<<"Press '1' to yes :"<<endl;
                                cout<<"Press '0' to No :"<<endl;
                                cin>>num;
                                switch(num){
                                    case '1':
                                    output(Country_info13);
                                    output_GDP(gdp_info13);
                                    feedback();
                                    break;
                                    case '0':
                                    feedback();
                                    break;
                                    default:
                                    cout<<"Error  !!!\n";
                                    break;

                                }
                                

                            }
                            else if(y_n=='n'){
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Indonesia' : "<<endl;
                            display(Country13);
                             cout<<"-------------------------------------------------"<<endl;
                            cout<<"Gross Domestic Product [GDP] of Indonesia"<<endl;
                            display_GDP(gdp13);
                            cout<<"=====================================================================\n";
                            cout<<"            => How to Calculate the GDP OF a Country\n";
                            cout<<"            => GDP OF Indonesia Graphically\n";
                            cout<<"=====================================================================\n";
                            cout<<"How can I help you : ";
                            cin>>argument;
                            
                            if(argument == "graph"/*||argument=="i need graph of gdp"||argument=="graphical respresentation"||argument=="show the graph of gdp"||argument=="display the chart"||argument=="present the visual representation"||argument=="exhibit the plotted data"||argument=="demonstrate the graph"||argument=="illustrate the information graphically"||argument=="could you show the graph"||argument=="let see the graphical representation"*/)
                            {
                                graph();
                                feedback();
                                 }

                            else if (argument == "formula") {
                                
                                feedback_formula(formula);
                                
                                    
                                }
                            }

                            break;  
                            case 14:
                             cout<<"What Would you to do ??"<<endl;
                            cout<<"1. Press 'y' to Enter Data of choosen Country: "<<endl;
                            cout<<"2. Press 'n' to Simply show Data of choosen Country ( Already  Data Entered): "<<endl;
                            cin>>y_n;
                            if(y_n=='y'){
                                cout<<"Please Enter Basic Information about South-Africa : "<<endl;
                                input(Country_info14);
                                cout<<"---------------------------------------------------------------\n";
                                cout<<"PLease Enter GDP of South-Africa : "<<endl;
                                input_GDP(gdp_info14);
                                cout<<"========================================================\n";
                                cout<<"Would you like to view your Input Data ???"<<endl;
                                cout<<"========================================================\n";
                                cout<<"Press '1' to yes :"<<endl;
                                cout<<"Press '0' to No :"<<endl;
                                cin>>num;
                                switch(num){
                                    case '1':
                                    output(Country_info14);
                                    output_GDP(gdp_info14);
                                    feedback();
                                    break;
                                    case '0':
                                    feedback();
                                    break;
                                    default:
                                    cout<<"Error  !!!\n";
                                    break;

                                }
                                

                            }
                            else if(y_n=='n'){
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'South-Africa' : "<<endl;
                            display(Country14);
                             cout<<"-------------------------------------------------"<<endl;
                            cout<<"Gross Domestic Product [GDP] of South-Africa"<<endl;
                            display_GDP(gdp14);
                            cout<<"=====================================================================\n";
                            cout<<"            => How to Calculate the GDP OF a Country\n";
                            cout<<"            => GDP OF South-Africa Graphically\n";
                            cout<<"=====================================================================\n";
                            cout<<"How can I help you : ";
                            cin>>argument;
                            
                            if(argument == "graph"/*||argument=="i need graph of gdp"||argument=="graphical respresentation"||argument=="show the graph of gdp"||argument=="display the chart"||argument=="present the visual representation"||argument=="exhibit the plotted data"||argument=="demonstrate the graph"||argument=="illustrate the information graphically"||argument=="could you show the graph"||argument=="let see the graphical representation"*/)
                            {
                                graph();
                                feedback();
                                 }

                            else if (argument == "formula") {
                                
                                feedback_formula(formula);
                                
                                    
                                }
                            }

                            break;  
                            case 15:
                             cout<<"What Would you to do ??"<<endl;
                            cout<<"1. Press 'y' to Enter Data of choosen Country: "<<endl;
                            cout<<"2. Press 'n' to Simply show Data of choosen Country ( Already  Data Entered): "<<endl;
                            cin>>y_n;
                            if(y_n=='y'){
                                cout<<"Please Enter Basic Information about Afghanistan : "<<endl;
                                input(Country_info15);
                                cout<<"---------------------------------------------------------------\n";
                                cout<<"PLease Enter GDP of Afghanistan : "<<endl;
                                input_GDP(gdp_info15);
                                cout<<"========================================================\n";
                                cout<<"Would you like to view your Input Data ???"<<endl;
                                cout<<"========================================================\n";
                                cout<<"Press '1' to yes :"<<endl;
                                cout<<"Press '0' to No :"<<endl;
                                cin>>num;
                                switch(num){
                                    case '1':
                                    output(Country_info15);
                                    output_GDP(gdp_info15);
                                    feedback();
                                    break;
                                    case '0':
                                    feedback();
                                    break;
                                    default:
                                    cout<<"Error  !!!\n";
                                    break;

                                }
                                

                            }
                            else if(y_n=='n'){
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Afghanistan' : "<<endl;
                            display(Country15);
                             cout<<"-------------------------------------------------"<<endl;
                            cout<<"Gross Domestic Product [GDP] of Afghanistan"<<endl;
                            display_GDP(gdp15);
                            cout<<"=====================================================================\n";
                            cout<<"            => How to Calculate the GDP OF a Country\n";
                            cout<<"            => GDP OF Afghanistan Graphically\n";
                            cout<<"=====================================================================\n";
                            cout<<"How can I help you : ";
                            cin>>argument;
                            
                            if(argument == "graph"/*||argument=="i need graph of gdp"||argument=="graphical respresentation"||argument=="show the graph of gdp"||argument=="display the chart"||argument=="present the visual representation"||argument=="exhibit the plotted data"||argument=="demonstrate the graph"||argument=="illustrate the information graphically"||argument=="could you show the graph"||argument=="let see the graphical representation"*/)
                            {
                                graph();
                                feedback();
                                 }

                            else if (argument == "formula") {
                                
                                feedback_formula(formula);
                                
                                    
                                }
                            }

                            break;  
                            case 16:
                             cout<<"What Would you to do ??"<<endl;
                            cout<<"1. Press 'y' to Enter Data of choosen Country: "<<endl;
                            cout<<"2. Press 'n' to Simply show Data of choosen Country ( Already  Data Entered): "<<endl;
                            cin>>y_n;
                            if(y_n=='y'){
                                cout<<"Please Enter Basic Information about Japan : "<<endl;
                                input(Country_info16);
                                cout<<"---------------------------------------------------------------\n";
                                cout<<"PLease Enter GDP of Japan : "<<endl;
                                input_GDP(gdp_info16);
                                cout<<"========================================================\n";
                                cout<<"Would you like to view your Input Data ???"<<endl;
                                cout<<"========================================================\n";
                                cout<<"Press '1' to yes :"<<endl;
                                cout<<"Press '0' to No :"<<endl;
                                cin>>num;
                                switch(num){
                                    case '1':
                                    output(Country_info16);
                                    output_GDP(gdp_info16);
                                    feedback();
                                    break;
                                    case '0':
                                    feedback();
                                    break;
                                    default:
                                    cout<<"Error  !!!\n";
                                    break;

                                }
                                

                            }
                            else if(y_n=='n'){
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Japan' : "<<endl;
                            display(Country16);
                             cout<<"-------------------------------------------------"<<endl;
                            cout<<"Gross Domestic Product [GDP] of Japan"<<endl;
                            display_GDP(gdp16);
                            cout<<"=====================================================================\n";
                            cout<<"            => How to Calculate the GDP OF a Country\n";
                            cout<<"            => GDP OF Japan Graphically\n";
                            cout<<"=====================================================================\n";
                            cout<<"How can I help you : ";
                            cin>>argument;
                            
                            if(argument == "graph"/*||argument=="i need graph of gdp"||argument=="graphical respresentation"||argument=="show the graph of gdp"||argument=="display the chart"||argument=="present the visual representation"||argument=="exhibit the plotted data"||argument=="demonstrate the graph"||argument=="illustrate the information graphically"||argument=="could you show the graph"||argument=="let see the graphical representation"*/)
                            {
                                graph();
                                feedback();
                                 }

                            else if (argument == "formula") {
                                
                                feedback_formula(formula);
                                
                                    
                                }
                            }

                            break;  
                            case 17:
                             cout<<"What Would you to do ??"<<endl;
                            cout<<"1. Press 'y' to Enter Data of choosen Country: "<<endl;
                            cout<<"2. Press 'n' to Simply show Data of choosen Country ( Already  Data Entered): "<<endl;
                            cin>>y_n;
                            if(y_n=='y'){
                                cout<<"Please Enter Basic Information about Thailand : "<<endl;
                                input(Country_info17);
                                cout<<"---------------------------------------------------------------\n";
                                cout<<"PLease Enter GDP of Thailand : "<<endl;
                                input_GDP(gdp_info17);
                                cout<<"========================================================\n";
                                cout<<"Would you like to view your Input Data ???"<<endl;
                                cout<<"========================================================\n";
                                cout<<"Press '1' to yes :"<<endl;
                                cout<<"Press '0' to No :"<<endl;
                                cin>>num;
                                switch(num){
                                    case '1':
                                    output(Country_info17);
                                    output_GDP(gdp_info17);
                                    feedback();
                                    break;
                                    case '0':
                                    feedback();
                                    break;
                                    default:
                                    cout<<"Error  !!!\n";
                                    break;

                                }
                                

                            }
                            else if(y_n=='n'){
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Thailand' : "<<endl;
                            display(Country17);
                             cout<<"-------------------------------------------------"<<endl;
                            cout<<"Gross Domestic Product [GDP] of Thailand"<<endl;
                            display_GDP(gdp17);
                            cout<<"=====================================================================\n";
                            cout<<"            => How to Calculate the GDP OF a Country\n";
                            cout<<"            => GDP OF Thailand Graphically\n";
                            cout<<"=====================================================================\n";
                            cout<<"How can I help you : ";
                            cin>>argument;
                            
                            if(argument == "graph"/*||argument=="i need graph of gdp"||argument=="graphical respresentation"||argument=="show the graph of gdp"||argument=="display the chart"||argument=="present the visual representation"||argument=="exhibit the plotted data"||argument=="demonstrate the graph"||argument=="illustrate the information graphically"||argument=="could you show the graph"||argument=="let see the graphical representation"*/)
                            {
                                graph();
                                feedback();
                                 }

                            else if (argument == "formula") {
                                
                                feedback_formula(formula);
                                
                                    
                                }
                            }

                            break;  
                            case 18:
                            cout<<"What Would you to do ??"<<endl;
                            cout<<"1. Press 'y' to Enter Data of choosen Country: "<<endl;
                            cout<<"2. Press 'n' to Simply show Data of choosen Country ( Already  Data Entered): "<<endl;
                            cin>>y_n;
                            if(y_n=='y'){
                                cout<<"Please Enter Basic Information about sweden : "<<endl;
                                input(Country_info18);
                                cout<<"---------------------------------------------------------------\n";
                                cout<<"PLease Enter GDP of sweden : "<<endl;
                                input_GDP(gdp_info18);
                                cout<<"========================================================\n";
                                cout<<"Would you like to view your Input Data ???"<<endl;
                                cout<<"========================================================\n";
                                cout<<"Press '1' to yes :"<<endl;
                                cout<<"Press '0' to No :"<<endl;
                                cin>>num;
                                switch(num){
                                    case '1':
                                    output(Country_info18);
                                    output_GDP(gdp_info18);
                                    feedback();
                                    break;
                                    case '0':
                                    feedback();
                                    break;
                                    default:
                                    cout<<"Error  !!!\n";
                                    break;

                                }
                                

                            }
                            else if(y_n=='n'){
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'sweden' : "<<endl;
                            display(Country18);
                             cout<<"-------------------------------------------------"<<endl;
                            cout<<"Gross Domestic Product [GDP] of sweden"<<endl;
                            display_GDP(gdp18);
                            cout<<"=====================================================================\n";
                            cout<<"            => How to Calculate the GDP OF a Country\n";
                            cout<<"            => GDP OF sweden Graphically\n";
                            cout<<"=====================================================================\n";
                            cout<<"How can I help you : ";
                            cin>>argument;
                            
                            if(argument == "graph"/*||argument=="i need graph of gdp"||argument=="graphical respresentation"||argument=="show the graph of gdp"||argument=="display the chart"||argument=="present the visual representation"||argument=="exhibit the plotted data"||argument=="demonstrate the graph"||argument=="illustrate the information graphically"||argument=="could you show the graph"||argument=="let see the graphical representation"*/)
                            {
                                graph();
                                feedback();
                                 }

                            else if (argument == "formula") {
                                
                                feedback_formula(formula);
                                
                                    
                                }
                            }

                            break;  
                            case 19:
                            cout<<"What Would you to do ??"<<endl;
                            cout<<"1. Press 'y' to Enter Data of choosen Country: "<<endl;
                            cout<<"2. Press 'n' to Simply show Data of choosen Country ( Already  Data Entered): "<<endl;
                            cin>>y_n;
                            if(y_n=='y'){
                                cout<<"Please Enter Basic Information about Turkey : "<<endl;
                                input(Country_info19);
                                cout<<"---------------------------------------------------------------\n";
                                cout<<"PLease Enter GDP of Turkey : "<<endl;
                                input_GDP(gdp_info19);
                                cout<<"========================================================\n";
                                cout<<"Would you like to view your Input Data ???"<<endl;
                                cout<<"========================================================\n";
                                cout<<"Press '1' to yes :"<<endl;
                                cout<<"Press '0' to No :"<<endl;
                                cin>>num;
                                switch(num){
                                    case '1':
                                    output(Country_info19);
                                    output_GDP(gdp_info19);
                                    feedback();
                                    break;
                                    case '0':
                                    feedback();
                                    break;
                                    default:
                                    cout<<"Error  !!!\n";
                                    break;

                                }
                                

                            }
                            else if(y_n=='n'){
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Turkey' : "<<endl;
                            display(Country19);
                             cout<<"-------------------------------------------------"<<endl;
                            cout<<"Gross Domestic Product [GDP] of Turkey"<<endl;
                            display_GDP(gdp19);
                            cout<<"=====================================================================\n";
                            cout<<"            => How to Calculate the GDP OF a Country\n";
                            cout<<"            => GDP OF Turkey Graphically\n";
                            cout<<"=====================================================================\n";
                            cout<<"How can I help you : ";
                            cin>>argument;
                            
                            if(argument == "graph"/*||argument=="i need graph of gdp"||argument=="graphical respresentation"||argument=="show the graph of gdp"||argument=="display the chart"||argument=="present the visual representation"||argument=="exhibit the plotted data"||argument=="demonstrate the graph"||argument=="illustrate the information graphically"||argument=="could you show the graph"||argument=="let see the graphical representation"*/)
                            {
                                graph();
                                feedback();
                                 }

                            else if (argument == "formula") {
                                
                                feedback_formula(formula);
                                
                                    
                                }
                            }

                            break;  
                            case 20:
                             cout<<"What Would you to do ??"<<endl;
                            cout<<"1. Press 'y' to Enter Data of choosen Country: "<<endl;
                            cout<<"2. Press 'n' to Simply show Data of choosen Country ( Already  Data Entered): "<<endl;
                            cin>>y_n;
                            if(y_n=='y'){
                                cout<<"Please Enter Basic Information about Egypt : "<<endl;
                                input(Country_info8);
                                cout<<"---------------------------------------------------------------\n";
                                cout<<"PLease Enter GDP of Egypt : "<<endl;
                                input_GDP(gdp_info8);
                                cout<<"========================================================\n";
                                cout<<"Would you like to view your Input Data ???"<<endl;
                                cout<<"========================================================\n";
                                cout<<"Press '1' to yes :"<<endl;
                                cout<<"Press '0' to No :"<<endl;
                                cin>>num;
                                switch(num){
                                    case '1':
                                    output(Country_info8);
                                    output_GDP(gdp_info8);
                                    feedback();
                                    break;
                                    case '0':
                                    feedback();
                                    break;
                                    default:
                                    cout<<"Error  !!!\n";
                                    break;

                                }
                                

                            }
                            else if(y_n=='n'){
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Egypt' : "<<endl;
                            display(Country8);
                             cout<<"-------------------------------------------------"<<endl;
                            cout<<"Gross Domestic Product [GDP] of Egypt"<<endl;
                            display_GDP(gdp20);
                            cout<<"=====================================================================\n";
                            cout<<"            => How to Calculate the GDP OF a Country\n";
                            cout<<"            => GDP OF Egypt Graphically\n";
                            cout<<"=====================================================================\n";
                            cout<<"How can I help you : ";
                            cin>>argument;
                            
                            if(argument == "graph"/*||argument=="i need graph of gdp"||argument=="graphical respresentation"||argument=="show the graph of gdp"||argument=="display the chart"||argument=="present the visual representation"||argument=="exhibit the plotted data"||argument=="demonstrate the graph"||argument=="illustrate the information graphically"||argument=="could you show the graph"||argument=="let see the graphical representation"*/)
                            {
                                graph();
                                feedback();
                                 }

                            else if (argument == "formula") {
                                
                                feedback_formula(formula);
                                
                                    
                                }
                            }

                            break;  
                            case 21:
                             cout<<"What Would you to do ??"<<endl;
                            cout<<"1. Press 'y' to Enter Data of choosen Country: "<<endl;
                            cout<<"2. Press 'n' to Simply show Data of choosen Country ( Already  Data Entered): "<<endl;
                            cin>>y_n;
                            if(y_n=='y'){
                                cout<<"Please Enter Basic Information about South Korea : "<<endl;
                                input(Country_info21);
                                cout<<"---------------------------------------------------------------\n";
                                cout<<"PLease Enter GDP of South Korea : "<<endl;
                                input_GDP(gdp_info21);
                                cout<<"========================================================\n";
                                cout<<"Would you like to view your Input Data ???"<<endl;
                                cout<<"========================================================\n";
                                cout<<"Press '1' to yes :"<<endl;
                                cout<<"Press '0' to No :"<<endl;
                                cin>>num;
                                switch(num){
                                    case '1':
                                    output(Country_info21);
                                    output_GDP(gdp_info21);
                                    feedback();
                                    break;
                                    case '0':
                                    feedback();
                                    break;
                                    default:
                                    cout<<"Error  !!!\n";
                                    break;

                                }
                                

                            }
                            else if(y_n=='n'){
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'South Korea' : "<<endl;
                            display(Country21);
                             cout<<"-------------------------------------------------"<<endl;
                            cout<<"Gross Domestic Product [GDP] of South Korea"<<endl;
                            display_GDP(gdp21);
                            cout<<"=====================================================================\n";
                            cout<<"            => How to Calculate the GDP OF a Country\n";
                            cout<<"            => GDP OF South Korea Graphically\n";
                            cout<<"=====================================================================\n";
                            cout<<"How can I help you : ";
                            cin>>argument;
                            
                            if(argument == "graph"/*||argument=="i need graph of gdp"||argument=="graphical respresentation"||argument=="show the graph of gdp"||argument=="display the chart"||argument=="present the visual representation"||argument=="exhibit the plotted data"||argument=="demonstrate the graph"||argument=="illustrate the information graphically"||argument=="could you show the graph"||argument=="let see the graphical representation"*/)
                            {
                                graph();
                                feedback();
                                 }

                            else if (argument == "formula") {
                                
                                feedback_formula(formula);
                                
                                    
                                }
                            }

                            break;  
                            case 22:
                             cout<<"What Would you to do ??"<<endl;
                            cout<<"1. Press 'y' to Enter Data of choosen Country: "<<endl;
                            cout<<"2. Press 'n' to Simply show Data of choosen Country ( Already  Data Entered): "<<endl;
                            cin>>y_n;
                            if(y_n=='y'){
                                cout<<"Please Enter Basic Information about Chile : "<<endl;
                                input(Country_info22);
                                cout<<"---------------------------------------------------------------\n";
                                cout<<"PLease Enter GDP of Chile : "<<endl;
                                input_GDP(gdp_info22);
                                cout<<"========================================================\n";
                                cout<<"Would you like to view your Input Data ???"<<endl;
                                cout<<"========================================================\n";
                                cout<<"Press '1' to yes :"<<endl;
                                cout<<"Press '0' to No :"<<endl;
                                cin>>num;
                                switch(num){
                                    case '1':
                                    output(Country_info22);
                                    output_GDP(gdp_info22);
                                    feedback();
                                    break;
                                    case '0':
                                    feedback();
                                    break;
                                    default:
                                    cout<<"Error  !!!\n";
                                    break;

                                }
                                

                            }
                            else if(y_n=='n'){
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Chile' : "<<endl;
                            display(Country22);
                             cout<<"-------------------------------------------------"<<endl;
                            cout<<"Gross Domestic Product [GDP] of Chile"<<endl;
                            display_GDP(gdp22);
                            cout<<"=====================================================================\n";
                            cout<<"            => How to Calculate the GDP OF a Country\n";
                            cout<<"            => GDP OF Chile Graphically\n";
                            cout<<"=====================================================================\n";
                            cout<<"How can I help you : ";
                            cin>>argument;
                            
                            if(argument == "graph"/*||argument=="i need graph of gdp"||argument=="graphical respresentation"||argument=="show the graph of gdp"||argument=="display the chart"||argument=="present the visual representation"||argument=="exhibit the plotted data"||argument=="demonstrate the graph"||argument=="illustrate the information graphically"||argument=="could you show the graph"||argument=="let see the graphical representation"*/)
                            {
                                graph();
                                feedback();
                                 }

                            else if (argument == "formula") {
                                
                                feedback_formula(formula);
                                
                                    
                                }
                            }

                            break;  
                            case 23:
                             cout<<"What Would you to do ??"<<endl;
                            cout<<"1. Press 'y' to Enter Data of choosen Country: "<<endl;
                            cout<<"2. Press 'n' to Simply show Data of choosen Country ( Already  Data Entered): "<<endl;
                            cin>>y_n;
                            if(y_n=='y'){
                                cout<<"Please Enter Basic Information about Malaysia : "<<endl;
                                input(Country_info23);
                                cout<<"---------------------------------------------------------------\n";
                                cout<<"PLease Enter GDP of Malaysia : "<<endl;
                                input_GDP(gdp_info23);
                                cout<<"========================================================\n";
                                cout<<"Would you like to view your Input Data ???"<<endl;
                                cout<<"========================================================\n";
                                cout<<"Press '1' to yes :"<<endl;
                                cout<<"Press '0' to No :"<<endl;
                                cin>>num;
                                switch(num){
                                    case '1':
                                    output(Country_info23);
                                    output_GDP(gdp_info23);
                                    feedback();
                                    break;
                                    case '0':
                                    feedback();
                                    break;
                                    default:
                                    cout<<"Error  !!!\n";
                                    break;

                                }
                                

                            }
                            else if(y_n=='n'){
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Malaysia' : "<<endl;
                            display(Country23);
                             cout<<"-------------------------------------------------"<<endl;
                            cout<<"Gross Domestic Product [GDP] of Malaysia"<<endl;
                            display_GDP(gdp23);
                            cout<<"=====================================================================\n";
                            cout<<"            => How to Calculate the GDP OF a Country\n";
                            cout<<"            => GDP OF Malaysia Graphically\n";
                            cout<<"=====================================================================\n";
                            cout<<"How can I help you : ";
                            cin>>argument;
                            
                            if(argument == "graph"/*||argument=="i need graph of gdp"||argument=="graphical respresentation"||argument=="show the graph of gdp"||argument=="display the chart"||argument=="present the visual representation"||argument=="exhibit the plotted data"||argument=="demonstrate the graph"||argument=="illustrate the information graphically"||argument=="could you show the graph"||argument=="let see the graphical representation"*/)
                            {
                                graph();
                                feedback();
                                 }

                            else if (argument == "formula") {
                                
                                feedback_formula(formula);
                                
                                    
                                }
                            }

                            break;  
                            case 24:
                             cout<<"What Would you to do ??"<<endl;
                            cout<<"1. Press 'y' to Enter Data of choosen Country: "<<endl;
                            cout<<"2. Press 'n' to Simply show Data of choosen Country ( Already  Data Entered): "<<endl;
                            cin>>y_n;
                            if(y_n=='y'){
                                cout<<"Please Enter Basic Information about Peru : "<<endl;
                                input(Country_info24);
                                cout<<"---------------------------------------------------------------\n";
                                cout<<"PLease Enter GDP of Peru : "<<endl;
                                input_GDP(gdp_info24);
                                cout<<"========================================================\n";
                                cout<<"Would you like to view your Input Data ???"<<endl;
                                cout<<"========================================================\n";
                                cout<<"Press '1' to yes :"<<endl;
                                cout<<"Press '0' to No :"<<endl;
                                cin>>num;
                                switch(num){
                                    case '1':
                                    output(Country_info24);
                                    output_GDP(gdp_info24);
                                    feedback();
                                    break;
                                    case '0':
                                    feedback();
                                    break;
                                    default:
                                    cout<<"Error  !!!\n";
                                    break;

                                }
                                

                            }
                            else if(y_n=='n'){
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Peru' : "<<endl;
                            display(Country24);
                             cout<<"-------------------------------------------------"<<endl;
                            cout<<"Gross Domestic Product [GDP] of Peru"<<endl;
                            display_GDP(gdp24);
                            cout<<"=====================================================================\n";
                            cout<<"            => How to Calculate the GDP OF a Country\n";
                            cout<<"            => GDP OF Peru Graphically\n";
                            cout<<"=====================================================================\n";
                            cout<<"How can I help you : ";
                            cin>>argument;
                            
                            if(argument == "graph"/*||argument=="i need graph of gdp"||argument=="graphical respresentation"||argument=="show the graph of gdp"||argument=="display the chart"||argument=="present the visual representation"||argument=="exhibit the plotted data"||argument=="demonstrate the graph"||argument=="illustrate the information graphically"||argument=="could you show the graph"||argument=="let see the graphical representation"*/)
                            {
                                graph();
                                feedback();
                                 }

                            else if (argument == "formula") {
                                
                                feedback_formula(formula);
                                
                                    
                                }
                            }

                            break;  
                            case 25:
                             cout<<"What Would you to do ??"<<endl;
                            cout<<"1. Press 'y' to Enter Data of choosen Country: "<<endl;
                            cout<<"2. Press 'n' to Simply show Data of choosen Country ( Already  Data Entered): "<<endl;
                            cin>>y_n;
                            if(y_n=='y'){
                                cout<<"Please Enter Basic Information about Pakistan : "<<endl;
                                input(Country_info25);
                                cout<<"---------------------------------------------------------------\n";
                                cout<<"PLease Enter GDP of Pakistan : "<<endl;
                                input_GDP(gdp_info25);
                                cout<<"========================================================\n";
                                cout<<"Would you like to view your Input Data ???"<<endl;
                                cout<<"========================================================\n";
                                cout<<"Press '1' to yes :"<<endl;
                                cout<<"Press '0' to No :"<<endl;
                                cin>>num;
                                switch(num){
                                    case '1':
                                    output(Country_info25);
                                    output_GDP(gdp_info25);
                                    feedback();
                                    break;
                                    case '0':
                                    feedback();
                                    break;
                                    default:
                                    cout<<"Error  !!!\n";
                                    break;

                                }
                                

                            }
                            else if(y_n=='n'){
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Pakistan' : "<<endl;
                            display(Country25);
                             cout<<"-------------------------------------------------"<<endl;
                            cout<<"Gross Domestic Product [GDP] of Pakistan"<<endl;
                            display_GDP(gdp25);
                            cout<<"=====================================================================\n";
                            cout<<"            => How to Calculate the GDP OF a Country\n";
                            cout<<"            => GDP OF Pakistan Graphically\n";
                            cout<<"=====================================================================\n";
                            cout<<"How can I help you : ";
                            cin>>argument;
                            
                            if(argument == "graph"/*||argument=="i need graph of gdp"||argument=="graphical respresentation"||argument=="show the graph of gdp"||argument=="display the chart"||argument=="present the visual representation"||argument=="exhibit the plotted data"||argument=="demonstrate the graph"||argument=="illustrate the information graphically"||argument=="could you show the graph"||argument=="let see the graphical representation"*/)
                            {
                                graph();
                                feedback();
                                 }

                            else if (argument == "formula") {
                                
                                feedback_formula(formula);
                                
                                    
                                }
                            }

                            break;  

                        }
                        break;
  //===================================================================================================//                      
                    case 2:
                        cout << "'Population'\n";

                        switch(country_name){
                            case 1:
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about United States : "<<endl;
                            display(Country1);
                            break;  
                            case 2:
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Russia' : "<<endl;
                            display(Country2);
                            break;  
                            case 3:
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'China' : "<<endl;
                            display(Country3);
                            break;  
                            case 4:
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'canada' : "<<endl;
                            display(Country4);
                            break;  
                            case 5:
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Brazil' : "<<endl;
                            display(Country5);
                            break;  
                            case 6:
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Australia' : "<<endl;
                            display(Country6);
                            break;  
                            case 7:
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'India' : "<<endl;
                            display(Country7);
                            break;  
                            case 8:
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Argentina' : "<<endl;
                            display(Country8);
                            break;  
                            case 9:
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Kazakhastan' : "<<endl;
                            display(Country9);
                            break;  
                            case 10:
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Algeria' : "<<endl;
                            display(Country10);
                            break;  
                            case 11:
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Saudia Arabia' : "<<endl;
                            display(Country11);
                            break;  
                            case 12:
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Mexico' : "<<endl;
                            display(Country12);
                            break;  
                            case 13:
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Indonesia' : "<<endl;
                            display(Country13);
                            break;  
                            case 14:
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'South Africa' : "<<endl;
                            display(Country14);
                            break;  
                            case 15:
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Afghanistan' : "<<endl;
                            display(Country15);
                            break;  
                            case 16:
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Japan' : "<<endl;
                            display(Country16);
                            break;  
                            case 17:
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Thailand' : "<<endl;
                            display(Country17);
                            break;  
                            case 18:
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Sweden' : "<<endl;
                            display(Country18);
                            break;  
                            case 19:
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Turkey' : "<<endl;
                            display(Country19);
                            break;  
                            case 20:
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Egypt' : "<<endl;
                            display(Country20);
                            break;  
                            case 21:
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'South Korea' : "<<endl;
                            display(Country21);
                            break;  
                            case 22:
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Chile' : "<<endl;
                            display(Country22);
                            break;  
                            case 23:
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Malaysia' : "<<endl;
                            display(Country23);
                            break;  
                            case 24:
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Peru' : "<<endl;
                            display(Country24);
                            break;  
                            case 25:
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Pakistan' : "<<endl;
                            display(Country25);
                            break;  

                        }
                        
                        break;
   //=================================================================================================//                     
                    
    //================================================================================================//                    
                    case 3:
                        cout << "'Industry'\n";

                        switch(country_name){
                            case 1:
                            industry();
                            
                            
                            break;  
                            case 2:
                           industry();
                            break;  
                            case 3:
                            industry();
                            break;  
                            case 4:
                            industry();
                            case 5:
                           industry();
                            case 6:
                            industry();
                            break;  
                            case 7:
                           industry();
                            break;  
                            case 8:
                          industry();
                            break;  
                            case 9:
                          industry();
                            break;  
                            case 10:
                          industry();
                            break;  
                            case 11:
                        industry();
                            break;  
                            case 12:
                           industry();
                            break;  
                            case 13:
                          industry();
                            break;  
                            case 14:
                           industry();
                            break;  
                            case 15:
                            industry();
                            break;  
                            case 16:
                            industry();
                            break;  
                            case 17:
                           industry();
                            break;  
                            case 18:
                          industry();
                            break;  
                            case 19:
                            industry();
                            break;  
                            case 20:
                           industry();
                            break;  
                            case 21:
                          industry();
                            break;  
                            case 22:
                          industry();
                            break;  
                            case 23:
                           industry();
                            break;  
                            case 24:
                            industry();
                            break;  
                            case 25:
                            industry();
                            break;  

                        }
                        break;
                }
                
                
                return 0;
            default:
                break;
        }
        }
    
    

    return 0;
}


void input(Country_info &Country){
    // Input information for the country by user 
    cout << "Country Information:" << endl;
    cout<<"--------------------------------------"<<endl<<endl;
    cout<<  "Name: " ;
    cin >> Country.name1 ;
    cout<<  "Location: "; 
    cin >> Country.location1 ;
    cout<<  "Area: " ;
    cin >> Country.area1 ;
    cout<<  "Capital: " ;
    cin >> Country.capital1 ;
    cout<<  "Language: "; 
    cin >> Country.language1 ;
    cout<<  "Currency: ";
    cin>> Country.currency1;
    

}


void input_GDP( GDP_info &gdp2){
    cout<<"===================================="<<endl;
    cout<<"GDP      => ";
    cin >> gdp2.GDP_value ;
    cout<<"GDP Rank => ";
    cin >> gdp2.GDP_growth ;
}
void output_GDP( GDP_info gdp2){
    cout<<"===================================="<<endl;
    cout<<"GDP      => ";
    cout <<gdp2.GDP_value <<endl;
    cout<<"GDP Rank => ";
    cout<< gdp2.GDP_growth << endl;
}
//==============================================================
void display(Country Country1){
    // Display information for the country
    cout << "Country Information:" << endl;
    cout<<"--------------------------------------"<<endl<<endl;
    cout << "Name: " << Country1.name << endl;
    cout << "Location: " << Country1.location << endl;
    cout << "Area: " << Country1.area << endl;
    cout << "Capital: " << Country1.capital << endl;
    cout << "Language: " << Country1.language << endl;
    cout<<  "Currency: "<< Country1.currency<<endl;
    

}
//================================================================
void output(Country_info Country){
    // output information for the country by user entered
    cout << "Country Information:" << endl;
    cout<<"--------------------------------------"<<endl<<endl;
    cout<<  "Name: " ;
    cout<< Country.name1<<endl ;
    cout<<  "Location: "; 
    cout<< Country.location1<<endl ;
    cout<<  "Area: " ;
    cout<< Country.area1<<endl ;
    cout<<  "Capital: " ;
    cout<< Country.capital1<<endl ;
    cout<<  "Language: "; 
    cout<< Country.language1<<endl ;
    cout<<  "Currency: ";
    cout<< Country.currency1<<endl;
    

}
//==============================================================
void display_GDP( GDP gdp){
    cout<<"===================================="<<endl;
    cout<<"GDP      => "<<gdp.GDP_value <<endl;
    cout<<"GDP Rank => "<<gdp.GDP_growth <<endl;
}
//======================================================================

void display_population(Population data){
    cout<<"===============================================================\n";
    cout<<"                        POPULATION                             \n";
    cout<<"===============================================================\n";
    cout<<"1.Population                : "<<data.population<<endl;
    cout<<"2.Population growth Rate    : "<<data.population_growth<<endl;
    cout<<"3.Birth Rate                : "<<data.birth_rate<<endl;
    cout<<"4.Death Rate                : "<<data.death_rate<<endl;
    cout<<"5.Effect of Over-Population : "<<data.effects<<endl;

}










