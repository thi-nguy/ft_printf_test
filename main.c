#include "ft_printf.h"
void c(void)
{
	
	printf("--------------------%%c--------------------\n");		//Perfect
	printf("01) Vrai PRINTF : |%c|\n", 'a');
	ft_printf("01) Mon PRINTF  : |%c|\n", 'a');
	printf("02) Vrai PRINTF : |%c|\n", 'z');
	ft_printf("02) Mon PRINTF  : |%c|\n", 'z');
	printf("03) Vrai PRINTF : |%c|\n", '!');
	ft_printf("03) Mon PRINTF  : |%c|\n", '!');
	printf("04) Vrai PRINTF : |%c|\n", 'R');
	ft_printf("04) Mon PRINTF  : |%c|\n", 'R');
	printf("05) Vrai PRINTF : |%c|\n", 'R');
	ft_printf("05) Mon PRINTF  : |%c|\n", 'R');
	printf("06) Vrai PRINTF : |%c|\n", '3');
	ft_printf("06) Mon PRINTF  : |%c|\n", '3');
	printf("07) Vrai PRINTF : |%c|\n", '\0');
	ft_printf("07) Mon PRINTF  : |%c|\n", '\0');
	printf("08) Vrai PRINTF : |%c|\n", '\0');
	ft_printf("08) Mon PRINTF  : |%c|\n", '\0');
	printf("09) Vrai PRINTF : |%5c|\n", '\0');
	ft_printf("09) Mon PRINTF  : |%5c|\n", '\0');
	printf("10) Vrai PRINTF : |%c|\n", NULL);
	ft_printf("10} Mon PRINTF  : |%c|\n", NULL);
	printf("11) Vrai PRINTF : |%0cw|\n", 'a');
	ft_printf("11} Mon PRINTF  : |%0cw|\n", 'a');
}
void s(void)
{
	ft_printf("--------------------%%s--------------------\n");	//Perfect
	printf("01) Vrai PRINTF : |%s|\n", "salut du monde!!@#$%%");
	ft_printf("01) Mon PRINTF  : |%s|\n", "salut du monde!!@#$%%");
	printf("02) Vrai PRINTF : |%s|\n", "test");
	ft_printf("02) Mon PRINTF  : |%s|\n", "test");
	printf("03) Vrai PRINTF : |%s|\n", "test2");
	ft_printf("03) Mon PRINTF  : |%s|\n", "test2");
	printf("04) Vrai PRINTF : |%s|\n", "42");
	ft_printf("04) Mon PRINTF  : |%s|\n", "42");
	printf("05) Vrai PRINTF : |%s|\n", "42");
	ft_printf("05) Mon PRINTF  : |%s|\n", "42");
	printf("06) Vrai PRINTF : |%s|\n", "string");
	ft_printf("06) Mon PRINTF  : |%s|\n", "string");
	printf("07) Vrai PRINTF : |%s|\n", "string");
	ft_printf("07) Mon PRINTF  : |%s|\n", "string");
	printf("08) Vrai PRINTF : |%s|\n", "precision");
	ft_printf("08) Mon PRINTF  : |%s|\n", "precision");
	printf("09) Vrai PRINTF : |%s|\n", "precision");
	ft_printf("09) Mon PRINTF  : |%s|\n", "precision");
	printf("10) Vrai PRINTF : |%s|\n", "precision");
	ft_printf("10) Mon PRINTF  : |%s|\n", "precision");
	printf("11) Vrai PRINTF : |%s|\n", "\0");
	ft_printf("11) Mon PRINTF  : |%s|\n", "\0");
	printf("12) Vrai PRINTF : |%s|\n", "\0\0\0\0\0");
	ft_printf("12) Mon PRINTF  : |%s|\n", "\0\0\0\0\0");
	printf("13) Vrai PRINTF : |%s|\n", "");
	ft_printf("13) Mon PRINTF  : |%s|\n", "");
	printf("14) Vrai PRINTF : |%s|\n", "boom");
	ft_printf("14) Mon PRINTF  : |%s|\n", "boom");
	printf("15) Vrai PRINTF : |%s|\n", "google");
	ft_printf("15) Mon PRINTF  : |%s|\n", "google");
	printf("16) Vrai PRINTF : |%s|\n", "twitter");
	ft_printf("16) Mon PRINTF  : |%s|\n", "twitter");
	printf("17) Vrai PRINTF : |%s|\n", "samsung");
	ft_printf("17) Mon PRINTF  : |%s|\n", "samsung");
	printf("18) Vrai PRINTF : |%s|\n", "printf");
	ft_printf("18) Mon PRINTF  : |%s|\n", "printf");
	printf("19) Vrai PRINTF : |%s|\n", "424242424242");
	ft_printf("19) Mon PRINTF  : |%s|\n", "424242424242");
	printf("20) Vrai PRINTF : |%s|\n", "123456789");
	ft_printf("20) Mon PRINTF  : |%s|\n", "123456789");
	printf("20) Vrai PRINTF : |%s|\n", "123456789");
	ft_printf("20) Mon PRINTF  : |%s|\n", "123456789");
	
	printf("21) Vrai PRINTF : |%s|\n", NULL);
	ft_printf("21) Mon PRINTF  : |%s|\n", NULL);
}
void num_u(void)
{
	
	ft_printf("--------------------%%u--------------------\n");
	printf("01) Vrai PRINTF: |%u|\n", 420);
	ft_printf("01) Mon PRINTF : |%u|\n", 420);
	printf("02) Vrai PRINTF: |%u|\n", -420);
	ft_printf("02) Mon PRINTF : |%u|\n", -420);
	//neu co precision thi se in number va so 0 cho du precision, 
 	//neu co them width thi se ko in gi cho du width
	// thu truong hop precision nho hon do dai cua so
	printf("19) Vrai PRINTF : |%u|\n", 0);
	ft_printf("19) Mon PRINTF :  |%u|\n", 0);
	printf("20) Vrai PRINTF : |%u|\n", -1234567);
	ft_printf("20) Mon PRINTF :  |%u|\n", -1234567);
	printf("21) Vrai PRINTF : |%u|\n", 123456798237472);
	ft_printf("21) Mon PRINTF :  |%u|\n", 123456798237472);
	printf("21) Vrai PRINTF : |%u|\n", -123456798237472);
	ft_printf("21) Mon PRINTF :  |%u|\n", -123456798237472);

}

