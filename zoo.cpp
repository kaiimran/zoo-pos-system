#include <iostream>
#include <cmath>
#include <cstring>
#include <conio.h>
#include <string.h>
#include <iomanip>
#include <windows.h>

using namespace std ;

int setStatus(); /* value returning function that will return the status*/

void displayCitizen(); // citizen price list //
void displayNonCitizen(); // nonCitizen price list //
void displayAddOn(); // Add-On price list //

void inputCitizen(int&,int&);
void inputNonCitizen(int&,int&);

void statisticNC(int,int,int,int,double);

double tax, netProfit, grossProfit, sumNetProfit=0, sumTax=0, sumGrossProfit=0, taxStatistic, buyer=0, buyer1=0;


int countAdult=0, countNumVisitor=0, countChild=0, countSenior=0, countOku=0, countFamily=0, countSchool=0, countGroupPack=0, countTourist=0, countTouristPack=0;
int countAnimalShow=0, countBirdPark=0, countTrain=0, countTourGuide=0, countPhoto=0, countAnimalFeed=0, countSouvenir=0, countAddOn=0;

int sumAdult=0, sumChild=0, sumSenior=0, sumOku=0, sumFamily=0, sumSchool=0, sumGroupPack=0, sumAdmissionFee=0, sumTourist=0, sumTouristPack=0;
int sumAnimalShow=0, sumBirdPark=0, sumTrain=0, sumTourGuide=0, sumPhoto=0, sumAnimalFeed=0, sumSouvenir=0, sumAddOn=0 ;

int totalAdult , totalChild , totalSenior ,  totalOku , totalFamily , totalSchool , totalGroupPack , admissionFee ;
int adult , child , senior , oku , family , school , groupPack , adultFamily , childFamily ;

int tourist , totalTourist , touristPack , totalTouristPack ;

char animalShow, birdPark, train, tourGuide, statusAnimalShow[10], statusBirdPark[10], statusTrain[10], statusTourGuide[10] ;
int photo, animalFeed, souvenir, totalAnimalShow, totalBirdPark, totalTrain, totalTourGuide, totalPhoto, totalAnimalFeed, totalSouvenir ;


int checkpoint1 , checkpoint2 , citizenship , familyStatus , check  , addOnStatus, totalAddOn,  sureNoAddOn , invalid , repeatAll , end ;
int numFamily , numVisitor ;

int main () // main module to call all related module //
{
	
	int status , user , buyer=0, buyer1=0; 
	
	for(user=1 ; user>=1 ; user++)
	{	
		status = setStatus(); 
		
		do
		{
			if (status==1)
			    {
			
			cout << endl << " HELLO VISITOR #" << user << endl ;
			cout << endl << " Are you a Malaysian Citizen ? " << endl ;
			cout << endl << "          " << " ------------------------------- " <<  " ------------------------------- " ;
			cout << endl << "          " << " |    PRESS 1 FOR CITIZEN      |"  <<  "  |   PRESS 2 FOR NON-CITIZEN   | " ;
			cout << endl << "          " << " ------------------------------- " <<  " ------------------------------- " << endl ;
			cout << endl << "=========>" << " PLEASE CHOOSE CAREFULLY SINCE THERE IS NO TURNING POINT PASS HERE <==========  " ;
			cout << endl << " -----> :  " ;
			cin >> citizenship ;
			
		        }
		        
		        else if (status==2)
		        {
		        	
		        	cout << "_______________________________________________________________________________________________" << endl ;
					cout << "                                                                                               " << endl ;
				    cout << " ************************************ STAFF MODE **********************************************" << endl ;
				    cout << "_______________________________________________________________________________________________" << endl << endl;
		        	cout << endl << "                             ! HELLO BELOVED ZOO D'NIRVANA STAFF !" << endl ;
					cout << endl << "          " << " --------------------------------- " <<  " ------------------------------------- " ;
					cout << endl << "          " << " | PRESS 1 FOR CITIZEN STATISTIC |"  <<  " | PRESS 2 FOR NON CITIZEN STATISTIC | " ;
					cout << endl << "          " << " --------------------------------- " <<  " ------------------------------------- " << endl ;
					cout << endl << "=========>" << " PLEASE CHOOSE CAREFULLY SINCE THERE IS NO TURNING POINT PASS HERE <==========  " ;
					cout << endl << " -----> :  " ;
					cin >> citizenship ;
		        	
				}
	
					if (citizenship==1) // citizen //
					{
						if(status==1)
						{
							displayCitizen();
							inputCitizen(status,user);
							system("cls");
						
						    cout << " ************************* ENJOY YOUR TRIP HERE! ****************************** " << endl ;
						}
						else if(status==2)
						{
							inputCitizen(status,user);
						}

						
						
						system("pause");
						system("cls");
						
						
						
					}
					else if (citizenship==2) // non-citizen //
					{
						if(status==1)
						{
							displayNonCitizen();
							displayAddOn();
							inputNonCitizen(status,user);
							system("cls");
						
						    cout << " ************************* ENJOY YOUR TRIP HERE! ****************************** " << endl ;
						}
						else if(status==2)
						{
							inputNonCitizen(status,user);
						}
						
						
						
						
						system("pause");
						system("cls");
						
						
					}
					else 
					{
						Beep(1000,500);
						cout << endl <<  "**** INVALID INPUT . PLEASE RE-ENTER ****" << endl << endl  ;
						
						system("pause");
						system("cls");
					}
								
	  	}while(citizenship!=1 && citizenship!=2);
    }
	 
	 cout << endl << endl << " ===================================  HAVE A NICE DAY ! ================================= " ;
}

int setStatus() 
{
	int a ;
	
	cout << " ==================================================================================== " << endl ;
	cout << "                               WELCOME TO ZOO D'NIRVANA                               " << endl ;
	cout << " ==================================================================================== " << endl ; 
	
	cout << endl << "          " << " ------------------------------- "  <<  " ------------------------------- " ;
	cout << endl << "          " << " |       PRESS 1 TO BUY        | "  <<  " |    PRESS 2 FOR STAFF MODE   | " ;
	cout << endl << "          " << " ------------------------------- "  <<  " ------------------------------- " ;
	cout << endl << " -----> :  " ;
	cin >> a ;
	system("cls");
	
	while (a>2 || a<1)
	{
	 Beep(1000,500);
	 cout << " ==================================================================================== " << endl ;
	 cout << "                               WELCOME TO ZOO D'NIRVANA                               " << endl ;
	 cout << " ==================================================================================== " << endl ; 
	
	 cout << endl << "          " << " ------------------------------- "  <<  " ------------------------------- " ;
	 cout << endl << "          " << " |       PRESS 1 TO BUY        | "  <<  " |    PRESS 2 FOR STAFF MODE   | " ;
	 cout << endl << "          " << " ------------------------------- "  <<  " ------------------------------- " ;
	 cout << endl << " -----> :  " ;
	 cin >> a ;
	 system("cls");
		
	}
	
	return a;
}

