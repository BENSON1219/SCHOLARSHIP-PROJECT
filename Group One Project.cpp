#include<iostream>
#include<stdlib.h>
using namespace std;

void inputOptions();
void genderOptions();
void firstMenu();
int secondMenu();
void editFunction();
void result();
float counter = 0;
int input,input1,input2;
char gender;
float average, edit;
float attempt[5];
string sprinterName;

int main()
{   cout<< " --------------------------" <<endl;
    cout<< "| The Government of Kenya  |" <<endl;
	cout<< " --------------------------" <<endl<<""<<endl;
	cout<< "We are looking for short distance athletes,specifically 100-meter dash runners."<<endl;
	cout<< "A scholarship will be awarded to all eligible applicants. Applicants are required " <<endl;
	cout<< "to run the 100m sprint, five times. They are allowed sufficient rest between runs."<<endl;
	cout<< "Eligibility for the program is based on the average time taken."<<endl<<" "<<endl;
	cout<< "Press 1 to proceed and determine your eligibility. " <<endl<<"Press 0 to exit the program"<<endl;
	cin>>input;
	inputOptions();
    
  if(input==1)
  {   cout<<endl<<"----------"<<endl<<"Input your first name:"<<endl;
	  cin>>sprinterName;
	  cout<<"Please register your gender: [Enter M/F]"<<endl;
	  cin>>gender;
	  cout<<"----------"<<endl;
	  gender = toupper(gender);
	  genderOptions();
	   
	  system("cls");
      system ("color 0F"); 
      
      cout<< "Welcome "<<sprinterName<<"!"<<endl<<"-----------------"<<endl;
	  for(int i=0; i<5; i++)     
	       {cout<<"Enter sprint attempt  "<<i+1<<": ";
            cin>>attempt[i];
            counter++;
            average = (attempt[0]+attempt[1]+attempt[2]+attempt[3]+attempt[4])/counter;
            cout<<"Your current average time is: "<<average<<" seconds."<<endl<<endl; }	 
      cout<< "The total average time taken is: "<<average<<" seconds."<<endl;
	  cout<<"----------"<<endl<<endl;
      firstMenu();
      secondMenu();}
	
 else if (input==0)
     {cout<<endl<<"Thankyou. Goodbye!"<<endl;
	 return 0;}
	 
     cout<<endl<<"Thankyou. Goodbye!"<<endl; 
     return 1;
}
void inputOptions()
{	while(input!= 0 && input !=1)
    {   cout<< "Invalid option. Please try again."<<endl<<"----------"<<endl; 
        cout<< "Press 1 to proceed and determine your eligibility. " <<endl;
		cout<< "Press 0 to exit the program"<<endl;
		cin>>input;}   
}
void genderOptions()
{	while(gender != 'M' && gender != 'F')
    {   cout<< "Invalid gender option. Please try again."<<endl<<"----------"<<endl;
	    cout<< "Please register your gender: [Enter M/F]"<<endl;
	    cin>>gender;
	    gender = toupper(gender);
	    cout<<"----------"<<endl<<endl;}
}
void firstMenu()
{     cout<< "Press 1 to edit current records."<<endl;
      cout<< "Press 2 to view the current records."<<endl;
      cout<< "Press 3 to view the results."<<endl;
      cout<< "Press any other key to exit the program."<<endl;
      cin>>input1;
      cout << "----------"<<endl<<endl;
}
int secondMenu()
{  switch (input1)
    {  case 1:
    	while(input1==1)
	    {   cout<<"What attempt value do you wish to edit? [1,2,3,4,5]"<<endl;
  	        cin>>input2;
  	        editFunction();
  	        average = (attempt[0]+attempt[1]+attempt[2]+attempt[3]+attempt[4])/counter;
            cout<< "The new average time taken is: "<<average<<" seconds."<<endl;
            cout << "----------"<<endl<<endl;	
            firstMenu();
			secondMenu(); }
	   break;
	   
	   case 2:
	    cout<< "The first attempt is:"<<attempt[0]<<"seconds."<<endl<<endl;
	    cout<< "The second attempt is:"<<attempt[1]<<"seconds."<<endl<<endl;
	    cout<< "The third attempt is:"<<attempt[2]<<"seconds."<<endl<<endl;
	    cout<< "The fourth attempt is:"<<attempt[3]<<"seconds."<<endl<<endl;
	    cout<< "The fifth attempt is:"<<attempt[4]<<"seconds."<<endl<<endl;
	    firstMenu();
	    secondMenu();
	    break;
	   	
	   case 3:
	    result();
	    break;	   
	   
	   default:
	    cout<<endl<<"Thankyou. Goodbye!";     
        return 0;}
}
void editFunction()
{	switch (input2)
  	 {  case 1:
  	 	cout<<"The current value is: "<<attempt[0]<<" seconds."<<endl;
  	    cout<<"Enter sprint attempt 1:";
        cin>>attempt[0];
        break;
           
  	    case 2 :
  	    cout<<"The current value is: "<<attempt[1]<<" seconds."<<endl;
  	    cout<<"Enter sprint attempt 2:";
        cin>>attempt[1];
        break;
           
  		case 3:
  		cout<<"The current value is: "<<attempt[2]<<" seconds."<<endl;
  	    cout<<"Enter sprint attempt 3:";
        cin>>attempt[2];
        break;
           
  		case 4:
  		cout<<"The current value is: "<<attempt[3]<<" seconds."<<endl;
  	    cout<<"Enter sprint attempt 4:";
        cin>>attempt[3];
        break;
           
  		case 5:
  		cout<<"The current value is: "<<attempt[4]<<" seconds."<<endl;
  	    cout<<"Enter sprint attempt 5:";
        cin>>attempt[4];
	    break; 
  		 	
  		default:
  		cout<<"Invalid option.";
  		break;}
}
void result()
{  if (gender == 'M' && average<12)
	  {cout << "Congratulations "<<sprinterName<<"! You are eligible for the scholarship.";}	
   else if (gender == 'M' && average<13)
		   {cout<<"Almost there "<<sprinterName<<"! Train some more and try again after six months.";}				
   else if (gender == 'M'&& average>=13)
		   {cout<<"Sorry "<<sprinterName<<". You are not eligible for this program. Please try another sport or distance.";}
   else if (gender == 'F' && average<13)
		   {cout << "Congratulations "<<sprinterName<<"! You are eligible for the scholarship.";}		    
   else if (gender == 'F' && average<14)
		   {cout<<"Almost there "<<sprinterName<<"! Train some more and try again after six months.";}		
   else if (gender == 'F' && average>=14)
		   {cout<<"Sorry "<<sprinterName<<". You are not eligible for this program. Please try another sport or distance.";}
}
