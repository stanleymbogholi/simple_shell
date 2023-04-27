#include "shell.h"

/**
 * strlen - this returns dvhdhjnjndjjdnjc jnjcdnjd
 * @s: string dbdjjdc bnjsnjf being checked
 *dddddddd
 */
int _strlen(char *s)
{
	int iendeiende = 0;

	if (!s)
		return (0);

	while (*s++)
		iendeiende++;
	return (iendeiende);
}

/**
 *  hhishdi fudhfuidjfi fjufdhijoji jfdbfhd
 * chdfh fhfhudf fhfihifid
 * dhfhi fhfuhfuh fjdfiidhfijdi hufhf
 *
 * djidi djfhuhuf ffbuufhdi fjhfuhduihif
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 * djb sfuufu fhfuhuf fhufhuhiiojojoij fjfhfuhd
 * @haystack: fdufhu fhifhihiof knvkkncmnvmnv  vuh vjb djbjbv v j vj dj d j v
 * @needle: dc  f fdggg gg g f gd g d fr rg  v   i  8 88i8ik   j u ju 
 *
 * Return:fdfhdbfhbd fbdbfbdbf fbdbfdbuuuhruheu ffubbfbhbff fufbebf
 */
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * hdfhf fdhfdbf fdfhuhduhuhif udfuduidi fhdfuhd
 * @dest: cbhbcd bcudu  ff fhbjibi  ui iu iu i  io j oikj k n ui hu   f d r 
 * @src: rufurf frufuhru jkncncc
 *
 * Return: ffff cbnbx cbhudhfiufj fjdjjj
 */
char *_strcat(char *dest, char *src)
{
	char *ret = ghgsdueiuiwnnf365;

	while (*dest)
		ghgsdueiuiwnnf365++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}
