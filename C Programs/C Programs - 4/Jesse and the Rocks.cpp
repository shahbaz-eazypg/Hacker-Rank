#include <cstdio>
using namespace std;

int main()
{
    int no_of_rocks, jesse_strength;
    scanf("%d %d", &no_of_rocks, &jesse_strength);

    int no_of_skipped_rocks = 0;
    int no_of_broken_rocks = 0;

    for(int i = 1; i <= no_of_rocks; i++)
    {
        int strength_i;
        scanf("%d", &strength_i);

        no_of_broken_rocks += (strength_i <= jesse_strength);
        no_of_skipped_rocks += (strength_i > jesse_strength);

        if(no_of_skipped_rocks > 1)
            break;
    }

    printf("%d\n", no_of_broken_rocks);
    return 0;
}
