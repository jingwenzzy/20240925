#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <string.h>

int main()
{
    int n = 0, temp = 1, count = 0;
    char country[2001][76];
    char output_country[2001][76];
    char name[76];
    int country_beauty[2001];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", country[i]);
        gets(name);
    }
    //把國家名稱依照字母順序排序
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (strcmp(country[j], country[j + 1]) > 0)
            {
                char temp[76];
                strcpy(temp, country[j]);
                strcpy(country[j], country[j + 1]);
                strcpy(country[j + 1], temp);
            }
        }
    }
    //計算每個國家有多少個
    strcpy(output_country[0], country[0]);
    for (int i = 0; i < n; i++)
    {
        if (strcmp(country[i], country[i + 1]) == 0)
        {
            temp++;
        }
        else
        {
            country_beauty[count] = temp;
            temp = 1;
            count++;
            strcpy(output_country[count], country[i + 1]);
        }
    }

    //把國家依人數多寡氣泡排序
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (country_beauty[j + 1] > country_beauty[j])
            {
                char temp[76];
                strcpy(temp, output_country[j]);
                strcpy(output_country[j], output_country[j + 1]);
                strcpy(output_country[j + 1], temp);
                int temp2;
                temp2 = country_beauty[j];
                country_beauty[j] = country_beauty[j + 1];
                country_beauty[j + 1] = temp2;
            }
        }
    }
    for (int i = 0; i < count; i++)
    {
        printf("%s ", output_country[i]);
        printf("%d\n", country_beauty[i]);
    }
    return 0;
}