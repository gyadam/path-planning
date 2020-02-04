#ifndef PLANNER_H
#define PLANNER_H

#include "vehicle.h"

class Planner {

    public:
    Planner();
    vector<vector<double>> generate_trajectory(string state, Vehicle car, vector<double> previous_path_x, vector<double> previous_path_y, vector<double> map_waypoints_s, vector<double> map_waypoints_x, vector<double> map_waypoints_y);
    vector<string> get_successor_states(Vehicle car);
    int proximity_to_other_vehicles(int desired_lane, Vehicle car, vector<vector<double>> sensor_data);
    double lane_speed_cost(int desired_lane, Vehicle car, vector<vector<double>> sensor_data);
    ~Planner();


};

#endif