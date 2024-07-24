#include <iostream>

int main() {
    const double speed_in_vacuum = 299792458; // m/s
    const double speed_in_air    = 299702547; // m/s
    const double speed_in_water  = 225000000; // m/s
    const double speed_in_glass  = 200000000; // m/s

    double distance;

    std::cout << "Distance in meters: ";
    std::cin >> distance;

    double time_in_vacuum = distance / speed_in_vacuum;
    double time_in_air    = distance / speed_in_air;
    double time_in_water  = distance / speed_in_water;
    double time_in_glass  = distance / speed_in_glass;

    double minutes_vacuum = time_in_vacuum / 60;
    double hours_vacuum = minutes_vacuum / 60;
    double years_vacuum = hours_vacuum / 24 / 365.25;

    double minutes_air = time_in_air / 60;
    double hours_air = minutes_air / 60;
    double years_air = hours_air / 24 / 365.25;

    double minutes_water = time_in_water / 60;
    double hours_water = minutes_water / 60;
    double years_water = hours_water / 24 / 365.25;

    double minutes_glass = time_in_glass / 60;
    double hours_glass = minutes_glass / 60;
    double years_glass = hours_glass / 24 / 365.25;


    std::cout << "light -> vacuum = " << minutes_vacuum << " minutes, " << hours_vacuum << " hours, " << years_vacuum << " years and ";
    std::cout << time_in_vacuum << " seconds" << std::endl;

    std::cout << "light -> air    = " << minutes_air << " minutes, " << hours_air << " hours, " << years_air << " years and "; 
    std::cout << time_in_air << " seconds" << std::endl;

    std::cout << "light -> water  = " << minutes_water << " minutes, " << hours_water << " hours, " << years_water << " years and ";
    std::cout << time_in_water << " seconds" << std::endl;

    std::cout << "light -> glass  = " << minutes_glass << " minutes, " << hours_glass << " hours, " << years_glass << " years and ";
    std::cout << time_in_glass << " seconds" << std::endl;

    return 0;
}
