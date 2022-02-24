/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed <mokoucha@students-42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 20:34:41 by mohamed           #+#    #+#             */
/*   Updated: 2022/02/24 20:35:14 by mohamed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void    start_func(void);
void    about(void);
void    footer_func(void);

int x;
int solde;

void header_func(void)
{
    printf("========Welcome to C Game========\n");
}

void    select_func(void)
{
    
    printf("   Please Select Your choise: \n");
    printf("    1) Start the Game \n");
    printf("    2) About The Game\n");
    printf("    3)  exit\n");

    printf("    Please Enter your choise Here :");
    scanf("%d", &x);   
    
    if (x == 1)
    {
        start_func();
    }
     if (x == 2)
    {
        about();
    }
     
    else {
        footer_func();
         exit(0);
         
    }
    
    
    
}

void    start_func(void)
{
    int v;
    int c;
    
   
    
    solde = 0;
    printf("Q1 : What is the number of days in year: ");
    scanf("%d", &v);
    if (v == 365)
    {
        printf("\nright\n");
         solde = solde + 10;
     printf ("youre solde is : %d \n", solde);
     printf("Q2 : What is the number of days in week: ");
     
    scanf("%d", &c);
    
    if (c == 7)
    {
        printf("\nright\n");
        solde = solde + 10;
     printf ("youre solde is : %d \n", solde);
    }
    else
    {
            printf("\nwrong\n");    
    }
    }
    else
    {
            printf("\nwrong\n");    
    }
    

}

void    about(void)
{
       int dd;

    printf("\n    This Game coded By Mohamed Kouchaoui its just for fun \n\n");
    printf("    if you want to back to game type 1 :");
    scanf("%d", &dd);

    if (dd == 1)
    {
       header_func();
    select_func();
    footer_func();
    }
    exit(0);
}
void    footer_func(void)
{
    printf("=========Good Luck===============");
}


int main()
{
    header_func();
    select_func();
    return 0;
}

