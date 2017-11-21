
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtahirov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 21:31:53 by jtahirov          #+#    #+#             */
/*   Updated: 2017/11/18 14:37:43 by jtahirov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	

	/* ft_printf("Testing for characters = |%c|", 'a'); */
	/* printf(" -> = |%c|\n", 'a'); */
/* /1* ------------------------------------------- *1/ */
	/* ft_printf("Testing percent sign = |%%|"); */
	/* printf(" -> = |%%|\n"); */
	/* ft_printf("Testing percent sign = |%5%|"); */
	/* printf(" -> = |%5%|\n"); */
	/* ft_printf("Testing percent sign = |%-5%|"); */
	/* printf(" -> = |%-5%|\n"); */
	/* ft_printf("Testing percent sign = |%0%|"); */
	/* printf(" -> = |%0%|\n"); */
/* /1* ------------------------------------------- *1/ */
	/* ft_printf("Simple integer = |%i|", 25); */
	/* printf(" -> |%i|\n", 25); */
	/* ft_printf("Simple negative integer = |%i|", -25); */
	/* printf(" -> = |%i|\n", -25); */
	/* ft_printf("Testing big number = |%d|",1560133635); */
	/* printf(" -> = |%d|\n",1560133635); */
	/* ft_printf("Testing bit negative number = |%d|", -2035065302); */
	/* printf(" -> = |%d|\n", -2035065302); */
/* /1* --------------------------------------------- *1/ */
	/* ft_printf("Testing width option with number = |%5d|", 0); */
	/* printf(" -> = |%5d|\n", 0); */
	/* ft_printf("Testing width option with negative number = |%5d|", -7); */
	/* printf(" -> = |%5d|\n", -7); */
	/* ft_printf("Testing width option with big number = |%5d|", 1560133635); */
	/* printf(" -> = |%5d|\n", 1560133635); */
	/* ft_printf("Testing width option with big negative number = |%5d|", -2035065302); */
	/* printf(" -> = |%5d|\n", -2035065302); */
/* /1* ---------------------------------------------- *1/ */
	/* ft_printf("Testing justify option with number = |%-5d|", 0); */
	/* printf(" -> = |%-5d|\n", 0); */
	/* ft_printf("Testing justify option with negative number = |%-5d|", -7); */
	/* printf(" -> = |%-5d|\n", -7); */
	/* ft_printf("Testing justify option with big number = |%-5d|", 1560133635); */
	/* printf(" -> = |%-5d|\n", 1560133635); */
	/* ft_printf("Testing justify option with big negative number = |%-5d|", -2035065302); */
	/* printf(" -> = |%-5d|\n", -2035065302); */
/* /1* ---------------------------------------------- *1/ */
	/* ft_printf("Testing plus sign option with number = |%+5d|", 0); */
	/* printf(" -> = |%+5d|\n", 0); */
	/* ft_printf("Testing plus sign option with negative number = |%+5d|", -7); */
	/* printf(" -> = |%+5d|\n", -7); */
	/* ft_printf("Testing plus sign option with big number = |%+5d|", 1560133635); */
	/* printf(" -> = |%+5d|\n", 1560133635); */
	/* ft_printf("Testing plus sign option with big negative number = |%+5d|", -2035065302); */
	/* printf(" -> = |%+5d|\n", -2035065302); */
/* /1* ---------------------------------------------- *1/ */

	/* ft_printf("Testing zero flag option with number = |%+05d|", 0); */
	/* printf(" -> = |%+05d|\n", 0); */
	/* ft_printf("Testing zero flag option with negative number = |%+05d|", -7); */
	/* printf(" -> = |%+05d|\n", -7); */
	/* ft_printf("Testing zero flag option with big number = |%+05d|", 1560133635); */
	/* printf(" -> = |%+05d|\n", 1560133635); */
	/* ft_printf("Testing zero flag option with big negative number = |%+05d|", -2035065302); */
	/* printf(" -> = |%+05d|\n", -2035065302); */
