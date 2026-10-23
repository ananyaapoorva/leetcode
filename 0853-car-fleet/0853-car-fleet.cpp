class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>>cars;
        for(int i=0;i<position.size();i++){
            pair<int,int>p;
            p.first=position[i];
            p.second=speed[i];
            cars.push_back(p);
        }
        sort(cars.rbegin(),cars.rend());
        
        stack<double>fleet;
        for(const auto& p: cars){
            double t=(double)(target-p.first)/p.second;
            if(fleet.empty()||t>fleet.top()){
                fleet.push(t);
            }
        }

        return fleet.size();
    }
};