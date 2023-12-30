#include <iostream>
#include <cstring>

using namespace std;

int main(){
	
	int number = 0;
    string roma;

    cout << "Enter the Roman number: " << endl;
    cin >> roma;

    int length = roma.length();
    int value[1000];

	
	for(int i=0;i<length;i++){
		
		
			if(roma[i]=='I'){
			    value[i]=1; 
		    }
			else if(roma[i]=='II'){
			    value[i]=2;
			}	
			else if(roma[i]=='III'){
			    value[i]=3; 
		    }
		    else if(roma[i]=='IV'){
			    value[i]=4; 
			}	
			else if(roma[i]=='V'){
			 
			    value[i]=5; 
			}	
			else if(roma[i]=='VI'){
			
			    value[i]=6; 
		   }
			else if(roma[i]=='VII'){
			
			    value[i]=7; 
		    }
			else if(roma[i]=='VII'){
			 
			    value[i]=8;
		    }
			
			else if(roma[i]=='IX'){
			
			    value[i]=9;
			}
			else if(roma[i]=='X'){
			
			    value[i]=10; 
		    }
		    else if(roma[i]=='XI'){
			 
			    value[i]=11; 
		    }
			else if(roma[i]=='XII'){
			
			    value[i]=12; 
			}
			else if(roma[i]=='XIII'){
			
			    value[i]=13; 
			}
			else if(roma[i]=='XIV'){
			    value[i]=14;
			}	
			else if(roma[i]== 'XV'){ 
			    value[i]=15; 
			}
			else if(roma[i]=='XVI'){
			    value[i]=16; 
			}
			else if(roma[i]=='XVI'){
			    value[i]=17; 
			}
			else if(roma[i]=='XVIII'){
			
			    value[i]=18; 
			}
			else if(roma[i]=='XIX'){
			
			    value[i]=19;
			}
				
			else if(roma[i]=='XX'){
		        value[i]=20; 
			}
			else if(roma[i]=='XXI'){
			
			    value[i]=21;
			}
		
			else if(roma[i]=='XXII'){
			
			    value[i]=22;
			}
			else if(roma[i]=='XXIII'){
			
		      	value[i]=23;
		    }
		    else if(roma[i]== 'XXIV'){
		    	value[i]=24; 
		    }
			else if(roma[i]='XXV'){
		    	 value[i]=25; 
		    }
			else if(roma[i]='XXVI'){
			
		    	value[i]=26; 
		    }	
			else if(roma[i]='XXVII'){
			
		    	value[i]=27; 
		    }
		   	else if(roma[i]='XXVIII'){
			
			    value[i]=28; 
			}
			else if(roma[i]='XXIX'){
			
	    		value[i]=29; 
	        }
			else if(roma[i]='XXX'){
			}
		    	value[i]=30; 
		    }
			else (roma[i]='XXXI'){
		    	value[i]=31;
			}
			else if(roma[i]='XXXII'){
		    	value[i]=32; 
		    }
				
			else if(roma[i]='XXXIII'){
		    	value[i]=33; 
			}
			else if(roma[i]='XXXIV'){
			    value[i]=34; 
		    }
			else if(roma[i]= 'XXXV'){
			
			    value[i]=35; 
            }
			else if(roma[i]='XXXVI'){

			    value[i]=36; 
			}
			else if(roma[i]='XXXVII'){
			
		    	value[i]=37; 
		    }
			else if(roma[i]='XXXVIII'){
	      	    value[i]=38; 
	      	}
			else if(roma[i]= 'XXXI'){
			
			    value[i]=39; 
		    }
			else if(roma[i]='XL'){
			
			    value[i]=40; 
		    }
			else if(roma[i]= 'XLI'){ 
		    	value[i]=41; 
		    }
			else if(roma[i]='XLII'){ 
		    	value[i]=42; 
		    }
			else if(roma[i]='XLIII'){
			    value[i]=43; 
			}
			else if(roma[i]= 'XLIV'){
			    value[i]=44; 
			}
			else if(roma[i]='XLIV'){
			
			    value[i]=45;
			}	 
			else if(roma[i]='XLVI'){
	      		value[i]=46;
			}
		 	else if(roma[i]='XLVII'){
			    value[i]=47;
			}
			else if(roma[i]='XLVIII'){
			    value[i]=48; 
			}
			else if(roma[i]='XLIX'){
		    	value[i]=49;
			}
			else if(roma[i]='L'){
		    	value[i]=50;
			} 
			else if(roma[i]='LI'){
		    	value[i]=51; 
		    }
			else if(roma[i]='LII'){
			
			    value[i]=52;
			}
			else if(roma[i]='LIII'){
			
		    	value[i]=53; 
		    }
		   	else if(roma[i]='LIV'){
			
			    value[i]=54;
			}
			else if(roma[i]='LV'){
			    value[i]=55 ; 
			}
			else if(roma[i]='LVI'){
			    value[i]=56;  
			}
			else if(roma[i]='LVII'){
		    	value[i]=57; 
		    }
			else if(roma[i]='LVIII'){
		    	value[i]=58; 
		    }
			else if(roma[i]='LV'){
		    	value[i]=59; 
		    }
			else if(roma[i]='LX'){
		    	value[i]=60; 
		    }
			else if(roma[i]='LXI'){
		    	value[i]=61; 
		    }
			else if(roma[i]='LXII'){
		    	value[i]=62; 
		    }
		 	else if(roma[i]='LXIII'){
			    value[i]=63; 
		    }
			else if(roma[i]='LXIV'){
			    value[i]=64; 
			}
			else if(roma[i]='LXV'){
			    value[i]=65; 
			}
			else if(roma[i]='LXVI'){
		    	value[i]=66; 
		    }
			else if(roma[i]='LXVII'){
		    	value[i]=67;
			}	
			else if(roma[i]='LXVIII'){
			    value[i]=68;
			}
			else if(roma[i]= 'LXIX'){
			 
		    	value[i]=69;
			}
			else if(roma[i]='LXX'){
			    value[i]=70; 
		    }
			else if(roma[i]= 'LXXI'){
			    value[i]=71; 
	        }
			else if(roma[i]='LXXII'){
		    	value[i]=72;
		    }
			else if(roma[i]='LXXIII'){
				value[i]=73;
			}	
			else if(roma[i]='LXXIV'){
			    value[i]=74; 
			}
			else if(roma[i]='LXXV'){
			    value[i]=75;
			}
			else if(roma[i]='LXXVI'){
		    	value[i]=76; 
		    }
			else if(roma[i]= 'LXXVII'){
		    	value[i]=77; 
		    }	
			else if(roma[i]='LXXVIII'){
			     value[i]=78;
			}
			else if(roma[i]= 'LXXIX'){
			    value[i]=79; 
	    	}	
			else if(roma[i]= 'LXXX'){
			
		    	value[i]=80; 
		    }
			else if(roma[i]= 'LXXXI'){
		    	value[i]=81; 
	    	}
		 	else if(roma[i]='LXXXII'){
			 
			    value[i]=82;
			}
			else if(roma[i]='LXXXIII'){
			
			    value[i]=83; 
			}
			else if(roma[i]=='LXXXIV'){
			    value[i]=84; 
			}
			else if(roma[i]=='LXXXV'){
			    value[i]=85; 
			}
			else if(roma[i]=='LXXXVI'){

			    value[i]=86; 
			}	
			else if(roma[i]=='LXXXVII'){
			
			    value[i]=87; 
			}
			else if(roma[i]=='LXXXVIII'){
			
			    value[i]=88; 
			}	
			else if(roma[i]=='LXXXIX'){
			
		    	value[i]=89; 
		    }	
			else if(roma[i]== 'XC'){
			
			    value[i]=90; 
			}	
			else if(roma[i]== 'XCI'){
			
		    	value[i]=91; 
	    	}
			else if(roma[i]=='XCII'){
			
		    	value[i]=92; 
		    }		
	    	else if(roma[i]=='XCIII'){
			
			    value[i]=93; 
			}	
			else if(roma[i]=='XCIV'){
			
			    value[i]=94; 
			}	
			else if(roma[i]=='XCV'){
			
		    	value[i]=95; 
		    }	
			else if(roma[i]=='XCVI'){
			
		    	value[i]=96; 
		    }	
			else if(roma[i]=='XCVII'){
				
				value[i]=97; 
		    }
			else if(roma[i]=='XCVIII'){
			
			    value[i]=98; 
	    	}
			else if(roma[i]=='XCIX'){
			
			    value[i]=99; 
			}
			else if(roma[i]=='C'){
			
			    value[i]=100; 
			}
			
		}
	}
	
    number = value[length - 1];

    for (int i = 0; i < length - 1; i++) {
        int multiplier = 1;

        for (int j = i + 1; j < length; j++) {
            if (value[i] < value[j]) {
                multiplier = -1;
            }
        }

        number += multiplier * value[i];
    }

    cout << "Number equivalent to the Roman numeral: " << number << endl;
}
