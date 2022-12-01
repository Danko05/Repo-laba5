#include <iostream>
#include "Planet.h"
#include "Planetary.h"
using namespace std;



int main (){
    Planet planet1 ("Mercury",233049.65,10892.6,647.4,23.6,69820000.765,TERRESTRIAL);
    Planet planet2 ("Venera",27405.87,44536.9,364.7,23.9,56546473.978,TERRESTRIAL);
    Planet planet3 ("Earth",54739.54,65545.5,654.4,44.4,54677533.654,TERRESTRIAL);
    Planet planet4("Mars",98976.65,65768.3,345.6,23.6,56873412.820,TERRESTRIAL);
    Planet planet5("Jupiter",65743.23,87965.2,432.1,65.5,87965463.876,JOVIAN);
    Planet planet6("Saturn",87965.23,23435.4,765.3,23.1,27186574.546,JOVIAN);
    Planet planet7("Uran",53426.54,87965.2,324.1,34.5,76854903.867,JOVIAN);
    Planet planet8("Neptun",73295.98,87965.3,543.2,25.6,76943245.876,JOVIAN);

    Planetary planets;
    planets.addplanet (planet1);
    planets.addplanet (planet2);
    planets.addplanet (planet3);
    planets.addplanet (planet4);
    planets.addplanet (planet5);
    planets.addplanet (planet6); 
    planets.addplanet (planet7);
    planets.addplanet (planet8);

    planets.findAverageMass();

    planets.sort_by_length_of_day(planet1.length_of_day,planet2.length_of_day,planet3.length_of_day,
    planet4.length_of_day,planet5.length_of_day,planet6.length_of_day,planet7.length_of_day,planet8.length_of_day);

    

};