void displayCitizen() // citizen price list //
{
	cout << endl << "                                               " << "                 -----------------------------" ; 
	cout << endl << "                                               " << "                 $$ PRICE LIST FOR CITIZEN $$ " << endl ;
    cout << endl << "                                               " << "                 -----------------------------" ;
    
	    	cout << endl << "                                          " << "                               NORMAL PRICE                   " ;
	        cout << endl << "                                          " << "----------------------------------------------------------------------" ;
	    	cout << endl << "                                          " << "|             TICKET TYPE            |        TICKET PRICE (RM)      |" ;
	    	cout << endl << "                                          " << "----------------------------------------------------------------------" ;
	    	cout << endl << "                                          " << "|                Adult               |              30.00            |" ;
	    	cout << endl << "                                          " << "|         Child [12 and below]       |              15.00            |" ;
	    	cout << endl << "                                          " << "|    Senior Citizen [60 and above]   |              15.00            |" ; 
	    	cout << endl << "                                          " << "|        OKU [ with OKU CARD ]       |              20.00            |" ;
	        cout << endl << "                                          " << "----------------------------------------------------------------------" ;
	        
	        cout << endl ;
	        
	        cout << endl << "          " << "                 FAMILY PACKAGE [ RM70 per pax ]                   " << "        " << "                 GROUP PACKAGE [ RM25 per person ]                 " ;
	        cout << endl << "          " << "-----------------------------------------------------------------" << "        " << "-----------------------------------------------------------------" ;
	        cout << endl << "          " << "|                                                               |" << "        " << "|                                                               |" ;
	        cout << endl << "          " << "|               4 PEOPLE WITH MAXIMUM 2 ADULTS                  |" << "        " << "|                        MINIMUM 4 PERSON                       |" ;
	        cout << endl << "          " << "|          [ Extra person must follow normal price ]            |" << "        " << "|                                                               |" ;
	        cout << endl << "          " << "|  Suitable package for family who want to enjoy everything we  |" << "        " << "|    Suitable for a group of friends who want to have the full  |" ;
			cout << endl << "          " << "|                       have to offer!                          |" << "        " << "|                    experience at our zoo!                     |" ;
			cout << endl << "          " << "|                                                               |" << "        " << "|                                                               |" ; 
	        cout << endl << "          " << "-----------------------------------------------------------------" << "        " << "-----------------------------------------------------------------" ;
	        
	        cout << endl ;
	        
	        cout << endl << "                                             " << "                SCHOOL PACKAGE [ RM10 per person ]               " ;
	        cout << endl << "                                             " << "-----------------------------------------------------------------" ;
	        cout << endl << "                                             " << "|                                                               |" ;
	        cout << endl << "                                             " << "|                   MINIMUM 30 PERSON PER TRIP                  |" ;
	        cout << endl << "                                             " << "|     Price for students and accompanying adult are the same    |" ;
	        cout << endl << "                                             " << "|                                                               |" ;
	        cout << endl << "                                             " << "-----------------------------------------------------------------" ;
	        
	        cout << endl << endl ;
	        
	        system("PAUSE");
	
}

void displayNonCitizen()
{
	cout << endl << "          " << "                                                       WELCOME TO MALAYSIA ! " << endl ;
	
	cout << endl << "                                          " << "                 $$ PRICE LIST FOR NON-CITIZEN $$                " ;
	cout << endl << "                                          " << "-----------------------------------------------------------------" ;
	cout << endl << "                                          " << "|                                                               |" ;
	cout << endl << "                                          " << "|                TOURIST     [ RM 60 per person ]               |" ;
	cout << endl << "                                          " << "|      ---> Only for admission fee without any add-on <---      |" ;
	cout << endl << "                                          " << "|                                                               |" ;
	cout << endl << "                                          " << "|---------------------------------------------------------------|" ;
	cout << endl << "                                          " << "|                                                               |" ;
	cout << endl << "                                          " << "|             TOURIST PACK     [ RM 128 per person ]            |" ;
	cout << endl << "                                          " << "|                     [ MINIMUM 2 PERSON ]                      |" ;
	cout << endl << "                                          " << "|      ---> Include all add-on activities + tour guide <---     |" ;
	cout << endl << "                                          " << "|                                                               |" ;
	cout << endl << "                                          " << "-----------------------------------------------------------------" ; 
	
	cout << endl << endl ;
	system("pause");
}

void displayAddOn()
{
	cout << endl << "                                             " << "       --------------------------------------------------" ;
	cout << endl << "                                             " << "       $$ PRICE LIST FOR ADD-ON ACTIVITIES [OPTIONAL] $$ " << endl ;
	cout << endl << "                                             " << "       --------------------------------------------------" ;
	        
	        cout << endl ;
	        
	        cout << endl << "          " << "                 GRAND ANIMAL SHOW [ RM 10 per person ]             " << "          " << "             JURASSIC BIRD PARK [ RM 10 per person ]" ;
	        cout << endl << "          " << "-----------------------------------------------------------------" << "          " << "-----------------------------------------------------------------" ;
	        cout << endl << "          " << "|               TIME : Daily at 11:00 am & 3.00 pm              |" << "          " << "|          Closed bird park with various bird species from      |" ;
	        cout << endl << "          " << "|        Multi performance by all the animal in the zoo!        |" << "          " << "|                       all around the world!                   |" ;
	        cout << endl << "          " << "|                                                               |" << "          " << "|                     [Free Bird Feeding Pack ]                 |" ;
			cout << endl << "          " << "-----------------------------------------------------------------" << "          " << "-----------------------------------------------------------------" ;
			      
	        cout << endl ;
	        
	        cout << endl << "          " << "         PHOTO SESSION WITH EXOTIC ANIMAL [ RM 5 per photo ]" << "          " << "                         ANIMAL FEEDING [ RM 8 per sack ]" ;
			cout << endl << "          " << "-----------------------------------------------------------------" << "          " << "-----------------------------------------------------------------" ;
	        cout << endl << "          " << "|    Grab your chance to have a picture together with various   |" << "          " << "|     Enjoy the experience of feeding animals such as horse     |" ;
	        cout << endl << "          " << "|    exotic animal such as ferret , chameleon and many more !   |" << "          " << "|                 deer , giraffe and many more!                 |" ;
	        cout << endl << "          " << "|           [ Extra printed photo will be charged RM 5 ]        |" << "          " << "|                                                               |" ;
	        cout << endl << "          " << "-----------------------------------------------------------------" << "          " << "-----------------------------------------------------------------" ;
			       
			cout << endl ;
			
			cout << endl << "          " << "               TICKET TRAIN [ RM 10 per person ]      " << "          " << "                             SOUVENIR PACK [ RM 20 per pack ]" ;
			cout << endl << "          " << "-----------------------------------------------------------------" << "          " << "-----------------------------------------------------------------" ;
	        cout << endl << "          " << "| Embark with us on a ride with our mini train around the zoo   |" << "          " << "|  The souvenir pack consists of T-shirt , Umbrella , Keychain  |" ;
	        cout << endl << "          " << "|                  without breaking a sweat!                    |" << "          " << "|          Fridge Magnet , Water Bottle and Tote bag!           |" ;
	        cout << endl << "          " << "|          [ The train will stop at every checkpoint ]          |" << "          " << "|                 [1 piece for every souvenir]                  |" ; 
			cout << endl << "          " << "-----------------------------------------------------------------" << "          " << "-----------------------------------------------------------------" ;
			

		    cout << endl ;
		    
		    cout << endl << "                                             " << "                PERSONAL TOUR GUIDE [ RM 40 ] " ;
			cout << endl << "                                             " << "-----------------------------------------------------------------" ;
	        cout << endl << "                                             " << "|     A tour guide will accompany you to explore every          |" ;
	        cout << endl << "                                             " << "|crook and nanny of the zoo while sharing the facts and history |" ;
	        cout << endl << "                                             " << "|        of the animal to gain the ultimate experience          |" ;
			cout << endl << "                                             " << "-----------------------------------------------------------------" ;
			
			cout << endl << endl ;
			system("pause");
}

