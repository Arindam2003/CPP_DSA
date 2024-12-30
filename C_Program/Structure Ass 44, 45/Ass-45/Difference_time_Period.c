#include <stdio.h>
#include <string.h>
struct time
{
    int hr;
    int min;
    int sec;
};
int max(struct time t1, struct time t2)
{
    if (t1.hr > t2.hr)
    {
        return 1;
    }
    else if (t1.hr < t2.hr)
    {
        return 0;
    }
    else if (t1.min > t2.min)
    {
        return 1;
    }
    else if (t1.min < t2.min)
    {
        return 0;
    }
    else if (t1.sec > t2.sec)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct time differenttime(struct time t1, struct time t2)
{
    struct time t3;
    if (max(t1, t2))
    {
        if (t1.sec >= t2.sec)
        {
            t3.sec = t1.sec - t2.sec;
        }
        else
        {
            t1.sec = t1.sec + 60;
            t1.min = t1.min - 1;
            t3.sec = t1.sec - t2.sec;
        }
        if (t1.min >= t2.min)
        {
            t3.min = t1.min - t2.min;
        }
        else
        {
            t1.min = t1.min + 60;
            t1.hr = t1.hr - 1;
            t3.min = t1.min - t2.min;
        }
        t3.hr = t1.hr - t2.hr;
    }
    else
    {
        if (t2.sec >= t1.sec)
        {
            t3.sec = t2.sec - t1.sec;
        }
        else
        {
            t2.sec = t2.sec + 60;
            t2.min = t2.min - 1;
            t3.sec = t2.sec - t1.sec;
        }
        if (t2.min >= t1.min)
        {
            t3.min = t1.min - t2.min;
        }
        else
        {
            t2.min = t2.min + 60;
            t2.hr -= 1;
            t3.min = t2.min - t1.min;
        }
        t3.hr = t2.hr - t1.hr;
    }
    return t3;
}

struct time input()
{
    struct time t;
    printf("Hour Min Sec\n");
    scanf("%d %d %d", &t.hr, &t.min, &t.sec);
    return t;
}

void display(struct time t)
{
    printf("\nDiffrence Between Time is:\n");
    printf(" %dHr %dMin %dSec", t.hr, t.min, t.sec);
}

int main()
{
    struct time t1, t2, t3;
    t1 = input();
    t2 = input();
    t3 = differenttime(t1, t2);
    display(t3);
    return 0;
}