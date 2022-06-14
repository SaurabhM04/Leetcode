class ParkingSystem
{
public:
  vector<int> arr;
  ParkingSystem(int big, int medium, int small)
  {
    arr = {big, medium, small};
  }

  bool addCar(int carType)
  {
    if (arr[carType - 1])
    {
      arr[carType - 1] -= 1;
      return true;
    }
    return false;
  }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */