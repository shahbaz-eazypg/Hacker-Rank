#include <iostream>
#include <vector>
#include <algorithm>

#define all(v) (v).begin(), (v).end()
using namespace std;

int main()
{
    int no_of_chapters, time;
    cin >> no_of_chapters >> time;

    vector<int> time_for(no_of_chapters + 1, 0);
    for(int i = 1; i <= no_of_chapters; i++) cin >> time_for[i];

    sort(all(time_for));

    int no_of_finished_chapters = 0;
    for(int chapter_i = 1; chapter_i <= no_of_chapters && time_for[chapter_i] <= time; chapter_i++)
        no_of_finished_chapters++, time -= time_for[chapter_i];

    cout << no_of_finished_chapters;
    return 0;
}

