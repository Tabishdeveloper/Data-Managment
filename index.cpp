#include <iostream>
#include <conio.h> // For _getch() function
using namespace std;

void printOptions(int selectedOption) {
    system("cls"); // Clear the console (for Windows)

    cout << "Select One of them :\n";
    cout << (selectedOption == 1 ? "> " : "  ") << "1. Gross Domestic Product [GDP]\n";
    cout << (selectedOption == 2 ? "> " : "  ") << "2. Population\n";
    cout << (selectedOption == 3 ? "> " : "  ") << "3. Agriculture\n";
    cout << (selectedOption == 4 ? "> " : "  ") << "4. Industry\n";
}
// STRUCTURE
struct Country {
    string name;
    string location;
    string area;
    string capital;
    string language;
};
struct Country_info {
    string name1;
    string location1;
    string area1;
    string capital1;
    string language1;
};
// FUNCIONS
void display( Country Country1); 
void input(Country_info &Country);
void output(Country_info Country);

//======================================================================================================
// STRUCTURE
struct GDP {
    string GDP_value;
    string GDP_rank;
};
struct GDP_info {
    string GDP_value;
    string GDP_rank;
};
// FUNCTIONS
void display_GDP( GDP gdp);
void input_GDP( GDP_info &gdp2);
void output_GDP( GDP_info gdp2);

//==========================================================================================================