/* /1* ---------------------------------------------- *1/ */
	/* ft_printf("Testing width option with string |%5s|",""); */
	/* printf(" -> = |%5s|\n",""); */
	/* ft_printf("Testing width option with string |%5s|","a"); */
	/* printf(" -> = |%5s|\n","a"); */
	/* ft_printf("Testing width option with string |%5s|","ab"); */
	/* printf(" -> = |%5s|\n","ab"); */
	/* ft_printf("Testing width option with string |%5s|","abcdefg"); */
	/* printf(" -> = |%5s|\n","abcdefg"); */
/* /1* ---------------------------------------------- *1/ */
	/* ft_printf("Testing my bonus binary = |%b|\n", 10); */
	/* ft_printf("Testing my bonus binary = |%b|\n", 5); */
	/* ft_printf("Testing my bonus binary = |%b|\n", 7); */
	/* ft_printf("Testing my bonus binary = |%b|\n", 2344); */
/* /1* ---------------------------------------------- *1/ */

	/* ft_printf("Testing plus and minus together option with number = |%+-5d|", 0); */
	/* printf(" -> = |%+-5d|\n", 0); */
	/* ft_printf("Testing plus and minus together option with negative number = |%+-5d|", -7); */
	/* printf(" -> = |%+-5d|\n", -7); */
	/* ft_printf("Testing plus and minus together option with big number = |%+-5d|", 1560133635); */
	/* printf(" -> = |%+-5d|\n", 1560133635); */
	/* ft_printf("Testing plus and minus together option with big negative number = |%+-5d|", -2035065302); */
	/* printf(" -> = |%+-5d|\n", -2035065302); */
/* /1* ----------------------------------------------- *1/ */
	/* ft_printf("Testing invisible plus option with number = |% -5d|", 0); */
	/* printf(" -> = |% -5d|\n", 0); */
	/* ft_printf("Testing invisible plus option with negative number = |% -5d|", -7); */
	/* printf(" -> = |% -5d|\n", -7); */
	/* ft_printf("Testing invisible plus option with big number = |% -5d|", 1560133635); */
	/* printf(" -> = |% -5d|\n", 1560133635); */
	/* ft_printf("Testing invisible plus option with big negative number = |% -5d|", -2035065302); */
	/* printf(" -> = |% -5d|\n", -2035065302); */
/* /1* ------------------------------------------------ *1/ */
 	 /* ft_printf("Testing # option with hex = |%#x|", 234); */  
 	 /* printf(" -> = |%#x|\n", 234); */  
 	 /* ft_printf("Testing # option with hex = |%#x|", 87); */  
	/*  printf(" -> = |%#x|\n", 87); */ 
 	/* ft_printf("Testing width option with hex = |%10x|", 42); */ 
 	/* printf(" -> = |%10x|\n", 42); */ 
	/* ft_printf("Testing width option and - flag with hex = |%-10x|", 42); */
	/* printf(" -> = |%-10x|\n", 42); */
	/* ft_printf("Testing # option with octal = |%#o|", 234); */
	/* printf(" -> = |%#o|\n", 234); */
	/* ft_printf("Testing # option with octal = |%#o|", 87); */
	/* printf(" -> = |%#o|\n", 87); */
/* /1* ----------------------------------------------- *1/ */
	/* int x = 5; */
	/* int *y = &x; */


	/* ft_printf("Testing addr = |%p|", y); */
	/* printf(" -> = |%p|\n", y); */
	/* ft_printf("Testing addr = |%p|", &x); */
	/* printf(" -> = |%p|\n", &x); */

	/* ft_printf("Testing overflow with unsigned = |%lu|", 3000000000); */
	/* printf(" -> = |%lu|\n", 3000000000); */

	/* ft_printf("TEsting multipile +- flags = |%++++++-i|", 348543); */
	/* printf(" -> = |%++++++-i|\n", 348543); */
/* /1* ----------------------------------------------------- *1/ */



 	/* ft_printf("Testing X specifier = |%X|", 42); */ 
 	/* printf(" -> = |%X|\n", 42); */ 
 	/* ft_printf("Testing x specifier with value 0 = |%x|", 0); */ 
 	/* printf(" -> = |%x|\n", 0); */ 


/* /1* ----------------------------------------------------- *1/ */

	/* ft_printf("Testing j length with hext = |%jx|", -4294967296); */
	/* printf(" -> = |%jx|\n", -4294967296); */
	/* ft_printf("Testing l length with hex = |%lx|", 9223372036854775807); */
	/* printf(" -> = |%lx|\n", 9223372036854775807); */
