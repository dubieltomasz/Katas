using namespace std;
class Bouncingball
{
public:
    static int bouncingBall(double h, double bounce, double window)
    {
      if(h<0 || bounce<=0 || bounce>=1 || window>h)
        return -1;
       
      int bounces = -1;
      
      while(h > window)
      {
        bounces += 2;
        h *= bounce;
      }
        
      return bounces;
    }
};
