#include<iostream>
#include<string>
using namespace std;

void INPUT_AQU( int*swim_time, int* run_time, string* unit);
void CALCULATION_AQU( int*swim_time, int* run_time,int*race_time, int *total_time);
void PRINT_AQU( int* race_time,int*total_time ,string* unit);

void INPUT_DUA( int*run1_time, int* bike_time, int* run_time, string* unit);
void CALCULATION_DUA( int*run1_time, int* bike_time, int* run_time,int*race_time, int *total_time);
void PRINT_DUA( int* race_time,int*total_time ,string* unit);

void INPUT_TRI( int*swim_time, int* bike_time, int* run_time, string* unit);
void CALCULATION_TRI( int*swim_time, int* bike_time, int* run_time,int*race_time, int *total_time);
void PRINT_TRI( int* race_time,int*total_time ,string* unit);

 int main() 
{
 	string suggest;
 	string unit[3]={"hours","minutes","seconds"};
 	int race_time[4];
 	int total_time[3];
	int swim_time[3],bike_time[3],run_time[3],run1_time[3];
	cout<<" Enter the type of race which you want to start: "<<endl;
	cout<<" The types are: \n ";
	cout<<"****** 1- Triathlon , 2- Duathlon , 3- Aquathlon ******\n ";
	cin>>suggest;
	
	if(suggest=="Trithlon"){
 INPUT_TRI(swim_time, bike_time, run_time, unit);
 cout<<endl;
 CALCULATION_TRI(swim_time, bike_time, run_time,race_time,total_time);
 PRINT_TRI( race_time, total_time , unit);
    }
    else if(suggest=="Aquathlon"){
 INPUT_AQU( swim_time, run_time, unit);
 cout<<endl;
 CALCULATION_AQU(swim_time, run_time,race_time,total_time);
 PRINT_AQU( race_time,total_time , unit);

	}
	else if(suggest=="Duathlon"){
INPUT_DUA(run1_time,bike_time,run_time,unit);
cout<<endl;
CALCULATION_DUA(run1_time, bike_time, run_time,race_time,total_time);
PRINT_DUA(race_time, total_time, unit);
	}
	return 0; 
}

//TRIATHLON
// first function for INPUT
void INPUT_TRI( int*swim_time, int* bike_time, int* run_time, string* unit )
{
 	for(int i=0; i<3; i++){
	cout<<" Enter the data for swim in "<<unit[i]<<" : ";
	cin>>swim_time[i];}
    for(int i=0 ; i<3; i++){
    	cout<<" Enter the data for bike in "<<unit[i]<<" : ";
    	cin>>bike_time[i];}
	for(int i=0; i<3; i++){
		cout<<" Enter the data for run in "<<unit[i]<<" : ";
		cin>>run_time[i];}
}

// 2nd function for calculation at the basis of 
// information which has been provided to convert 
// it in seconds ...	
 void CALCULATION_TRI(int* swim_time,int* bike_time,int* run_time,int* race_time,int* total_time)
{
 
 	for(int i=0; i<4; i++){
// 	    calculation for swiming
 		if(i==0){
 		race_time[i]=swim_time[i]*3600+swim_time[1]*60+swim_time[2];}
// 		calculation for bike
 		else if(i==1){
 		race_time[i]=bike_time[0]*3600+bike_time[i]*60+bike_time[2];
		 }
//		 calculation for run 
		else if(i==2){
		race_time[i]=run_time[0]*3600+run_time[1]*60+run_time[i];
		}
//		sumarize the calculation
		else if(i==3){
		race_time[i]=race_time[0]+race_time[1]+race_time[2];
		}
        }
//       for setting up the calculation and converting it in total 
//       time in hours minutes and seconds format....
       
        total_time[0]=race_time[0]/3600+race_time[1]/3600+race_time[2]/3600;
        total_time[1]=((race_time[0]%3600)/60+(race_time[1]%3600)/60+(race_time[2]%3600)/60)%60;
        total_time[2]=((race_time[0]%3600)%60+(race_time[1]%3600)%60+(race_time[2]%3600)%60)%60;   
}
// THIRD function for print
void PRINT_TRI( int* race_time,int* total_time ,string* unit)
{
		cout<<"\n Swim time: "<<race_time[0]/3600<<unit[0]<<" "
		<<(race_time[0]%3600)/60<<unit[1]<<" "<<(race_time[0]%3600)%60<<unit[2]<<endl;
		cout<<" bike time: "<<race_time[1]/3600<<unit[0]<<" "
		<<(race_time[1]%3600)/60<<unit[1]<<" "<<(race_time[1]%3600)%60<<unit[2]<<endl;
		cout<<" run time: "<<race_time[2]/3600<<unit[0]<<" "
		<<(race_time[2]%3600)/60<<unit[1]<<" "<<(race_time[2]%3600)%60<<unit[2]<<endl;
		cout<<" Total Time :  ";
		for(int i=0; i<3; i++){
			cout<<total_time[i]<<unit[i]<<" ";
		}

	}
	
