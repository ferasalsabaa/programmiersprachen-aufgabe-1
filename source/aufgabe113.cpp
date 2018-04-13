#include <iostream>

void kleinestezahlfinden (){
    int zahl = 1; /* die Zahl, die wir probieren wollen */
    bool test=false; /* boolean feur ueperrbreufen ob die Zahl gefunden wird oder noch nicht */

    while(test ==false){
        bool testnumber = true; /*boolean feur schauen ob die zahl durch 1-20 teilbar ist */
        for(int i=1; i<=20;i++){
            if(zahl%i !=0){
                testnumber=false; /*wenn die Zahl mindestens einmal nicht teilbar ist wird das wert false */
                break; /*wir brauchen nicht mehr weiter mit dieser Zahl */
            }
        }
        if (testnumber ==true){ /*falls die Zahl durch 1-20 teilbar ist, wird testnumber true */
            test=true;/*nicht mehr weiter mit while schleife */
            std::cout<<"die kleineste Zahl ist "<< zahl<<".\n";
        }
        else{zahl++;} /* wenn die Zahl nicht gefunden wird versuch mit der naechsten*/
        

    }
}
int main()
{
    
    kleinestezahlfinden();
    return 0;
}