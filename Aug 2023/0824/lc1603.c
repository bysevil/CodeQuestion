#include<stdbool.h>
/*https://leetcode.cn/problems/design-parking-system/description/*/
typedef struct {
    int big;
    int medium;
    int small;
} ParkingSystem;


ParkingSystem* parkingSystemCreate(int big, int medium, int small) {
    ParkingSystem* obj = malloc(sizeof(ParkingSystem));
    obj->big = big;
    obj->medium =medium;
    obj->small = small;
    return obj;
}

bool parkingSystemAddCar(ParkingSystem* obj, int carType) {
    switch(carType){
        case 1:
            if(obj->big) {
                obj->big--;
                return true;
            }
            break;
        case 2:
            if(obj->medium) { 
                obj->medium--;
                return true;
            }
            break;
        case 3:
            if(obj->small) {
                obj->small--;
                return true;
            }
            break;
    }
    return false;
}

void parkingSystemFree(ParkingSystem* obj) {
    free(obj);
}

/**
 * Your ParkingSystem struct will be instantiated and called as such:
 * ParkingSystem* obj = parkingSystemCreate(big, medium, small);
 * bool param_1 = parkingSystemAddCar(obj, carType);
 
 * parkingSystemFree(obj);
*/