#include <iostream>
using namespace std;

int Rotations(string directions[], int num);

int main() 
{
    int num;
    cout << "Enter the number of directions: ";
    cin >> num;
    string directions[num];

    cout << "Enter the directions (left / right) one by one: " << endl;
    for (int i = 0; i < num; i++) 
    {
        cin >> directions[i];
    }
    int Rotation = Rotations(directions, num);
    cout << Rotation;
}
int Rotations(string directions[], int num) 
{
    int Angle = 0;
    for (int i = 0; i < num; i++) 
    {
        if (directions[i] == "right") 
        {
            Angle = Angle +  90; 
        } else if (directions[i] == "left") 
        {
            Angle = Angle - 90; 
        }
    }
    return Angle / 360; 
}