void inputCitizen (int& status, int& user)
{
	
	if (status==1) // visitor mode //
	{
		do // repeat all input for ticket price & add-on //
		{
		
			checkpoint1 = 2 ;
			
			while(checkpoint1==2) // loop for input citizen correction //
			{
				cout << endl << endl << "PLEASE CHOOSE TICKET ACCORDING TO THE CATEGORY . YOU WILL NOT ABLE TO ENTER THE ZOO WITH WRONG TICKET CATEGORY " ;
			    cout << endl << "-------------------------------------------------------------------------------------------------------------- " ;
				
			    cout << endl << endl << " Would you like to take the [Normal Price] or [Package] ? " ;
			    cout << endl  << endl << " [ Press 1 for NORMAL PRICE ] ------- [ Press 2 for SPECIAL PACKAGE ] " ;
			    cout << endl << endl << " -------> : " ;
			    cin >> check ;
			    
			    
				if(check==1)
				   {
					family = 0 , school = 0 , groupPack = 0; // to reset the choice to do correction //
					
					cout << endl << endl << " !! Press [0] for the unwanted ticket category !!" << endl ;
					cout << endl << endl << " NUMBER OF ADULT TICKET : " ;
		            cin >> adult ;
		            
						 while (adult < 0)
						 {
							Beep(1000,500) ;
					        cout << endl << endl << " ******************************************************************************** " ;
					       	cout << endl << endl << "              !! INVALID AMOUNT OF PEOPLE FOR ADULT !!  " ;
						   	cout << endl << "                                Please re-enter                     " ;
						   	cout << endl << " ********************************************************************************  " ;
						   	
						   	cout << endl << endl << " NUMBER OF ADULT TICKET : " ;
						    cin >> adult ;
						 }
						 
		            cout << endl << " NUMBER OF CHILD TICKET : " ;
		            cin >> child ;
		            
		                while (child < 0)
						 {
							Beep(1000,500) ;
					        cout << endl << endl << " ******************************************************************************** " ;
					       	cout << endl << endl << "              !! INVALID AMOUNT OF PEOPLE FOR CHILD !!  " ;
						   	cout << endl << "                                Please re-enter                     " ;
						   	cout << endl << " ********************************************************************************  " ;
						   	
						   	cout << endl << endl << " NUMBER OF CHILD TICKET : " ;
						    cin >> child ;
						 }
		            
		            
		            cout << endl << " NUMBER OF SENIOR CITIZEN TICKET : " ;
		            cin >> senior ;
		                 
						while (senior < 0)
						 {
							Beep(1000,500) ;
					        cout << endl << endl << " ******************************************************************************** " ;
					       	cout << endl << endl << "              !! INVALID AMOUNT OF PEOPLE FOR SENIOR CITIZEN !!  " ;
						   	cout << endl << "                                Please re-enter                     " ;
						   	cout << endl << " ********************************************************************************  " ;
						   	
						   	cout << endl << endl << " NUMBER OF SENIOR CITIZEN TICKET : " ;
						    cin >> senior ;
						 }           
		                
		            cout << endl << " NUMBER OF DISABLE [ WITH OKU CARD ] TICKET : " ;
		            cin >> oku ;
					     
						 while (oku < 0)
						 {
							Beep(1000,500) ;
					        cout << endl << endl << " ******************************************************************************** " ;
					       	cout << endl << endl << "              !! INVALID AMOUNT OF PEOPLE FOR DISABLE !!  " ;
						   	cout << endl << "                                Please re-enter                     " ;
						   	cout << endl << " ********************************************************************************  " ;
						   	
						   	cout << endl << endl << " NUMBER OF DISABLE [ WITH OKU CARD ] TICKET : " ;
						    cin >> oku ;
						 }
						 
				}
				else if(check==2)
				{
					adult = 0 , child = 0, senior = 0 , oku = 0 ; // to reset the data to do correction //
					
					cout << endl << endl << " TICKET FOR FAMILY PACKAGE [Press 1 for YES | Press 2 for NO]: ";
		            cin >> familyStatus;
		            
		            
		            if(familyStatus == 1)
		            {
		            	family = 1 ;
			            cout << endl << endl << " !! Press [0] for unwanted ticket package !!" << endl ;
			            cout << endl << " +++++ FAMILY PACKAGE +++++ " ;
			            cout << endl << endl << " NUMBER OF ADULT : " ;
			            cin >> adultFamily ;
			            cout << endl << " NUMBER OF CHILD : "  ;
			            cin >> childFamily ;
			            cout << endl ;
			            
			            
			            numFamily = adultFamily + childFamily;
			            
			            
			                while(adultFamily>2 || adultFamily==0 )
			                {
			                	
								
			                	Beep(1000,500);
			                	cout << endl << endl << endl << endl << " ******************************************************************************** " ;	
					         	cout << endl << endl << "               !! INVALID AMOUNT OF PEOPLE FOR FAMILY PACKAGE !!  " ;
						        cout << endl << "                                   Please re-enter                     " ;
						        cout << endl << endl << " ******************************************************************************** " ;
						        cout << endl << " +++++ FAMILY PACKAGE +++++ " ;
			                    cout << endl << endl << " NUMBER OF ADULT : " ;
			                    cin >> adultFamily ;
			                    cout << endl << " NUMBER OF CHILD : "  ;
			                    cin >> childFamily ;
			                    cout << endl ;
			                    
			                    
			                    
					                    if(childFamily == 0 && adultFamily == 0) // if no input entered //
					                     {
					                     	family = 0 ;
										 }
										 else
										 {
										 	family = 1 ;
										 }
										 
					       }
							
					}
		           
					
		            cout << endl << " NUMBER OF PEOPLE FOR SCHOOL PACKAGE TICKET [[ MINIMUM 30 PERSON PER TRIP ]]  : " ;
		            cin >> school ;
		            
		            while (school<30&&school>0)
					{
					Beep(1000,500) ;
					cout << endl << endl << endl << endl << " ******************************************************************************** " ;	
					cout << endl << endl << "               !! INVALID AMOUNT OF PEOPLE FOR SCHOOL PACKAGE TICKET !!  " ;
					cout << endl << "                                   Please re-enter                     " ;
					cout << endl << endl << " ******************************************************************************** " ;
		            cout << endl << endl << endl << endl << " NUMBER OF PEOPLE FOR SCHOOL PACKAGE TICKET [[ MINIMUM 30 PERSON PER TRIP ]]  : " ;
		            cin >> school ;
		            
		            } 
					
		            
		            cout << endl << " NUMBER OF PEOPLE FOR GROUP PACK [[ MINIMUM 4 PERSON PER GROUP ]]: " ;
		            cin >> groupPack ;
		            
		            while (groupPack<4&&groupPack>0)
		            {
		            	Beep(1000,500) ;
		            	cout << endl << endl << endl << endl << " ******************************************************************************** " ;
		            	cout << endl << endl << "              !! INVALID AMOUNT OF PEOPLE FOR GROUP PACK TICKET !!  " ;
				     	cout << endl << "                                Please re-enter                     " ;
				     	cout << endl << " ********************************************************************************  " ;
		            	cout << endl << endl << endl << endl << " NUMBER OF PEOPLE FOR GROUP PACK [[ MINIMUM 2 PERSON PER GROUP ]]: " ;
		            	
		                cin >> groupPack ;
		            	
					}
					
				} 
				
				if(numFamily>4)
				{	    
				   if (adultFamily==1)
		               {
		               	child = childFamily-3;
		               	numFamily=4 ;
					   }
					   else if (adultFamily==2)
					   {
					   	child = childFamily - 2;
					   	numFamily=4 ;
					   }
					   else
					   {
					   	child = 0 ;
					   }
		     	}
			
					
				numVisitor = adult + child + senior + oku + numFamily + school + groupPack; 
	            countNumVisitor = countNumVisitor + numVisitor ;
	            
				totalAdult = adult * 30 ;
				sumAdult = sumAdult + totalAdult;
				countAdult = countAdult + adult;
				
			    totalChild = child * 15 ;
			    sumChild = sumChild + totalChild;
			    countChild = countChild + child ;
			    
	            totalSenior = senior * 15 ;
	            sumSenior = sumSenior + totalSenior;
	            countSenior = countSenior + senior;
	            
	            totalOku = oku * 20 ;
	            sumOku = sumOku + totalOku;
	            countOku = countOku + oku;
	            
				totalFamily = family * 70;
				sumFamily = sumFamily + totalFamily;
				countFamily = countFamily + numFamily;
	            
				totalSchool = school * 10 ;
				sumSchool = sumSchool + totalSchool;
				countSchool = countSchool + school;
				
	            totalGroupPack = groupPack * 25 ;
	            sumGroupPack = sumGroupPack + totalGroupPack;
	            countGroupPack = countGroupPack + groupPack;
	            
	            admissionFee = (totalAdult+totalChild+totalSenior+totalOku+totalSchool+totalGroupPack+totalFamily) ;
	            sumAdmissionFee = sumAdmissionFee + admissionFee ;
				  
	            
	            cout << endl << endl << "                                     CONFIRMATION                                 " ;
	            cout << endl << "__________________________________________________________________________________" ;
	            cout << endl << endl << " ------ PLEASE MAKE SURE THE NUMBER OF TICKET FOR EACH CATEGORY IS CORRECT ------ " ;
	            cout << endl << "__________________________________________________________________________________" ;
	            
				cout << endl << endl <<  " Adult Ticket                  : " << adult << " X RM 30 per person = RM " << totalAdult ;
				cout << endl << " Child / Senior Citizen Ticket : " << (senior+child) << " X RM 15 per person = RM " << (totalChild+totalSenior) ;
				cout << endl << " Disable  (WITH OKU CARD)      : " << oku << " X RM 20 per person = RM " << totalOku ;
				cout << endl << " Family Pack Ticket            : " << family << " X RM 70 per pack   = RM " << totalFamily ;
				cout << endl << " School Pack Ticket            : " << school << " X RM 10 per person = RM " << totalSchool ;
				cout << endl << " Group Pack Ticket             : " << groupPack << " X RM 25 per person = RM " << totalGroupPack ;
				cout << endl << " ------------------------------ -------------------------------- " ;
				cout << endl << " TOTAL PAYMENT                 : " << "                     = RM " << admissionFee;
				cout << endl << "                                                      ==========" ;
			
				
				cout << endl << endl << endl << "------------------------- CONTINUE WITH YOUR TRANSACTION ?--------------------------  " << endl ;
			    cout << endl << "          " << " ------------------------------- "  <<  " ------------------------------- " ;
	            cout << endl << "          " << " |    PRESS 1 TO CONTINUE      | "  <<  " |   PRESS 2 FOR CORRECTION    | " ;
	            cout << endl << "          " << " ------------------------------- "  <<  " ------------------------------- " ;
	            cout << endl << "          " << " ========> : " ;
	            cin >> checkpoint1 ;
	            
				}

			
			checkpoint2 =2 ;
			
			while(checkpoint2==2) // loop for add-on correction //
			{
				do
				{
				displayAddOn();
				
				
				
				cout << endl << endl << " Would you like to include add-on activities ? [Press 1 for YES | Press 2 for NO] : ";
				cin >> addOnStatus;
					
				    if(addOnStatus==1)
				      	{
				      		
                          cout << endl << endl << " ** PRESS [Y] for YES ** PRESS [N] for NO ** " << endl ;					
					
					      cout << endl << endl << " ADD GRAND ANIMAL SHOW ? [ Y-Yes | N-No ] : " ;
		                  cin >> animalShow ;
		                 
					                if(toupper(animalShow)=='Y')
					                 {
					            	  strcpy(statusAnimalShow,"Yes");
									  totalAnimalShow = 10 * numVisitor;
									  sumAnimalShow = sumAnimalShow + totalAnimalShow ;
									  countAnimalShow = countAnimalShow + numVisitor;
								     }
								    else
								     {
					            	  strcpy(statusAnimalShow,"No");
									  totalAnimalShow = 0;
								     }
					
					      cout << endl << endl << " ADD JURASSIC BIRD PARK ? [ Y-Yes | N-No ] : " ;
		                  cin >> birdPark ;
		                  
					                if(toupper(birdPark)=='Y')
					                 {
					            	  strcpy(statusBirdPark,"Yes");
									  totalBirdPark = 10 * numVisitor;
									  sumBirdPark = sumBirdPark + totalBirdPark ;
									  countBirdPark = countBirdPark + numVisitor;
								     }
								    else
								     {
					            	  strcpy(statusBirdPark,"No");
					            	  totalBirdPark = 0;
								     }
					
					      cout << endl << endl << " ADD TRAIN RIDE FOR EVERYONE ? [ Y-Yes | N-No ] : " ;
		                  cin >> train ;
						   
					                if(toupper(train)=='Y')
					                 {
					            	  strcpy(statusTrain,"Yes");
									  totalTrain = 10 * numVisitor;
									  sumTrain = sumTrain + totalTrain ;
									  countTrain = countTrain + numVisitor;
								     }
								    else
								     {
					            	  strcpy(statusTrain,"No");
					            	  totalTrain = 0;
								     }
					
				          cout << endl << endl << " ADD 1 PERSONAL TOUR GUIDE ? [ Y-Yes | N-No ] : " ;
		                  cin >> tourGuide ; 
		            
					                if(toupper(tourGuide)=='Y')
					                 {
					            	  strcpy(statusTourGuide,"Yes");
									  totalTourGuide = 40;
									  sumTourGuide = sumTourGuide + totalTourGuide ;
									  countTourGuide = countTourGuide + 1 ;
								     }
								    else
								     {
					            	  strcpy(statusTourGuide,"No");
					            	  totalTourGuide = 0;
								     }
								     
					      cout << endl << endl << " +++++ PRESS [0] for any UNWANTED add-on activites ++++++" << endl ;
					      
		                  cout << endl << " NUMBER OF PRINTED PHOTO WITH EXOTIC ANIMALS : " ;
		                  cin >> photo ;
		                  cout << endl << " NUMBER OF ANIMAL FEEDING FOOD SACK : " ;
		                  cin >> animalFeed ;
		                  cout << endl << " NUMBER OF SOUVENIR PACK : " ;
		                  cin >> souvenir ;
						  
						  
	
				        }
						else if (addOnStatus==2) 
						{
							cout<< endl << "We recommend our visitor to take at least 1 add-on activity to enjoy a better experience!";
							cout << endl << endl << " [ Press 1 for CORRECTION  ] == [ Press 2 for NOT INTERESTED ] : " ;	
							cin >> checkpoint2 ;
							
							strcpy(statusAnimalShow,"No");
							strcpy(statusBirdPark,"No");
							strcpy(statusTrain,"No");
							strcpy(statusTourGuide,"No");
							
							photo = 0 , animalFeed = 0 , souvenir = 0 ;
							totalAnimalShow = 0 , totalBirdPark = 0 , totalTrain = 0 , totalTourGuide = 0 , totalSouvenir = 0 , totalAnimalFeed = 0 , totalPhoto = 0;
						}
						
				
					
						
				totalPhoto = photo * 5;
				sumPhoto = sumPhoto + totalPhoto ;
				countPhoto = countPhoto + photo;
				
				totalAnimalFeed = animalFeed * 8;
				sumAnimalFeed = sumAnimalFeed + totalAnimalFeed ;
				countAnimalFeed = countAnimalFeed + animalFeed;
				
				totalSouvenir = souvenir * 20;
				sumSouvenir = sumSouvenir + totalSouvenir ;
				countSouvenir = countSouvenir + souvenir;
				
				totalAddOn = totalAnimalShow + totalBirdPark + totalTrain + totalTourGuide + totalPhoto + totalAnimalFeed + totalSouvenir;
				sumAddOn = sumAddOn + totalAddOn ;
				countAddOn = countAnimalShow + countBirdPark + countTrain + countPhoto + countAnimalFeed + countSouvenir ;
	
	            cout << endl << endl << "                                     CONFIRMATION                                 " ;
	            cout << endl << "__________________________________________________________________________________" ;
	            cout << endl << endl << " ------ PLEASE MAKE SURE YOUR PURCHASE FOR EACH CATEGORY IS CORRECT ------ " ;
	            cout << endl << "__________________________________________________________________________________" ;
	            
				cout << endl << " Grand Animal Show     :   " << statusAnimalShow << "                       = RM " << totalAnimalShow ;
				cout << endl << " Jurassic Bird Park    :   " << statusBirdPark << "                       = RM " << totalBirdPark ;
				cout << endl << " Train Ride            :   " << statusTrain << "                       = RM " << totalTrain ;
				cout << endl << " Personal Tour Guide   :   " << statusTourGuide << "                       = RM " << totalTourGuide ;
				cout << endl << " Printed Photo         :   " << photo << " X RM 5                  = RM " << totalPhoto ;
				cout << endl << " Food Sack             :   " << animalFeed << " X RM 8                  = RM " << totalAnimalFeed ;
				cout << endl << " Souvenir Pack         :   " << souvenir << " X RM 20                 = RM " << totalSouvenir ;
				cout << endl << " ------------------------------ -------------------------------- " ;
				cout << endl << " TOTAL PAYMENT         : " << "                            = RM " << totalAddOn ;
				cout << endl << "                                                     ===========" ;
				
				
				cout << endl << endl << endl << "------------------------- CONTINUE WITH YOUR TRANSACTION ?--------------------------  " << endl ;
			    cout << endl << "          " << " ------------------------------- "  <<  " ------------------------------- " ;
	            cout << endl << "          " << " |    PRESS 1 TO CONTINUE      | "  <<  " |   PRESS 2 FOR CORRECTION    | " ;
	            cout << endl << "          " << " ------------------------------- "  <<  " ------------------------------- " ;
	            cout << endl << "          " << " ========> : " ;
	            cin >> checkpoint2 ;
				
				
				
			}while (checkpoint2==2); // add-on confirmation //	
				
				
			
		
	        }
	    
			    buyer=buyer+1;
			    
			    cout << endl << endl << "                                     FINAL CONFIRMATION                                " ;
		        cout << endl << "__________________________________________________________________________________" ;
		        cout << endl << endl << "  THERE IS NO TURNING POINT PASS THIS SCREEN AND THERE WILL BE NO REFUND " ;
		        cout << endl << "__________________________________________________________________________________" ;
		        
				cout << endl << endl <<  " Adult Ticket                  : " << adult << " X RM 30 per person = RM " << totalAdult ;
				cout << endl << " Child / Senior Citizen Ticket : " << (senior+child) << " X RM 15 per person = RM " << (totalChild+totalSenior) ;
				cout << endl << " Disable  (WITH OKU CARD)      : " << oku << " X RM 20 per person = RM " << totalOku ;
				cout << endl << " Family Pack Ticket            : " << family << " X RM 70 per pack   = RM " << totalFamily ;
				cout << endl << " School Pack Ticket            : " << school << " X RM 10 per person = RM " << totalSchool ;
				cout << endl << " Group Pack Ticket             : " << groupPack << " X RM 98 per person = RM " << totalGroupPack ;
				cout << endl << " ------------------------------ ------------------------------------------------- " ;
				cout << endl << " TOTAL ENTRACE TICKET          : " << "                     = RM " << admissionFee;
				cout << endl << "=================================================================================" ;
				cout << endl << " Grand Animal Show             : " << statusAnimalShow << "                  = RM " << totalAnimalShow ;
			    cout << endl << " Jurassic Bird Park            : " << statusBirdPark << "                  = RM " << totalBirdPark ;
			    cout << endl << " Train Ride                    : " << statusTrain << "                  = RM " << totalTrain ;
			    cout << endl << " Personal Tour Guide           : " << statusTourGuide << "                  = RM " << totalTourGuide ;
			    cout << endl << " Printed Photo                 : " << photo << " X RM 5             = RM " << totalPhoto ;
			    cout << endl << " Food Sack                     : " << animalFeed << " X RM 8             = RM " << totalAnimalFeed ;
			    cout << endl << " Souvenir Pack                 : " << souvenir << " X RM 20            = RM " << totalSouvenir ;
			    cout << endl << " ------------------------------ ------------------------------------------------- " ;
			    cout << endl << " TOTAL ADD-ON                  : " << "                     = RM " << totalAddOn ;
				cout << endl << "=================================================================================" ;
				
				cout << endl << endl << endl << "------------------------- CONTINUE WITH YOUR TRANSACTION ?--------------------------  " << endl ;
			    cout << endl << "          " << " ------------------------------- "  <<  " ------------------------------- " ;
	            cout << endl << "          " << " |    PRESS 1 TO CONTINUE      | "  <<  " |   PRESS 2 FOR CORRECTION    | " ;
	            cout << endl << "          " << " ------------------------------- "  <<  " ------------------------------- " ;
	            cout << endl << "          " << " ========> : " ;
	            cin >> repeatAll ;
			    
	            system("cls");
	    
	    }while(repeatAll==2); // condition for repeating from the start //
	    
	                
	                
	                // exit after all conditon false and display receipt //
	                
	            	netProfit = admissionFee + totalAddOn ;
	                sumNetProfit = sumNetProfit + netProfit ;
	                
	                tax = netProfit * 0.06 ;
	                sumTax = sumTax + tax ;
	                
	                grossProfit = tax + netProfit ;
	                sumGrossProfit = sumGrossProfit + grossProfit ;
	                
	                
	                cout << endl << endl << " ********************************* ZOO D'NIRVANA SYSTEM **************************" ;
	                
	
	                cout << endl << "                                     OFFICIAL RECEIPT                                " ;
			        cout << endl << "__________________________________________________________________________________" ;
			        cout << endl << endl << " ----------- PASS THIS RECEIPT TO THE COUNTER FOR YOUR ENTRANCE PASS ------------ " ;
			        cout << endl << "__________________________________________________________________________________" ;
			        
					cout << endl << endl <<  " Adult Ticket                  : " << adult << " X RM 30 per person = RM " << totalAdult ;
					cout << endl << " Child / Senior Citizen Ticket : " << (senior+child) << " X RM 15 per person = RM " << (totalChild+totalSenior) ;
					cout << endl << " Disable  (WITH OKU CARD)      : " << oku << " X RM 20 per person = RM " << totalOku ;
					cout << endl << " Family Pack Ticket            : " << family << " X RM 70 per pack   = RM " << totalFamily ;
					cout << endl << " School Pack Ticket            : " << school << " X RM 10 per person = RM " << totalSchool ;
					cout << endl << " Group Pack Ticket             : " << groupPack << " X RM 98 per person = RM " << totalGroupPack ;
					cout << endl << " ------------------------------ ------------------------------------------------- " ;
					cout << endl << " TOTAL ENTRACE TICKET          : " << "                     = RM " << admissionFee;
					cout << endl << "=================================================================================" ;
					cout << endl << " Grand Animal Show             : " << statusAnimalShow << "                  = RM " << totalAnimalShow ;
				    cout << endl << " Jurassic Bird Park            : " << statusBirdPark << "                  = RM " << totalBirdPark ;
				    cout << endl << " Train Ride                    : " << statusTrain << "                  = RM " << totalTrain ;
				    cout << endl << " Personal Tour Guide           : " << statusTourGuide << "                  = RM " << totalTourGuide ;
				    cout << endl << " Printed Photo                 : " << photo << " X RM 5             = RM " << totalPhoto ;
				    cout << endl << " Food Sack                     : " << animalFeed << " X RM 8             = RM " << totalAnimalFeed ;
				    cout << endl << " Souvenir Pack                 : " << souvenir << " X RM 20            = RM " << totalSouvenir ;
				    cout << endl << " ------------------------------ ------------------------------------------------- " ;
				    cout << endl << " TOTAL ADD-ON                  : " << "                     = RM " << totalAddOn ;
					cout << endl << "=================================================================================" ;
					cout << fixed ;
					cout << endl << " TAX %6                        : " << "                     = RM " << setprecision(2) << tax ;
					cout << endl << " TOTAL PAYMENT                 : " << "                     = RM " << setprecision(2) << grossProfit;
					cout << endl << "=================================================================================" ;
					cout << endl << " THANKYOU || TERIMAKASIH || ARIGATOU || SHUKRAN || XIE'XIE' || NANDRI || GRACIAS  " ;
					
					cout << endl << endl ;
					system("pause");
	
	
   }
	
	else if (status==2) // staff mode //
	{
	    	cout << "_______________________________________________________________________________________________" << endl ;
			cout << "                                                                                               " << endl ;
		    cout << "		                                   STAFF MODE " << endl ;
		    cout << "_______________________________________________________________________________________________" << endl << endl;
			
			char name[20], password[20], zooPassword[20] = {"zooadmin"};
			bool pass = true;
			while (pass)
				{ 
					cout << endl << " --------- P.A.S.S.W.O.R.D ----------- " ;
					cout << endl << "           : " ;
					cin >> password ;
					
					if (strcmp(password,zooPassword) == 0)
					{ pass = false;
					}
					else
					{
						Beep(1000,500) ;
						cout << "\n Incorrect staff password !" << endl << endl ;
						system("pause");
						system("cls");
					}
	             }
	
	        cout << "\n I agree to never share all the private information in this section to any 3rd party. " << endl ;
	        system("pause");
	        system("cls");
	        
	        cout << endl << " THIS SECTION SHOWS ALL STATISTICS ABOUT CITIZEN CATEGORY " << endl ;
									  	        
	        //loading
	        
	        taxStatistic = sumAdmissionFee * 0.06 ;
	        
	        
	        cout << endl << "____________________________________________________________" ;
	    	cout << endl << "        --- ZOO D' NIRVANA TICKET SALES STATISTICS --- " ;
	        cout << endl << "____________________________________________________________" ;
	        cout << endl << "                                                            " ;
	        cout << endl << " Total Sales for Adult                     : RM " << sumAdult ;
	        cout << endl << " Total Sales for Child                     : RM " << sumChild ;
	        cout << endl << " Total Sales for Senior Citizen            : RM " << sumSenior ;
	        cout << endl << " Total Sales for Disabled (With OKU Card)  : RM " << sumOku ;
	        cout << endl << "------------------------------------------------------------" ;
	        cout << endl << " Total Sales for Family Package            : RM " << sumFamily ;
	        cout << endl << " Total Sales for School Package            : RM " << sumSchool ;
	        cout << endl << " Total Sales for Group Package             : RM " << sumGroupPack ;
	        cout << endl << "=========================================================== " ;
			cout << endl << " Total Ticket Sales for CITIZEN CATEGORY   : RM " << sumAdmissionFee + taxStatistic  ;
	      	cout << endl << "============================================================" << endl ;
	      	
	        cout << endl << "____________________________________________________________" ;
	    	cout << endl << "        --- ZOO D' NIRVANA VISITORS STATISTICS --- " ;
	        cout << endl << "____________________________________________________________" ;
	        cout << endl << "                                                            " ;
	        cout << endl << " Total Visitors for Adult                      : " << countAdult ;
	        cout << endl << " Total Visitors for Child                      : " << countChild ;
	        cout << endl << " Total Visitors for Senior Citizen             : " << countSenior ;
	        cout << endl << " Total Visitors for Disabled (With OKU Card)   : " << countOku ;
	        cout << endl << "------------------------------------------------------------" ;
	        cout << endl << " Total Visitors for Family Package             : " << countFamily ;
	        cout << endl << " Total Visitors for School Package             : " << countSchool ;
	        cout << endl << " Total Visitors for Group Package              : " << countGroupPack ;
	      	cout << endl << "============================================================" << endl ; 
			cout << endl << " Total Visitors for CITIZEN CATEGORY           : " << countNumVisitor ;
	      	cout << endl << "============================================================" << endl ;
	      	
	      	cout << endl << "____________________________________________________________" ;
	    	cout << endl << "                     $ PROFIT REPORT $                      " ;
	        cout << endl << "____________________________________________________________" ;
	        cout << fixed ;
	        cout << endl << " Average ticket sales per person               : RM " << setprecision(2) << (sumAdmissionFee+taxStatistic) / countNumVisitor ;
	        cout << endl << " Average ticket sales per transaction          : RM " <<  setprecision(2) << (sumAdmissionFee+taxStatistic) / buyer ;
	      	cout << endl << " GROSS PROFIT                                  : RM " << setprecision(2) << sumAdmissionFee + taxStatistic;
	      	cout << endl << " TAX 6%                                        : RM " << setprecision(2) << taxStatistic ;
	      	cout << endl << "=========================================================== " ;
			cout << endl << " NET PROFIT                                    : RM " << sumAdmissionFee ;
	      	cout << endl << "============================================================" << endl ;
	      	
	      	system("pause");
	      	system("cls");
	      	
	      	cout << " END OF THE DAY ? [ IT WILL SHUT DOWN THE SYSTEM FOR THE DAY AND RESET ALL STATISTIC ] " << endl ;
	        cout << endl << "          " << " ------------------------------- "  <<  " ------------------------------- " ;
	        cout << endl << "          " << " |   PRESS 1 TO END THE DAY    | "  <<  " |      PRESS 2 FOR MENU       | " ;
	        cout << endl << "          " << " ------------------------------- "  <<  " ------------------------------- " ;
	        cout << endl << " ++++++++++++++++++> " ;
	        cin >> end ;
	        
	        if (end==1)
	        {
	        	user = -1 ;
			}
	      	
	      	
			 
	      	
	}
	
}

