#include <bits/stdc++.h>
using namespace std;

// function convert second into day
// hours, minutes and seconds
void ConvertSectoDay(int n)
{
    //int
    int day = n / (24 * 3600);

    n = n % (24 * 3600);
    int hour = n / 3600;

    n %= 3600;
    int minutes = n / 60 ;

    n %= 60;
    int seconds = n;

    cout << day << " " << "days " << hour
         << " " << "H " << minutes << " "
         << "M " << seconds << " "
         << "S "  << endl;
}

// Driver code
int main()
{
    // Given n is in seconds
    int n = 15005117;
    //int n = 6945200;

    ConvertSectoDay(n);
    return 0;
}
