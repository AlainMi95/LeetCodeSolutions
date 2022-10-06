int romanToInt(char * s){  
    char symbols[7] = {'I','V','X','L','C','D','M'};
    int values[7] = {1,5,10,50,100,500,1000};
    
    int value = 0;
    int firstSymbol = 0;
    int lastValue = 0;

    for (int i = 0; i < strlen(s); i++){      
        int arrLength = sizeof symbols / sizeof symbols[0];        
        for (int j = 0; j < arrLength; j++) {                   
            if (symbols[j] == s[i]) { 
                if(firstSymbol==0){
                    firstSymbol=1;
                    value += values[j];
                }else{
                    if(values[j]>lastValue){
                        value += values[j];
                        value-= lastValue;
                        value-= lastValue;
                    }else{
                        value += values[j];
                    }
                }
                lastValue = values[j];
            }
        }       
    }   
    return value;
}