void inputNonCitizen(int& status, int& user) // non-citizen input //
{
	
	if(status==1) // visitor mode //
	{
	
		do // to repeat the whole process if the customer want to change cetegory of ticket //
		{
			totalAnimalShow = 0 , totalBirdPark = 0 , totalTrain = 0 , numVisitor = 0 ;
			
			cout << endl << endl << " Which package would like to take ? " ;
		    cout << endl << endl << " [ Press 1 for TOURIST ] == [ Press 2 for TOURIST PACK ] " ;
		    cout << endl << " ========> : " ;
		    cin >> check ;
		    
		       if(check==1) // Non-Citizen Tourist Normal //
		       {
		       	
		       	  
		       	  	cout << endl << endl << " NUMBER OF PERSON FOR TOURIST : " ;
			        cin >> tourist ;
			        numVisitor = tourist ;
			        touristPack = 0 ;
			        
						 while (tourist <= 0) // ERROR for tourist //
						 {
							Beep(1000,500) ;
					        cout << endl << endl << " ******************************************************************************** " ;
					       	cout << endl << endl << "              !! INVALID AMOUNT OF PEOPLE FOR TOURIST !!  " ;
						   	cout << endl << "                                Please re-enter                     " ;
						   	cout << endl << " ********************************************************************************  " ;
						   	
						   	cout << endl << endl << " NUMBER OF PERSON : " ;
						    cin >> tourist ;
							
						 }
						
						 totalTourist = tourist * 60 ;
						 sumTourist = sumTourist + totalTourist ;
						 countTourist = countTourist + tourist;
						 
						 cout << endl << endl << " Would you like to include add-on activities ? [Press 1 for YES | Press 2 for NO] : ";
						 cin >> addOnStatus;
						 
								 if(addOnStatus==1) // add-on input //
							      	{
								      cout << endl << endl << " ** PRESS [Y] for YES ** PRESS [N] for NO ** " << endl ;
								      
								      
								
								      cout << endl << endl << " ADD GRAND ANIMAL SHOW ? [ Y-Yes | N-No ] : " ;
					                  cin >> animalShow ;
					                 
								                if(toupper(animalShow)=='Y')
								                 {
								            	  strcpy(statusAnimalShow,"Yes");
												  totalAnimalShow = 10 * numVisitor;
												  sumAnimalShow = sumAnimalShow + totalAnimalShow ;
												  countAnimalShow = countAnimalShow + numVisitor;
											     }
											    else
											     {
								            	  strcpy(statusAnimalShow,"No");
												  totalAnimalShow = 0;
											     }
								
								      cout << endl << endl << " ADD JURASSIC BIRD PARK ? [ Y-Yes | N-No ] : " ;
					                  cin >> birdPark ;
					                  
								                if(toupper(birdPark)=='Y')
								                 {
								            	  strcpy(statusBirdPark,"Yes");
												  totalBirdPark = 10 * numVisitor;
												  sumBirdPark = sumBirdPark + totalBirdPark ;
												  countBirdPark = countBirdPark + numVisitor;
											     }
											    else
											     {
								            	  strcpy(statusBirdPark,"No");
								            	  totalBirdPark = 0;
											     }
								
								      cout << endl << endl << " ADD TRAIN RIDE FOR EVERYONE ? [ Y-Yes | N-No ] : " ;
					                  cin >> train ;
									   
								                if(toupper(train)=='Y')
								                 {
								            	  strcpy(statusTrain,"Yes");
												  totalTrain = 10 * numVisitor;
												  sumTrain = sumTrain + totalTrain ;
												  countTrain = countTrain + numVisitor;
											     }
											    else
											     {
								            	  strcpy(statusTrain,"No");
								            	  totalTrain = 0;
											     }
								
							          cout << endl << endl << " ADD 1 PERSONAL TOUR GUIDE ? [ Y-Yes | N-No ] : " ;
					                  cin >> tourGuide ; 
					            
								                if(toupper(tourGuide)=='Y')
								                 {
								            	  strcpy(statusTourGuide,"Yes");
												  totalTourGuide = 40;
												  sumTourGuide = sumTourGuide + totalTourGuide ;
												  countTourGuide = countTourGuide + 1 ;
											     }
											    else
											     {
								            	  strcpy(statusTourGuide,"No");
								            	  totalTourGuide = 0;
											     }
											     
									  cout << endl << endl << " +++++ PRESS [0] for any UNWANTED add-on activites ++++++" << endl ;
								
					                  cout << endl << " NUMBER OF PRINTED PHOTO WITH EXOTIC ANIMALS : " ;
					                  cin >> photo ;
					                  cout << endl << " NUMBER OF ANIMAL FEEDING FOOD SACK : " ;
					                  cin >> animalFeed ;
					                  cout << endl << " NUMBER OF SOUVENIR PACK : " ;
					                  cin >> souvenir ;
									  
									  
				
							        }
									else if (addOnStatus==2) // confirmation on status add-on //
									{
										cout<< endl << "We recommend our visitor to take at least 1 add-on activity to enjoy a better experience!";
										cout << endl << endl << " [ Press 1 for CORRECTION  ] == [ Press 2 for NOT INTERESTED ] : " ;	
										cin >> checkpoint2 ;
										
										strcpy(statusAnimalShow,"No");
										strcpy(statusBirdPark,"No");
										strcpy(statusTrain,"No");
										strcpy(statusTourGuide,"No");
										photo = 0 , animalFeed = 0 , souvenir = 0 ;
								        totalAnimalShow = 0 , totalBirdPark = 0 , totalTrain = 0 , totalTourGuide = 0 , totalSouvenir = 0 , totalAnimalFeed = 0 , totalPhoto = 0;
									}
									
								
					
					
						totalPhoto = photo * 5;
						sumPhoto = sumPhoto + totalPhoto ;
						countPhoto = countPhoto + photo;
						
						totalAnimalFeed = animalFeed * 8;
						sumAnimalFeed = sumAnimalFeed + totalAnimalFeed ;
						countAnimalFeed = countAnimalFeed + animalFeed;
						
						totalSouvenir = souvenir * 20;
						sumSouvenir = sumSouvenir + totalSouvenir ;
						countSouvenir = countSouvenir + souvenir;
						
						totalAddOn = totalAnimalShow + totalBirdPark + totalTrain + totalTourGuide + totalPhoto + totalAnimalFeed + totalSouvenir + totalTourist;
						sumAddOn = sumAddOn + totalAddOn ;
						countAddOn = countAnimalShow + countBirdPark + countTrain + countPhoto + countAnimalFeed + countSouvenir ;
						
						cout << endl << endl << "                                     CONFIRMATION                                 " ;
			            cout << endl << "__________________________________________________________________________________" ;
			            cout << endl << endl << " ------ PLEASE MAKE SURE YOUR PURCHASE FOR EACH CATEGORY IS CORRECT ------ " ;
			            cout << endl << "__________________________________________________________________________________" ;
			            cout << endl << " NUMBER OF TOURIST             :   " << tourist << " X RM 60 per person = RM " << totalTourist;
			            cout << endl ;
						cout << endl << " Grand Animal Show             :   " << statusAnimalShow << "	= RM " << totalAnimalShow ;
						cout << endl << " Jurassic Bird Park            :   " << statusBirdPark << "	= RM " << totalBirdPark ;
						cout << endl << " Train Ride                    :   " << statusTrain << "	= RM " << totalTrain ;
						cout << endl << " Personal Tour Guide           :   " << statusTourGuide << "	= RM " << totalTourGuide ;
						cout << endl << " Printed Photo                 :   " << photo << " X RM 5 = RM " << totalPhoto ;
						cout << endl << " Food Sack                     :   " << animalFeed << " X RM 8 = RM " << totalAnimalFeed ;
						cout << endl << " Souvenir Pack                 :   " << souvenir << " X RM 20 = RM " << totalSouvenir ;
						cout << endl << " ------------------------------ -------------------------------- " ;
						cout << endl << " TOTAL PAYMENT                 : " << "                     = RM " << totalAddOn ;
						cout << endl << "                                                      ==========" ;
						
						
		       	  	
					 
			   }
			   
			   else if(check==2) //Non-Citizen Tourist Pack //
			   {
			   	
				   	 
					  tourist = 0 ;	
				   	  cout << endl << endl << " NUMBER OF PERSON FOR TOURIST PACK : " ;
					  cin >> touristPack ;
						
						while (touristPack<2&&touristPack>0) // error for tourist pack //
							{
								Beep(1000,500) ;
						        cout << endl << endl << " ******************************************************************************** " ;
						       	cout << endl << endl << "              !! INVALID AMOUNT OF PEOPLE FOR TOURIST PACK !!  " ;
							   	cout << endl << "                                Please re-enter                     " ;
							   	cout << endl << " ********************************************************************************  " ;
							   	
							   	cout << endl << endl << " NUMBER OF PERSON FOR TOURIST PACK : " ;
							    cin >> touristPack ;
								
							}
						
								totalTouristPack = touristPack * 128 ;
								sumTouristPack = sumTouristPack + totalTouristPack ;
								countTouristPack = countTouristPack + touristPack;
								
								cout << endl << endl << "                                     CONFIRMATION                                 " ;
							    cout << endl << "__________________________________________________________________________________" ;
							    cout << endl << endl << " ------ PLEASE MAKE SURE THE NUMBER OF TICKET FOR EACH CATEGORY IS CORRECT ------ " ;
							    cout << endl << "__________________________________________________________________________________" ;
							    
							    cout << endl << " TOURIST PACK         : " << touristPack << " X RM 128 per person = RM " << totalTouristPack;
							    cout << endl;
								cout << endl << " Grand Animal Show    :   " << "INCLUDED" << "            = RM " << 0 ;
								cout << endl << " Jurassic Bird Park   :   " << "INCLUDED" << "            = RM " << 0 ;
								cout << endl << " Train Ride           :   " << "INCLUDED" << "            = RM " << 0 ;
								cout << endl << " Personal Tour Guide  :   " << "FREE" << "                = RM " << 0 ;
								cout << endl << " Printed Photo        :   " << "FOR " << touristPack << " PERSON        = RM " << 0 ;
								cout << endl << " Food Sack            :   " << "FOR " << touristPack << " PERSON        = RM " << 0 ;
								cout << endl << " Souvenir Pack        :   " << "FOR " << touristPack << " PERSON        = RM " << 0 ;
								cout << endl << " ------------------------------------------------------------------ " ;
								cout << endl << " TOTAL PAYMENT        : " << "                     = RM " << totalTouristPack ;
								cout << endl << "                                              ==========" << endl ;
								
									
							
							
				      
					
			   	 
			   }
		    
		    
		    cout << endl << endl << "                                     FINAL CONFIRMATION                                " ;
	        cout << endl << "__________________________________________________________________________________" ;
	        cout << endl << endl << "  THERE IS NO TURNING POINT PASS THIS SCREEN AND THERE WILL BE NO REFUND " ;
	        cout << endl << "__________________________________________________________________________________" ;
			
			cout << endl << endl << endl << "------------------------- CONTINUE WITH YOUR TRANSACTION ?--------------------------  " << endl ;
		    cout << endl << "          " << " ------------------------------- "  <<  " ------------------------------- " ;
	        cout << endl << "          " << " |    PRESS 1 TO CONTINUE      | "  <<  " |   PRESS 2 FOR CORRECTION    | " ;
	        cout << endl << "          " << " ------------------------------- "  <<  " ------------------------------- " ;
	        cout << endl << "          " << " ========> : " ;
	        cin >> repeatAll ;
		    
	        system("cls"); 
	        
	        if(repeatAll==2) // if repeat , this will display price list for ticket price and add-on // 
	        {
	        	displayNonCitizen();
	        	displayAddOn();
	
			}
				   
				   
		}while(repeatAll==2); // will repeat all process for input citizen //
		
		
		if(tourist>0&&touristPack==0) // receipt tourist normal price //
		            {
		                netProfit = totalTourist + totalAddOn ;
		                sumNetProfit = sumNetProfit + netProfit ;
		                
		                tax = netProfit * 0.06 ;
		                sumTax = sumTax + tax ;
		                
		                grossProfit = tax + netProfit ;
		                sumGrossProfit = sumGrossProfit + grossProfit ;
		                
		                buyer1++;
		            	
		            	cout << endl << endl << " ********************************* ZOO D'NIRVANA SYSTEM **************************" ;
	                
	
	                    cout << endl << "                                     OFFICIAL RECEIPT                                " ;
			            cout << endl << "__________________________________________________________________________________" ;
			            cout << endl << endl << " ----------- PASS THIS RECEIPT TO THE COUNTER FOR YOUR ENTRANCE PASS ------------ " ;
			            cout << endl << "__________________________________________________________________________________" ;
			            cout << endl << " NUMBER OF TOURIST             :   " << tourist << " X RM 60 per person = RM " << totalTourist;
			            cout << endl ;
						cout << endl << " Grand Animal Show             :   " << statusAnimalShow << "	= RM " << totalAnimalShow ;
						cout << endl << " Jurassic Bird Park            :   " << statusBirdPark << "	= RM " << totalBirdPark ;
						cout << endl << " Train Ride                    :   " << statusTrain << "	= RM " << totalTrain ;
						cout << endl << " Personal Tour Guide           :   " << statusTourGuide << "	= RM " << totalTourGuide ;
						cout << endl << " Printed Photo                 :   " << photo << " X RM 5 = RM " << totalPhoto ;
						cout << endl << " Food Sack                     :   " << animalFeed << " X RM 8 = RM " << totalAnimalFeed ;
						cout << endl << " Souvenir Pack                 :   " << souvenir << " X RM 20 = RM " << totalSouvenir ;
						cout << endl << " ------------------------------ -------------------------------- " ;
						cout << endl << " TOTAL PAYMENT                 : " << "                     = RM " << netProfit ;
						cout << endl << "=================================================================================" ;
						cout << fixed ;
					    cout << endl << " TAX %6                        : " << "                     = RM " << setprecision(2) << tax ;
					    cout << endl << " TOTAL PAYMENT                 : " << "                     = RM " << setprecision(2) << grossProfit;
					    cout << endl << "=================================================================================" << endl ;
					    cout << endl << " THANKYOU || TERIMAKASIH || ARIGATOU || SHUKRAN || XIE'XIE' || NANDRI || GRACIAS  " << endl ;
					    
					    system("pause");
		            	
				    }
			
			
			       else if(touristPack>0&&tourist==0) // receipt tourist pack //
			        {
			        			
			        	        netProfit = totalTouristPack ;
				                sumNetProfit = sumNetProfit + netProfit ;
				                
				                tax = netProfit * 0.06 ;
				                sumTax = sumTax + tax ;
				                
				                grossProfit = tax + netProfit ;
				                sumGrossProfit = sumGrossProfit + grossProfit ;
			        	        
			        	        cout << endl << endl << " ********************************* ZOO D'NIRVANA SYSTEM **************************" ;
			        	        
			        	        
				                cout << endl << "                                     OFFICIAL RECEIPT                                " ;
						        cout << endl << "__________________________________________________________________________________" ;
						        cout << endl << endl << " ----------- PASS THIS RECEIPT TO THE COUNTER FOR YOUR ENTRANCE PASS ------------ " ;
						        cout << endl << "__________________________________________________________________________________" ;
							    
							    cout << endl << " TOURIST PACK                  : " << touristPack << " X RM 128 per person        = RM " << totalTouristPack;
							    cout << endl;
								cout << endl << " Grand Animal Show             : " << "INCLUDED" << "                    = RM " << 0 ;
								cout << endl << " Jurassic Bird Park            : " << "INCLUDED" << "                    = RM " << 0 ;
								cout << endl << " Train Ride                    : " << "INCLUDED" << "                    = RM " << 0 ;
								cout << endl << " Personal Tour Guide           : " << "FREE" << "                        = RM " << 0 ;
								cout << endl << " Printed Photo                 : " << "FOR " << touristPack << " PERSON        = RM " << 0 ;
								cout << endl << " Food Sack                     : " << "FOR " << touristPack << " PERSON        = RM " << 0 ;
								cout << endl << " Souvenir Pack                 : " << "FOR " << touristPack << " PERSON        = RM " << 0 ;
								cout << endl << " ------------------------------------------------------------------ " ;
								cout << endl << " TOTAL PAYMENT                 : " << "                     = RM " << netProfit ;
								cout << endl << "=================================================================================" ;
								cout << fixed ;
					            cout << endl << " TAX %6                        : " << "                     = RM " << setprecision(2) << tax ;
					            cout << endl << " TOTAL PAYMENT                 : " << "                     = RM " << setprecision(2) << grossProfit;
					            cout << endl << "=================================================================================" << endl ;
					            cout << endl << " THANKYOU || TERIMAKASIH || ARIGATOU || SHUKRAN || XIE'XIE' || NANDRI || GRACIAS  " << endl ;
			       	
			       	system("pause");
				    }
	
   }
   
   else if(status==2) // staff mode //
   {
	    	cout << "_______________________________________________________________________________________________" << endl ;
			cout << "                                                                                               " << endl ;
		    cout << "		                      THIS SECTION IS FOR STAFF ONLY " << endl ;
		    cout << "_______________________________________________________________________________________________" << endl << endl;
			
			char name[20], password[20], zooPassword[20] = {"zooadmin"};
			bool pass = true;
			while (pass)
				{ 
					cout << endl << " --------- P.A.S.S.W.O.R.D ----------- " ;
					cout << endl << "           : " ;
					cin >> password ;
					
					if (strcmp(password,zooPassword) == 0)
					{ pass = false;
					}
					else
					{
						Beep(1000,500) ;
						cout << "\n Incorrect staff password !" << endl << endl ;
						system("pause");
						
					}
	             }
	
	        cout << "\n I agree to never share all the private information in this section to any 3rd party. " << endl ;
	        system("pause");
	        system("cls");
	        
	        cout << endl << " THIS SECTION SHOWS ALL STATISTICS ABOUT NON-CITIZEN CATEGORY " << endl ;
	        
	        statisticNC(sumTourist,sumTouristPack,countTourist,countTouristPack,buyer1); // to display the statistic for non citizen //
	        
	        system("pause");
	      	system("cls");
	        
	        cout << " END OF THE DAY ? [ IT WILL SHUT DOWN THE SYSTEM FOR THE DAY AND RESET ALL STATISTIC ] " << endl ;
	        cout << endl << "          " << " ------------------------------- "  <<  " ------------------------------- " ;
	        cout << endl << "          " << " |   PRESS 1 TO END THE DAY    | "  <<  " |      PRESS 2 FOR MENU       | " ;
	        cout << endl << "          " << " ------------------------------- "  <<  " ------------------------------- " ;
	        cout << endl << " ++++++++++++++++++> " ;
	        cin >> end ;
	        
	        if (end==1)
	        {
	        	user = -1 ;
			}
	        
	    
   			
	        
   }
}

