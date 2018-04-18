#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include<cmath>
double mileToKilo (double m){
      return 1.60934f * m ; 
}




TEST_CASE("mileToKilo", "[mileToKilo]"){
  REQUIRE(mileToKilo(88) == 141,622 );
  REQUIRE(mileToKilo(120) == 1931,213 );
  REQUIRE(mileToKilo(0) == 0 );
}



int main(int argc, char* argv[])
{
  double mile;
  std:: cout <<"****";
  std :: cin >> mile;
  std:: cout <<"you have"<<mileToKilo(mile)<<"mieter";
  return Catch::Session().run(argc, argv);
}