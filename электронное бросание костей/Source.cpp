/* электронное бросание костей */
#include <cstdlib>
#include <ctime>
int main()
{
    int rollem(float sides)
    {
        float roll;
        roll = ((float)std::rand() / RAND_MAX + 1.0) * sides / 2.0 + 1.0;
        return static_cast<int>(roll);
    }
}



