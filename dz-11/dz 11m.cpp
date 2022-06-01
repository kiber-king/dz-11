#include "dz 11.h"
int main()
{
    //Romb r;
    //float q=r.Pl(2, 3);
    //std::cout << q;
    int size = 5;
    float a = 0;
    float b = 0;
    std::vector <Rect> v1;
    std::vector <int> v2;
    for (int i = 0; i < size; i++) {
        a = 1 + rand() % 10;
        b = 1 + rand() % 20;
        Rect r(a, b);
        v1.push_back(r);
        v2.push_back(r.Pl(a,b));

    }
    for (int i = 0; i < size; i++) {
        std::cout << "Rect a,b:" << v1[i].get_a() << " " << v1[i].get_b() << "  S: " << v2[i]<<"\n";
    }


}