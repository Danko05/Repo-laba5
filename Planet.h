#include <string>
#include <iostream>
using namespace std;
enum type {
    TERRESTRIAL, 
    JOVIAN
};
class Planet {

public:
string name;
float mass_in_kg;
float orbital_of_velocity;
float mean_of_temperature;
float length_of_day;
type planetType;
float distance_from_sun;
Planet(string name,float mass_in_kg,float orbital_of_velocity,float mean_of_temperature,float length_of_day,float distance_from_sun,type planetType)
{
    this->name = name;
    this->mass_in_kg=mass_in_kg;
    this->orbital_of_velocity=orbital_of_velocity;
    this->mean_of_temperature=mean_of_temperature;
    this->length_of_day=length_of_day;
    this->distance_from_sun=distance_from_sun;
    this->planetType=planetType;
}

~ Planet()
{

}

};