void statisticNC(int sumTourist,int sumTouristPack ,int countTourist,int countTouristPack, double buyer1) // display statistic for non citizen //
{
	        double tax ;
	        
	        tax = (sumTourist+sumTouristPack) * 0.06 ;
	
	
	        cout << endl << "_____________________________________________________________________" ;
	    	cout << endl << "         --- ZOO D' NIRVANA TICKET SALES STATISTICS --- " ;
	        cout << endl << "_____________________________________________________________________" ;
	        cout << endl << "                                                            " ;
	        cout << endl << " Total Sales for Tourist                               : RM " << sumTourist ;
	        cout << endl << "---------------------------------------------------------------------" ;
	        cout << endl << " Total Sales for Tourist Pack [Include All Add-On]     : RM " << sumTouristPack ;
	        cout << endl << "==================================================================== " ;
			cout << fixed ; 
			cout << endl << " Total Ticket Sales for NON-CITIZEN CATEGORY           : RM " << (sumTourist+sumTouristPack) + tax ;
	      	cout << endl << "====================================================================" << endl ;
	      	
	        cout << endl << "____________________________________________________________" ;
	    	cout << endl << "        --- ZOO D' NIRVANA VISITORS STATISTICS --- " ;
	        cout << endl << "____________________________________________________________" ;
	        cout << endl << "                                                            " ;
	        cout << endl << " Total Visitors for Tourist                    : " << countTourist ;
	        cout << endl << "------------------------------------------------------------" ;
	        cout << endl << " Total Visitors for Tourist Pack               : " << countTouristPack ;
	        cout << endl << "=========================================================== " ;
			cout << endl << " Total Visitors for NON-CITIZEN CATEGORY       : " << (countTourist+countTouristPack) ;
	      	cout << endl << "============================================================" << endl ;
	      	
	      	cout << endl << "____________________________________________________________" ;
	    	cout << endl << "                     $ PROFIT REPORT $                      " ;
	        cout << endl << "____________________________________________________________" ;
	        cout << fixed ;
	        cout << endl << " Average ticket sales per person               : RM " << setprecision(2) << (sumTourist+sumTouristPack+tax) / (countTourist+countTouristPack) ;
	        cout << endl << " Average ticket sales per transaction          : RM " << setprecision(2) << (sumTourist+sumTouristPack+tax) / buyer1 ;
	      	cout << endl << " GROSS PROFIT                                  : RM " << setprecision(2) << (sumTourist+sumTouristPack) + tax ;
	      	cout << endl << " TAX 6%                                        : RM " << setprecision(2) << tax ;
	      	cout << endl << "=========================================================== " ;
			cout << endl << " NET PROFIT                                    : RM " << (sumTourist+sumTouristPack) ;
	      	cout << endl << "============================================================" << endl ;
	
}