/* /1* ------------------------------------------------------ *1/ */

	/* ft_printf("Testing # flag with hex given 0 = |%#x|", 0); */
	/* printf(" -> = |%#x|\n", 0); */
	/* ft_printf("Testing # flag with width 8 = |%#8x|", 42); */
	/* printf(" -> = |%#8x|\n", 42); */
	/* ft_printf("Testing # flag with 0 and width 8 = |%#08x|", 42); */
	/* printf(" -> = |%#08x|\n", 42); */
	/* ft_printf("Testimg # - and 0 and width 8 with hex = |%#-08x|", 42); */
	/* printf(" -> = |%#-08x|\n", 42); */
	/* ft_printf("%.2s is a string", "this"); */
	/* printf(" -> %.2s is a string\n", "this"); */

	/* ft_printf("Testing precision with hex = |%.2x|", 5427); */
	/* printf(" -> = |%.2x|\n", 5427); */
	/* ft_printf("Testing null string = |%s|", NULL); */
	/* printf(" -> = |%s|\n", NULL); */

	/* ft_printf("Testing casting to unsign int = |%u|", -1); */
	/* printf(" -> = |%u|\n", -1); */

	/* ft_printf("Testing precision with simple d = |%.2d|", 4242); */
	/* printf(" -> = |%.2d|\n", 4242); */



	/* ft_printf("Testing c = null = |%c|", 0); */
	/* printf(" -> = |%c|\n", 0); */
	/* ft_printf("Testing precision width and flag 0 with d = |%03.2d|", 0); */
	/* printf(" -> = |%03.2d|\n", 0); */
	/* ft_printf("|%o|", 0); */
	/* printf(" -> |%o|\n", 0); */
	/*  ft_printf("@moulitest: |%#.x| + |%#.0x|", 0, 0); */ 
	/*  printf(" -> |%#.x| + |%#.0x|\n", 0, 0); */ 
	/* ft_printf("@moulitest: |%.x| |%.0x|", 0, 0); */
	/* printf("\n@moulitest: |%.x| |%.0x|\n", 0, 0); */
	
	/* ft_printf("|%5.x| |%5.0x|\n", 0, 0); */
	/*  printf("|%5.x| |%5.0x|\n", 0, 0); */ 
	/* ft_printf("@moulitest: |%.d| |%.0d|\n", 42, 43); */
	/* printf("@moulitest: |%.d| |%.0d|\n", 42, 43); */
	/* ft_printf("|%0+3.2d|\n", 0); */
	/* printf("|%0+3.2d|\n", 0); */
	/* ft_printf("|%05d|\n", 42); */
	/* printf("|%05d|\n", 42); */
	/* ft_printf("@moulitest: |%5.d| |%5.0d|\n", 0, 0); */
	/* printf("@moulitest: |%5.d| |%5.0d|\n", 0, 0); */
	/* ft_printf("|%u|\n", 0); */
	/* printf("|%u|\n", 0); */
	/* ft_printf("|%+u|\n", 4294967295); */
	/* printf("|%+u|\n", 4294967295); */
	/* ft_printf("|%zo|, |%zo|\n", 0, 18446744073709551615); */
	/* printf("|%zo|, |%zo|\n", 0, 18446744073709551615); */
	/*  ft_printf("|%zO|, |%zO|\n", 0, 65535); */
	/* ft_printf("Testing width with p specifier\n  |%-5p|\n", 0); */
	/* printf("p |%-5p|\n", 0); */
	/* ft_printf("  |%05p|\n", 0); */
	/* printf("p |%05p|\n", 0); */
	/* ft_printf("  |% 5p|\n", 0); */
	/* printf("p |% 5p|\n", 0); */
	/* ft_printf("|%#o|\n", 0); */
	/* printf("|%#o|\n", 0); */
	/* ft_printf("|%lo|\n", 2147483648); */
	/* printf("|%lo|\n", 2147483648); */
	 ft_printf("|%S|\n", L"@@"); 
	 printf("|%S|\n", L"@@");

	return (0);
}
