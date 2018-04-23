#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include<cmath>
double mileToKilo (double m){
  double a=0;
       a =1.6 * m ; 
       return a;
}




TEST_CASE("mileToKilo", "[mileToKilo]"){
  REQUIRE(mileToKilo(88) == Approx(140.8).epsilon(0.001) );
  REQUIRE(mileToKilo(120) == Approx(192.0).epsilon(0.001) );
  REQUIRE(mileToKilo(0) == 0 );
}



int main(int argc, char* argv[])
{
  double mile;
  std:: cout <<"Geben Sie bitte die Anzahl der Meilen ein";
  std :: cin >> mile;
  std:: cout <<"Sie haben "<<mileToKilo(mile)<<"Meter";
  return Catch::Session().run(argc, argv);
}