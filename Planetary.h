#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Planetary {
    public:
        vector<Planet> planets; 
        void  addplanet(Planet planet1){
        planets.push_back(planet1);
    }

    void findAverageMass()
    {
        float sum=0;
        for(int i=0; i<planets.size(); i++){
     sum +=planets[i].mass_in_kg;
        }
        
    
    double avarege = (double) sum/planets.size();
    cout<<avarege<<endl;
    }
void sort_by_length_of_day(float length_of_dayplanet1,float length_of_dayplanet2,float length_of_dayplanet3,float length_of_dayplanet4,
float length_of_dayplanet5,float length_of_dayplanet6,float length_of_dayplanet7,float length_of_dayplanet8){

float length_of_day_array[8] = {length_of_dayplanet1,length_of_dayplanet2,length_of_dayplanet3,length_of_dayplanet4,length_of_dayplanet5,
length_of_dayplanet6,length_of_dayplanet7,length_of_dayplanet8};
string planet_name[8] = {"planet1","planet2","planet3","planet4","planet5","planet6","planet7","planet8"};
for (int i=0; i< planets.size();i++) {
    for (int j = i+1; j<planets.size();j++){
        if (length_of_day_array[j]<= length_of_day_array[i]) {
            swap ( length_of_day_array[j], length_of_day_array[i]);

        }
    } 
} 
for (int k = 0; k < sizeof(length_of_day_array) /sizeof(length_of_day_array[0]); k++) {
    cout<< planet_name[k] << " = " << length_of_day_array[k] << endl;
}
}
};