//AQUATHLON
//SWIM AND RUN
//Input
void INPUT_AQU( int*swim_time, int* run_time, string* unit){
		for(int i=0; i<3; i++){
	cout<<" Enter the data for swim in "<<unit[i]<<" : ";
	cin>>swim_time[i];}
	for(int i=0; i<3; i++){
		cout<<" Enter the data for run in "<<unit[i]<<" : ";
		cin>>run_time[i];}
}
//Calcuation
void CALCULATION_AQU( int*swim_time, int* run_time,int*race_time, int *total_time){
		for(int i=0; i<4; i++){
// 	    calculation for swiming
 		if(i==0){
 		race_time[i]=swim_time[i]*3600+swim_time[1]*60+swim_time[2];
		 }
//		 calculation for run 
		else if(i==2){
		race_time[i]=run_time[0]*3600+run_time[1]*60+run_time[i];
		}
//		sumarize the calculation
		else if(i==3){
		race_time[i]=race_time[0]+race_time[2];
		}
        }
//       for setting up the calculation and converting it in total 
//       time in hours minutes and seconds format....
       
        total_time[0]=race_time[3]/3600;
        total_time[1]=((race_time[0]%3600)/60+(race_time[2]%3600)/60)%60;
        total_time[2]=race_time[3]%60;   
}
//Print
void PRINT_AQU( int* race_time,int*total_time ,string* unit){
	   	cout<<"\n Swim time: "<<race_time[0]/3600<<unit[0]<<" "
		<<(race_time[0]%3600)/60<<unit[1]<<" "<<(race_time[0]%3600)%60<<unit[2]<<endl;
		cout<<" run time: "<<race_time[2]/3600<<unit[0]<<" "
		<<(race_time[2]%3600)/60<<unit[1]<<" "<<(race_time[2]%3600)%60<<unit[2]<<endl;
		cout<<" Total Time :  ";
		for(int i=0; i<3; i++){
			cout<<total_time[i]<<unit[i]<<" ";
		}
}

// DUATHLON
//RUN BIKE RUN
//Input
void INPUT_DUA(int* run1_time , int* bike_time, int* run_time, string* unit)
{
	for(int i=0; i<3; i++){
	cout<<" Enter the data for first run in "<<unit[i]<<" : ";
	cin>>run1_time[i];}
    for(int i=0 ; i<3; i++){
    	cout<<" Enter the data for bike in "<<unit[i]<<" : ";
    	cin>>bike_time[i];}
	for(int i=0; i<3; i++){
		cout<<" Enter the data for 2nd run in "<<unit[i]<<" : ";
		cin>>run_time[i];}
}
//Calculation
void CALCULATION_DUA( int*run1_time, int* bike_time, int* run_time,int*race_time, int *total_time){
	for(int i=0; i<4; i++){
// 	    calculation for swiming
 		if(i==0){
 		race_time[i]=run1_time[i]*3600+run1_time[1]*60+run1_time[2];}
// 		calculation for bike
 		else if(i==1){
 		race_time[i]=bike_time[0]*3600+bike_time[i]*60+bike_time[2];
		 }
//		 calculation for run 
		else if(i==2){
		race_time[i]=run_time[0]*3600+run_time[1]*60+run_time[i];
		}
//		sumarize the calculation
		else if(i==3){
		race_time[i]=race_time[0]+race_time[1]+race_time[2];
		}
        }
//       for setting up the calculation and converting it in total 
//       time in hours minutes and seconds format....
       
        total_time[0]=race_time[3]/3600;
        total_time[1]=((race_time[0]%3600)/60+(race_time[1]%3600)/60+(race_time[2]%3600)/60)%60;
        total_time[2]=race_time[3]%60;   
}
//Print
void PRINT_DUA( int* race_time,int*total_time ,string* unit){
		cout<<"\n 1st run time: "<<race_time[0]/3600<<unit[0]<<" "
		<<(race_time[0]%3600)/60<<unit[1]<<" "<<(race_time[0]%3600)%60<<unit[2]<<endl;
		cout<<" bike time: "<<race_time[1]/3600<<unit[0]<<" "
		<<(race_time[1]%3600)/60<<unit[1]<<" "<<(race_time[1]%3600)%60<<unit[2]<<endl;
		cout<<" 2nd run time: "<<race_time[2]/3600<<unit[0]<<" "
		<<(race_time[2]%3600)/60<<unit[1]<<" "<<(race_time[2]%3600)%60<<unit[2]<<endl;
		cout<<" Total Time :  ";
		for(int i=0; i<3; i++){
			cout<<total_time[i]<<unit[i]<<" ";
		}

}