void hex_x(void)
{
	ft_printf("--------------------%%x--------------------\n");
	printf("01) Vrai PRINTF: |%x|\n", 420);
	ft_printf("01) Mon PRINTF : |%x|\n", 420);
	
	printf("02) Vrai PRINTF: |%x|\n", -420); // so am
	ft_printf("02) Mon PRINTF : |%x|\n", -420);

	printf("19) Vrai PRINTF : |%x|\n", 0);
	ft_printf("19) Mon PRINTF :  |%x|\n", 0);
	printf("20) Vrai PRINTF : |%x|\n", -1234567);
	ft_printf("20) Mon PRINTF :  |%x|\n", -1234567);
	printf("21) Vrai PRINTF : |%x|\n", 123456798237472);
	ft_printf("21) Mon PRINTF :  |%x|\n", 123456798237472);
	printf("21) Vrai PRINTF : |%x|\n", -123456798237472);
	ft_printf("21) Mon PRINTF :  |%x|\n", -123456798237472);
	
}

void hex_X(void)
{
	ft_printf("--------------------%%X--------------------\n");
	printf("01) Vrai PRINTF: |%X|\n", 420);
	ft_printf("01) Mon PRINTF : |%X|\n", 420);
	
	printf("02) Vrai PRINTF: |%X|\n", -420); // so am
	ft_printf("02) Mon PRINTF : |%X|\n", -420);

	printf("19) Vrai PRINTF : |%X|\n", 0);
	ft_printf("19) Mon PRINTF :  |%X|\n", 0);
	printf("20) Vrai PRINTF : |%X|\n", -1234567);
	ft_printf("20) Mon PRINTF :  |%X|\n", -1234567);
	printf("21) Vrai PRINTF : |%X|\n", 123456798237472);
	ft_printf("21) Mon PRINTF :  |%X|\n", 123456798237472);
	printf("21) Vrai PRINTF : |%X|\n", -123456798237472);
	ft_printf("21) Mon PRINTF :  |%X|\n", -123456798237472);
	
}
void num_d(void)
{
	ft_printf("--------------------%%d--------------------\n");
	printf("01) Vrai PRINTF: |%d|\n", 42);
	ft_printf("01) Mon PRINTF : |%d|\n", 42);
	
	printf("02) Vrai PRINTF: |%d|\n", -42); // so am
	ft_printf("02) Mon PRINTF : |%d|\n", -42);

	printf("19) Vrai PRINTF : |%d|\n", 1234567);
	ft_printf("19) Mon PRINTF :  |%d|\n", 1234567);
	printf("20) Vrai PRINTF : |%d|\n", -1234567);
	ft_printf("20) Mon PRINTF :  |%d|\n", -1234567);
	printf("21) Vrai PRINTF : |%d|\n", -1234567);
	ft_printf("21) Mon PRINTF :  |%d|\n", -1234567);
}

