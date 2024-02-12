#include<stdio.h>
main()
{
    int a, b, n, i;
    scanf("%d", &b);
    int s[i];
    for (i = 0; i < n; i++)
    {
        if (i < a)
            {
				s[i] = a[i % b];
			}
			else {
				s[i] = s[i - a];
			}
    }
}
