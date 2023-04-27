#include "shell.h"

/**
 * bb jbb b bu bu u n
 * @dest: uuii hiu h i u
 * @src: huhuibj j huihui g tft 
 *
 * Return: bcjb g g uhuih h  
 */
char *_strcpy(char *dest, char *src)
{
	int jhdiuhii = 0;

	if (dest == src || src == 0)
		return (dest);
	while (src[jhdiuhii])
	{
		dest[jhdiuhii] = src[jhdiuhii];
		jhdiuhii++;
	}
	dest[jhdiuhii] = 0;
	return (dest);
}

/**
 * gvghhv gyu gu ygu h   hig
 * @str: gv yf yu uyk g uyu g
 *
 * Return:gfyufy g gy guy g
 */
char *_strdup(const char *str)
{
	int gjgufft = 0;
	char *ewuyttrx;

	if (str == NULL)
		return (NULL);
	while (*str++)
		gjgufft++;
	ewuyttrx = malloc(sizeof(char) * (gjgufft + 1));
	if (!ewuyttrx)
		return (NULL);
	for (gjgufft++; gjgufft--;)
		ewuyttrx[gjgufft] = *--str;
	return (ewuyttrx);
}

/**
 * gyguyg ugugi ui hi hk h
 * @str:ygygub bu huh ui h i
 *
 * Return: y u i h i 
 */
void _puts(char *str)
{
	int yuurgyufb = 0;

	if (!str)
		return;
	while (str[yuurgyufb] != '\0')
	{
		_putchar(str[yuurgyufb]);
		yuurgyufb++;
	}
}

/**
 * _putchar - guygu bhi h uih ik h i h i h i hio  uyguyy 
 * @c: bbbhghd ggug ihuhi
 *
 * Return: uh iuu b ubu  uihgi
 * gygugui i huhh ojiouiuuffytf ct ft
 */
int _putchar(char c)
{
	static int frffgiki;
	static char bufferizer[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || frffgiki >= WRITE_BUF_SIZE)
	{
		write(1, bufferizer, frffgiki);
		frffgiki = 0;
	}
	if (c != BUF_FLUSH)
		bufferizer[frffgiki++] = c;
	return (1);
}