void	num_i(void)
{
	ft_printf("--------------------%%i--------------------\n");
	printf("01) Vrai PRINTF: |%i|\n", 42);
	ft_printf("01) Mon PRINTF : |%i|\n", 42);
	
	printf("02) Vrai PRINTF: |%i|\n", -42); // so am
	ft_printf("02) Mon PRINTF : |%i|\n", -42);

	printf("19) Vrai PRINTF : |%i|\n", 1234567);
	ft_printf("19) Mon PRINTF :  |%i|\n", 1234567);
	printf("20) Vrai PRINTF : |%i|\n", -123456789101112131415);
	ft_printf("20) Mon PRINTF :  |%i|\n", -123456789101112131415);
	printf("21) Vrai PRINTF : |%i|\n", 123456789101112131415);
	ft_printf("21) Mon PRINTF :  |%i|\n", 123456789101112131415);

}

void p(void)
{
	int		*tab = malloc(sizeof(int) * 10);
	int		*tab2 = malloc(0);
	int		*tab3 = malloc(sizeof(int) * 20);
	
	ft_printf("--------------------%%p--------------------\n");			//perfect
	
	printf("01) Vrai PRINTF : |%p|\n", tab3);
	ft_printf("01) Mon PRINTF  : |%p|\n", tab3);
	printf("02) Vrai PRINTF : |%p|\n", tab2);
	ft_printf("02) Mon PRINTF  : |%p|\n", tab2);
	printf("03) Vrai PRINTF : |%p|\n", tab3);
	ft_printf("03) Mon PRINTF  : |%p|\n", tab3);
	printf("04) Vrai PRINTF : |%p|\n", tab);
	ft_printf("04) Mon PRINTF  : |%p|\n", tab);
	printf("05) Vrai PRINTF : |%p|\n", tab2);
	ft_printf("05) Mon PRINTF  : |%p|\n", tab2);
	printf("06) Vrai PRINTF : |%p|\n", tab);
	ft_printf("06) Mon PRINTF  : |%p|\n", tab);
	printf("07) Vrai PRINTF : |%p|\n", tab);
	ft_printf("07) Mon PRINTF  : |%p|\n", tab);
	printf("11) Vrai PRINTF : |%p|\n", "\0");
	ft_printf("11) Mon PRINTF  : |%p|\n", "\0");
	printf("12) Vrai PRINTF : |%p|\n", "\0\0\0\0\0");
	ft_printf("12) Mon PRINTF  : |%p|\n", "\0\0\0\0\0");
	printf("13) Vrai PRINTF : |%p|\n", "");
	ft_printf("13) Mon PRINTF  : |%p|\n", "");
	printf("14) Vrai PRINTF : |%p|\n", NULL);
	ft_printf("14) Mon PRINTF  : |%p|\n", NULL);
	printf("15) Vrai PRINTF : |%p|\n", NULL);
	ft_printf("15) Mon PRINTF  : |%p|\n", NULL);
	printf("16) Vrai PRINTF : |%p|\n", NULL);
	ft_printf("16) Mon PRINTF  : |%p|\n", NULL);
	free(tab);
	free(tab2);
}

void other_cases(void)
{
	ft_printf("--------------------%%Other Case--------------------\n");
	printf("01) Vrai PRINTF : |%%%|\n");
	ft_printf("01) Mon PRINTF  : |%%%|\n");
	printf("02) Vrai PRINTF : |%%|\n");
	ft_printf("02) Mon PRINTF  : |%%|\n");
	printf("03) Vrai PRINTF : |%%%%|\n");
	ft_printf("03) Mon PRINTF  : |%%%%|\n");
}

int		main(void)
{
	hex_X();
	hex_x;
	num_d();
	num_i();
	num_u();
	c();
	s();
	p();
	other_cases();
	return (0);
}
