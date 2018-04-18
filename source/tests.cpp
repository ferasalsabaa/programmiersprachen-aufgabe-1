#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include<cmath>

int gcd (int a,int b)
{
  int r=a%b;
  if (r==0){
    return b;
  }
  else{
    return gcd(b,r);
  }
}
TEST_CASE("describe_gcd", "[gcd]"){
  REQUIRE(gcd(2,4) == 2);
  REQUIRE(gcd(9,6) == 3);
  REQUIRE(gcd(3,7) == 1);
}

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

int querSumme(int zahl){
      int a=0;
      while(zahl!=0){
        a=a+(zahl%10);
        zahl=zahl/10;
      }
        return a;
      }

  TEST_CASE("finden_quersumme", "[quersumme]"){
  REQUIRE(querSumme(214) == 7);
  REQUIRE(querSumme(0) == 0);
  REQUIRE(querSumme(1) == 1);
}
void sumMultiples(){
  int summe = 0;
  for(int i=0;i<=1000;i++){
    if(i%3==0 || i%5==0){
      summe = summe + i;
      }

  }
  std:: cout<< "die summe von 1 bis 1000 ist"<<summe <<".\n";
}

double fract(double nummer){
  double a = 0;
  int zahl = int (nummer);
    a = nummer - zahl;
  
return a ;
}

TEST_CASE("fract", "[fract]"){
  REQUIRE(fract(214.77) == Approx(0.77));
  REQUIRE(fract(0.3) == Approx(0.3));
  REQUIRE(fract(-99.3) == Approx(-0.3));
  REQUIRE(fract(M_PI) == Approx(0.14).epsilon(0.01));
}
//1.12

void Zylinders (int radius , int hoehe){
  int volum = M_PI *radius*radius*hoehe ;
  int oeberflaeche = (2*M_PI*radius*radius) + 2 * M_PI *radius * hoehe ;
}

/* TEST_CASE("finden_Zylinders", "[Zylinders]"){ //????????????????????????????
  REQUIRE(Zylinders(214 , 77) == Approx(0.77));
  REQUIRE(fract(0.3) == Approx(0.3));
  REQUIRE(fract(-99.3) == Approx(-0.3));
  REQUIRE(fract(M_PI) == Approx(0.14).epsilon(0.01));
}
*/
//1.13
int factorial (int nummer){
    if(nummer <= 1){
      return 1 ;
    }
    else{
      return nummer*factorial(nummer-1);
    }
}
TEST_CASE("finden_factorial", "[factorial]"){
  REQUIRE(factorial(9) == 362880);
  REQUIRE(factorial(3) == 6);
  REQUIRE(factorial(0) == 1);
  }

  //1.14
  int binomial (int n , int k){
    if (n>=k){return factorial(n)/(factorial(k)*factorial(n-k));}
    else{
      std::cout<<"falsche Eingabe"<<"./n";
    }
    }
  TEST_CASE("finden_binomial", "[binomial]"){
  REQUIRE(binomial(4,3) == 4);
  REQUIRE(binomial(5,2) == 10);
  REQUIRE(binomial(6,3) == 20);
  }
  //1.15
  bool is_prime (int nummer){
    bool richtig = true ;
    
        for(int i=2;i<nummer;i++){
          if(nummer%i ==0){
            richtig =false;
            return false;
          }
        }
        if(richtig == true){
          return true;
        }
    }
  TEST_CASE("finden_is_prime", "[is_prime]"){
  REQUIRE(is_prime(4) == false);
  REQUIRE(is_prime(561) == false);
  REQUIRE(is_prime(11) == true);
  }
int main(int argc, char* argv[])
{
   
    
    kleinestezahlfinden();
    sumMultiples();
  return Catch::Session().run(argc, argv);
}