int main() {
    char y_n;
    char num;
    int country_name;


    const int totalOptions = 4;
    int selectedOption = 1;
 //==============================================================================================================================================================//
    GDP gdp1 = {"23.32 Trillion USD (2021)"};
    GDP gdp2 = {"1.779 Trillion USD (2021)"};
    GDP gdp3 = {"17.73 Trillion USD (2021)"};
    GDP gdp4 = {"1.988 Trillion USD (2021)"};
    GDP gdp5 = {"1.609 Trillion USD (2021)"};
    GDP gdp6 = {"1.553 Trillion USD (2021)"};
    GDP gdp7 = {"3.176 Trillion USD (2021)"};
    GDP gdp8 = {"487.2 Billion  USD (2021)"};
    GDP gdp9 = {"197.1 Billion  USD (2021)"};
    GDP gdp10 = {"163 Billion  USD (2021)"};
    GDP gdp11 = {"833.5 Billion  USD (2021)"};
    GDP gdp12 = {"1.273 Trillion  USD (2021)"};
    GDP gdp13 = {"1.186 Trillion  USD (2021)"};
    GDP gdp14 = {"419 Billion  USD (2021)"};
    GDP gdp15 = {"14.79 Billion  USD (2021)"};
    GDP gdp16 = {"4.941 Trillion  USD (2021)"};
    GDP gdp17 = {"505.9 Billion  USD (2021)"};
    GDP gdp18 = {"635.7 Billion  USD (2021)"};
    GDP gdp19 = {"819 Billion  USD (2021)"};
    GDP gdp20 = {"404.1 Billion  USD (2021)"};
    GDP gdp21 = {"1.811 Trillion  USD (2021)"};
    GDP gdp22 = {"344.134 Billion  USD (2021)"};
    GDP gdp23 = {"373 Billion  USD (2021)"};
    GDP gdp24 = {"223.2 Billion  USD (2021)"};
    GDP gdp25 = {"348.3 Billion  USD (2021)"};

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
                        cout<<"====================================="<<endl;
                        
                        
                        
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
                                    break;
                                    case '0':
                                    cout<<"Thanks for using me\n";
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
                                    break;
                                    case '0':
                                    cout<<"Thanks for using me\n";
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
                                    break;
                                    case '0':
                                    cout<<"Thanks for using me\n";
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
                            }

                            break;  
                            case 4:cout<<"What Would you to do ??"<<endl;
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
                                    break;
                                    case '0':
                                    cout<<"Thanks for using me\n";
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
                                    break;
                                    case '0':
                                    cout<<"Thanks for using me\n";
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
                                    break;
                                    case '0':
                                    cout<<"Thanks for using me\n";
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
                            }

                            break;  
                            case 7:
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'India' : "<<endl;
                            display(Country7);
                             cout<<"-------------------------------------------------"<<endl;
                            cout<<"Gross Domestic Product [GDP] of India"<<endl;
                            display_GDP(gdp7);

                            break;  
                            case 8:
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Argentina' : "<<endl;
                            display(Country8);
                             cout<<"-------------------------------------------------"<<endl;
                            cout<<"Gross Domestic Product [GDP] of Argentina"<<endl;
                            display_GDP(gdp8);

                            break;  
                            case 9:
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Kazakhastan' : "<<endl;
                            display(Country9);
                             cout<<"-------------------------------------------------"<<endl;
                            cout<<"Gross Domestic Product [GDP] of Kazakhastan"<<endl;
                            display_GDP(gdp9);


                            break;  
                            case 10:
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Algeria' : "<<endl;
                            display(Country10);
                             cout<<"-------------------------------------------------"<<endl;
                            cout<<"Gross Domestic Product [GDP] of Algeria"<<endl;
                            display_GDP(gdp10);

                            break;  
                            case 11:
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Saudia Arabia' : "<<endl;
                            display(Country11);
                             cout<<"-------------------------------------------------"<<endl;
                            cout<<"Gross Domestic Product [GDP] of Saudia Arabia"<<endl;
                            display_GDP(gdp11);

                            break;  
                            case 12:
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Mexico' : "<<endl;
                            display(Country12);
                             cout<<"-------------------------------------------------"<<endl;
                            cout<<"Gross Domestic Product [GDP] of Mexico"<<endl;
                            display_GDP(gdp12);

                            break;  
                            case 13:
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Indonesia' : "<<endl;
                            display(Country13);
                             cout<<"-------------------------------------------------"<<endl;
                            cout<<"Gross Domestic Product [GDP] of Indonesia"<<endl;
                            display_GDP(gdp13);

                            break;  
                            case 14:
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'South Africa' : "<<endl;
                            display(Country14);
                             cout<<"-------------------------------------------------"<<endl;
                            cout<<"Gross Domestic Product [GDP] of South Africa"<<endl;
                            display_GDP(gdp14);

                            break;  
                            case 15:
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Afghanistan' : "<<endl;
                            display(Country15);
                             cout<<"-------------------------------------------------"<<endl;
                            cout<<"Gross Domestic Product [GDP] of Afghanistan"<<endl;
                            display_GDP(gdp15);

                            break;  
                            case 16:
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Japan' : "<<endl;
                            display(Country16);
                             cout<<"-------------------------------------------------"<<endl;
                            cout<<"Gross Domestic Product [GDP] of Japan"<<endl;
                            display_GDP(gdp16);

                            break;  
                            case 17:
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Thailand' : "<<endl;
                            display(Country17);
                             cout<<"-------------------------------------------------"<<endl;
                            cout<<"Gross Domestic Product [GDP] of Thailand"<<endl;
                            display_GDP(gdp17);

                            break;  
                            case 18:
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Sweden' : "<<endl;
                            display(Country18);
                             cout<<"-------------------------------------------------"<<endl;
                            cout<<"Gross Domestic Product [GDP] of Sweden"<<endl;
                            display_GDP(gdp18);

                            break;  
                            case 19:
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Turkey' : "<<endl;
                            display(Country19);
                             cout<<"-------------------------------------------------"<<endl;
                            cout<<"Gross Domestic Product [GDP] of Turkey"<<endl;
                            display_GDP(gdp19);

                            break;  
                            case 20:
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Egypt' : "<<endl;
                            display(Country20);
                             cout<<"-------------------------------------------------"<<endl;
                            cout<<"Gross Domestic Product [GDP] of Egypt"<<endl;
                            display_GDP(gdp20);

                            break;  
                            case 21:
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'South Korea' : "<<endl;
                            display(Country21);
                             cout<<"-------------------------------------------------"<<endl;
                            cout<<"Gross Domestic Product [GDP] of South Korea"<<endl;
                            display_GDP(gdp21);

                            break;  
                            case 22:
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Chile' : "<<endl;
                            display(Country22);
                             cout<<"-------------------------------------------------"<<endl;
                            cout<<"Gross Domestic Product [GDP] of Chile"<<endl;
                            display_GDP(gdp22);

                            break;  
                            case 23:
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Malaysia' : "<<endl;
                            display(Country23);
                             cout<<"-------------------------------------------------"<<endl;
                            cout<<"Gross Domestic Product [GDP] of Malaysia"<<endl;
                            display_GDP(gdp23);

                            break;  
                            case 24:
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Peru' : "<<endl;
                            display(Country24);
                             cout<<"-------------------------------------------------"<<endl;
                            cout<<"Gross Domestic Product [GDP] of Peru"<<endl;
                            display_GDP(gdp24);

                            break;  
                            case 25:
                            cout<<"-------------------------------------------------"<<endl;
                            cout<<"Basic Information about 'Pakistan' : "<<endl;
                            display(Country25);
                             cout<<"-------------------------------------------------"<<endl;
                            cout<<"Gross Domestic Product [GDP] of Pakistan"<<endl;
                            display_GDP(gdp25);

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
                    case 3:
                        cout << "Agriculture\n";

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
    //================================================================================================//                    
                    case 4:
                        cout << "'Industry'\n";

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
    

}


void input_GDP( GDP_info &gdp2){
    cout<<"===================================="<<endl;
    cout<<"GDP      => ";
    cin >> gdp2.GDP_value ;
    cout<<"GDP Rank => ";
    cin >> gdp2.GDP_rank ;
}
void output_GDP( GDP_info gdp2){
    cout<<"===================================="<<endl;
    cout<<"GDP      => ";
    cout <<gdp2.GDP_value <<endl;
    cout<<"GDP Rank => ";
    cout<< gdp2.GDP_rank << endl;
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
    

}
//==============================================================
void display_GDP( GDP gdp){
    cout<<"===================================="<<endl;
    cout<<"GDP      => "<<gdp.GDP_value <<endl;
    cout<<"GDP Rank => "<<gdp.GDP_rank <<endl;
}










