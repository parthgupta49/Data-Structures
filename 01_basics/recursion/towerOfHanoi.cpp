#include <iostream>

using namespace std;


void TOH(int n,int fromTower,int usingTower,int toTower){
    if (n == 0)
        return;
    
    TOH(n-1,fromTower,toTower,usingTower);
    cout << "Move disk " << n << " from tower " << fromTower << " to " << toTower <<endl;
    TOH(n-1,usingTower,fromTower,toTower);
}

void TOH2(int n,int fromTower, int toTower, int usingTower)
{
    if(n == 0)
    {
        return;
    }

    TOH2(n-1,fromTower,usingTower,toTower);
    cout << "move disk " << n << " from tower " << fromTower << " to " << toTower << endl;
    TOH2(n-1,usingTower,toTower,fromTower);

}

int main()
{
    TOH(3,1,2,3);
    TOH2(3,1,3,2);
    return 0;
}
