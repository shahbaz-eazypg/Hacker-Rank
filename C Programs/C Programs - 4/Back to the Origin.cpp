#include <cstdio>
using namespace std;

int main()
{
    long long treasure_x, treasure_y;
    scanf("%lld %lld", &treasure_x, &treasure_y);

    int no_of_points;
    scanf("%d", &no_of_points);

    long long origin_x = treasure_x, origin_y = treasure_y;

    while(no_of_points--)
    {
        long long x_i, y_i;
        scanf("%lld %lld", &x_i, &y_i);

        origin_x -= x_i;
        origin_y -= y_i;
    }

    printf("%lld %lld\n", origin_x, origin_y);
    return 0;
}
