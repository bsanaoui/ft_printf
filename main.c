/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 14:53:34 by bsanaoui          #+#    #+#             */
/*   Updated: 2019/11/12 14:54:01 by bsanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int		main()
{
ft_printf("\n<------------- Main Test --------------->\n");




// ft_printf("<--------------------->\n" );
//   a = ft_printf("%2.s", "ABC");
// 	ft_printf("\t printed = %d\n", a);

//   a = ft_printf("%2.s", "ABC");
//   ft_printf("\t printed = %d\n", a);

//  ft_printf("<--------------------->\n" );

//      a = ft_printf("%.*s", -5, "ABC");
//   ft_printf("\t printed = %d\n", a);

//   a = ft_printf("%.*s", -5, "ABC");
//   ft_printf("\t printed = %d\n", a);

//  ft_printf("<---------FINAL ROUND-------->\n" );
// a = ft_printf("ultimate4 %*.*x %*.*X\n", 1, 50, 5000, 1, 0, 10);
//   ft_printf("\t printed = %d\n", a);

//   a = ft_printf("ultimate4 %*.*x %*.*X\n", 1, 50, 5000, 1, 0, 10);
//   ft_printf("\t printed = %d\n", a);


  int t;
  char c;

  c = 'a';
  t = 50;
  printf("pp %.50d\n", 10000);
  printf("p1 %.4s\n", "cccc");
  printf("p2 %.10s\n", "cccc");
  printf("p3 %.4s\n", NULL);
  printf("p4 %.5s\n", "aaaaa");
  printf("p5 %.3d\n", 100);
  printf("p6 %.0d\n", 100);
  printf("p7 %.4d\n", 100);
  printf("p8 %.10d\n", 100);
  printf("p9 %.50d\n", 100);
  printf("p10 %.1d\n", 100);
  printf("p11 %.3d\n", 100);
  printf("p12 %.0d\n", 0);
  printf("p13 %.3i\n", 100);
  printf("p14 %.0i\n", 100);
  printf("p15 %.4i\n", 100);
  printf("p16 %.10i\n", 100);
  printf("p17 %.50i\n", 100);
  printf("p18 %.1i\n", 100);
  printf("p19 %.3x\n", 100);
  printf("p20 %.0x\n", 0);
  printf("p21 %.3x\n", 100);
  printf("p22 %.0x\n", 100);
  printf("p23 %.4x\n", 100);
  printf("p24 %.10x\n", 100);
  printf("p25 %.50x\n", 100);
  printf("p26 %.1x\n", 100);
  printf("p27 %.3x\n", 100);
  printf("p28 %.0x\n", 0);
  printf("p29 %.3u\n", 100);
  printf("p30 %.0u\n", 100);
  printf("p31 %.4u\n", 100);
  printf("p32 %.10u\n", 100);
  printf("p33 %.50u\n", 100);
  printf("p34 %.1u\n", 100);
  printf("p35 %.3u\n", 100);
  printf("p36 %.0u\n", 0);
  printf("%%\n");
  printf("Hello 42 school! %s\n", NULL);
  printf("%010%\n");
  printf("%d\n", 2147483647);
  printf("%x\n", 2147483647);
  printf("%X\n", 2147483647);
  printf("%x\n", 0);
  printf("%010x\n", 0);
  printf("%010x\n", 20);
  printf("%010x\n", -20);
  printf("%10x\n", 20);
  printf("%10.2x\n", -20);
  printf("%-10x\n", 50);
  printf("%-15x\n", 0);
  printf("%.1x\n", 500);
  printf("%*.*x\n", 50, 10, 2);
  printf("%x\n", -1);
  printf("%40.50d\n", 50);
    printf("%d\n", -589);
    printf("%-4d\n", -2464);
    printf("%.5d\n", -2372);
  printf("%p\n", NULL);
  printf("%15p\n", NULL);
  printf("%-15p\n", NULL);
    printf("ret = %d\n", printf("%%p::[%010d]\n", -8473));
    printf("ret = %d\n", printf("%%p::[%10d]\n", -8473));
    printf("ret = %d\n", printf("%%p::[%.5d]\n", -8473));
    printf("ret = %d\n", printf("%%p::[%01.1d]\n", -8473));
    printf("ret = %d\n", printf("%%p::[%010.1d]\n", -8473));
    printf("ret = %d\n", printf("%%p::[%01.50d]\n", -8473));
    printf("ret = %d\n", printf("%%p::[%1.50d]\n", -8473));
    printf("ret = %d\n", printf("%%p::[%0100.50d]\n", -8473));
    printf("ret = %d\n", printf("%%p::[%010d]\n", 8473));
    printf("ret = %d\n", printf("%%p::[%10d]\n", 8473));
    printf("ret = %d\n", printf("%%p::[%.5d]\n", 8473));
    printf("ret = %d\n", printf("%%p::[%01.1d]\n", 8473));
    printf("ret = %d\n", printf("%%p::[%010.1d]\n", 8473));
    printf("ret = %d\n", printf("%%p::[%01.50d]\n", 8473));
    printf("ret = %d\n", printf("%%p::[%1.50d]\n", 8473));
    printf("ret = %d\n", printf("%%p::[%0100.50d]\n", 8473));
  printf("%c\n", 'a');
  printf("%10c\n", 't');
  printf("%1c\n", 'y');
  printf("%50.2s\n", "Coucou");
  printf("%50.2s\n", NULL);
  printf("%5.0s\n", "Hello");
  printf("%.1s\n", "Test");
  printf("%10s\n", NULL);
  printf("%10s\n", "Ok");
  printf("%d\n", printf("1chiffre 1 %d chiffre 2 %d\n", 42, -42));
  printf("%d\n", printf("4chiffre 1 %-12d chiffre 2 %-12d\n", 42, -42));
  printf("t1 %050d\n", 10);
  printf("t2 %-50d\n", 10);
  printf("t3 %50.0d\n", 10);
  printf("t4 %50.50d\n", 10);
  printf("t5 %50.10d\n", 10);
  printf("t6 %*.*d\n", 50,  5, 10);
  printf("t7 %1.50d\n", -10);
  printf("t8 %1.50d\n", 10);
  printf("t9 %2.2d\n", 10);
  printf("t10 %2.2d\n", -10);
  printf("t12 %.0d\n", 0);
  printf("t13 %01d\n", -20);
  printf("t14 %10d\n", 1000);
  printf("%d\n", printf("5chiffre 1 %0d chiffre 2 %0d\n", 42, -42));
  printf("%d\n", printf("6chiffre 1 %012d chiffre 2 %012d\n", 42, -42));
  printf("%d\n", printf("8chiffre 1 %*d chiffre 2 %*d\n", 42, 6, 6, 6));
  printf("%d\n", printf("15chiffre 1 %.d chiffre 2 %.d\n", 42, -42));
  printf("%d\n", printf("4caractere 1 %12c caractere 2 %12c\n", 'a', 'c'));
  printf("1caractere 1 %c caractere 2 %c\n", 'a', 'c');
  printf("%d\n", printf("1hexa-maj 1 %X hexa-maj 2 %X\n", 42, -42));
  printf("%d\n", printf("4hexa-maj 1 %12X hexa-maj 2 %int12X\n", 42, -42));
  printf("%d\n", printf("4hexa-maj 1 %-12X hexa-maj 2 %-12X\n", 42, -42));
  printf("%d\n", printf("5hexa-maj 1 %0X hexa-maj 2 %0X\n", 42, -42));
  printf("%d\n", printf("6hexa-maj 1 %012X hexa-maj 2 %012X\n", 42, -42));
  printf("%d\n", printf("8hexa-maj 1 %*X hexa-maj 2 %*X\n", 42, 6, 6, 6));
  printf("%d\n", printf("1unsigned 1 %u unsigned 2 %u\n", 42, -42));
  printf("%d\n", printf("4unsigned 1 %12u unsigned 2 %12u\n", 42, -42));
  printf("%d\n", printf("4unsigned 1 %-12u unsigned 2 %-12u\n", 42, -42));
  printf("%d\n", printf("5unsigned 1 %0u unsigned 2 %0u\n", 42, -42));
  printf("%d\n", printf("6unsigned 1 %012u unsigned 2 %012u\n", 42, -42));
  printf("%d\n", printf("8unsigned 1 %*u unsigned 2 %*u\n", 42, 6, 6, 6));
  printf("%d\n", printf("15unsigned 1 %.u unsigned 2 %.u\n", 42, -42));
  printf("%d\n", printf("%%\n")); 
  printf("%d\n", printf("%-.12u\n", -20000000));
  printf("%d\n", printf("%-.12i\n", -20000000));
  printf("%d\n", printf("truc\n"));
  printf("04 Test de chiffre sans h : %d, et %d\n", 432767, -432767);
  printf("31 This is an int : %.0d\n", 0);
  printf("32 This is an int : %0d\n", 0);
  printf("percent 1 %012%\n");
  printf("percent 2 %12%\n");
  printf("percent 3 %-12%\n");
  printf("percent 4 %0%\n");
  printf("%d\n", t);
  printf("%d\n", t);
  printf("%d\n", t);
  printf("%d\n", t);
  printf("%d\n", t);
  printf("%d\n", t);
  printf("%d\n", t);
  printf("%d\n", t);
  printf("%d\n", printf("1string 1 %s string 2 %s\n", "toto", "bonjour"));
  printf("%d\n", printf("4string 1 %12s string 2 %12s\n", "toto", "bonjour"));
  printf("%d\n", printf("4string 1 %-12s string 2 %-12s\n", "toto", "bonjour"));
  printf("st1 %*.*d\n", 10, 10, 50);
  printf("st2 %*.*d\n", 1, 50, 50);
  printf("st3 %*.*d\n", 0, 0, 50);
  printf("st4 %*.*d\n", 0, 50, 50);
  printf("st5 %*.*d\n", 10, 0, 50);
  printf("st6 %*.*d\n", 10, 10, 50);
  printf("st12 %*d\n", 10, 50);
  printf("st13 %*d\n", 0, 0);
  printf("st14 %.*d\n", 0, 0);
  printf("st15 %*d\n", 50, 5);
  printf("st16 %0.*d\n", 50, 5);
  printf("st17 %0.*d\n", 0, 0);
  printf("st7 %*.*s\n", 1, 50, "hey");
  printf("st8 %*.*s\n", 0, 0, "coucou");
  printf("st9 %*.*s\n", 0, 50, "hey");
  printf("st10 %*.*s\n", 10, 0, "dsa");
  printf("st11 %*.*s\n", 10, 10, "hello");
  printf("st8 %.*s\n", 0, "coucou");
  printf("st9 %*s\n", 0, "hey");
  printf("st10 %*s\n", 10, "dsa");
  printf("st118 %*s\n", 100, "hello");
  printf("st119 %*s\n", 1000, "hello");
  printf("st120 %*s\n", 10000, "hello");
  printf("st121 %*s\n", 100000, "hello");
  printf("st118 %*d\n", 100, 0);
  printf("st119 %*d\n", 1000, 10);
  printf("st120 %*d\n", 10000, 467);
  printf("st121 %*d\n", 100000, -589);
  printf("ultimate1 %*d        %*i\n", 500, 0, 10, 10);
  printf("ultimate2 %*d %*s %*x %*X %*i %*u\n", 1, 5000, 1, "hey", 10, 54700, 1, 300, 10000, -55, 1, -60);
  printf("ultimate3 %*.*d %*.*s\n", 1, 50, 5000, 1, 0, "hey");
  printf("ultimate4 %*.*x %*.*X\n", 1, 50, 5000, 1, 0, 10);
  printf("ultimate5 %*.*u\n", 1, 50, 5000);
  printf("neg1 %*s\n", -9, "coucou");
  printf("neg2 %*.*s\n", -9, 4, "coucou");
  printf("neg3 %*s\n", -9, NULL);
  printf("neg4 %*.*s\n", 0, 0, "coucou");
  printf("neg5 %*s\n", -100, "coucou");
  printf("neg6 %*s\n", -156, "coucou");
  printf("neg7 %*.*s\n", -1586, 15, "coucou");
  printf("neg8 %*.*s\n", -1586, 15, "coucou");
  printf("neg9 %*.*s\n", 15856, 155, "coucou");
  printf("neg10 %*.*s\n", -15586, 15, "coucou");
  printf("neg11 %*.*s\n", -15586, 15, "coucou");
  printf("neg1 %*d\n", -9, 150);
  printf("neg2 %*.*d\n", -9, 4, 1555);
  printf("neg3 %*d\n", -9, -255);
  printf("neg4 %*.*d\n", 0, 0, -30);
  printf("neg5 %*d\n", -100, -589);
  printf("neg6 %*d\n", -156, 15555);
  printf("neg7 %*.*d\n", -1586, 15, 0);
  printf("neg8 %*.*d\n", -1586, 15, 300);
  printf("neg9 %*.*d\n", 15856, 155, -3000);
  printf("neg10 %*.*d\n", -15586, 15, 150);
  printf("neg11 %*.*d\n", -15586, 15, 0);
  printf("***************%*s%*d**************%*u*************\n", 10, "coucou", 10, 10, -50, 20);
  printf("taaa %100s\n", "hello");

  
  ft_printf("%d\n", ft_printf("ultimate4 %*.*x %*.*X\n", 1, 50, 5000, 1, 50, 5000));
  ft_printf("%%\n");
  ft_printf("%d\n", 42);
  ft_printf("%d%d\n", 42, 41);
  ft_printf("%d%d%d\n", 42, 43, 44);
  ft_printf("%x\n", 505);
  ft_printf("%X\n", 505);
  ft_printf("%p\n", &ft_printf);
  ft_printf("%20.15d\n", 54321);
  ft_printf("%-10d\n", 3);
  ft_printf("%010d\n", 1);
  ft_printf("%\n");
  ft_printf("%u\n", 4294967295);
  ft_printf("%x\n", 1000);
  ft_printf("%s\n", NULL);
  ft_printf("%s\n", L"ݗݜशব");
  ft_printf("%s%s\n", "test", "test");
  ft_printf("%s%s%s\n", "test", "test", "test");
  ft_printf("<--------------------->\n" );
int  a = ft_printf("%2.s", "ABC");
	ft_printf("\t printed = %d\n", a);

  a = ft_printf("%2.s", "ABC");
  ft_printf("\t printed = %d\n", a);

 ft_printf("<--------------------->\n" );

     a = ft_printf("%.*s", -5, "ABC");
  ft_printf("\t printed = %d\n", a);

  a = ft_printf("%.*s", 1,"he");
  ft_printf("\t printed = %d\n", a);

   ft_printf("<---------FIN--------->\n" );

     a = ft_printf("%.*s", -5, NULL);
  ft_printf("\t printed = %d\n", a);

  ft_printf("<--------------------->\n" );

     a = ft_printf("%1.3s", NULL);
  ft_printf("\t printed = %d\n", a);

   ft_printf("<--------------------->\n" );

     a = ft_printf("%1.*s", -5, NULL);
  ft_printf("\t printed = %d\n", a);


/*********** big test *************/




	ft_printf("\n<------------- End of Test --------------->\n\n");
	return (0);
}
