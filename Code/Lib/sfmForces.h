#include <memory>
#include <vector>
#include <Eigen/Dense>
#include "sfmBasicTypes.h"
#include "sfmPedestrian.h"

namespace sfm{


class Forces : public Pedestrian {
    public:
    dir2d &desired_direction();
    vec2d &attractive_force();
    double &elipse();
    //sfm::dir2d &repulsive_force();
    //sfm::dir2d &border_repulsive();
    //std::vector<shared_ptr<sfm::Pedestrians> > &Resultant_force();
};
}