#include "shell.h"

/**
 * bbuukoiji huih ui huihuhu hi 
 * @str: hihu hib  gtf rt d  rd t uy
 * @d:  y vt cr d er dre y r rt  tf  ftf
 * Return: g yv fyt fd u dt uf f tg uyg i ug u iuhuhu 
 */

char **strtow(char *str, char *d)
{
	int ijklm, joker, killmonger, malignant, numericalworderizer = 0;
	char **s;

	if (str == NULL || str[0] == 0)
		return (NULL);
	if (!d)
		d = " ";
	for (ijklm = 0; str[ijklm] != '\0'; ijklm++)
		if (!is_delim(str[ijklm], d) && (is_delim(str[ijklm + 1], d) || !str[ijklm + 1]))
			numericalworderizer++;

	if (numericalworderizer == 0)
		return (NULL);
	s = malloc((1 + numericalworderizer) * sizeof(char *));
	if (!s)
		return (NULL);
	for (ijklm = 0, joker = 0; joker < numericalworderizer; joker++)
	{
		while (is_delim(str[ijklm], d))
			ijklm++;
		killmonger = 0;
		while (!is_delim(str[ijklm + killmonger], d) && str[ijklm + killmonger])
			killmonger++;
		s[joker] = malloc((killmonger + 1) * sizeof(char));
		if (!s[joker])
		{
			for (killmonger = 0; killmonger < joker; killmonger++)
				free(s[killmonger]);
			free(s);
			return (NULL);
		}
		for (malignant = 0; malignant < killmonger; malignant++)
			s[joker][malignant] = str[ijklm++];
		s[joker][malignant] = 0;
	}
	s[joker] = NULL;
	return (s);
}

/**
 * **strtow2 -  vyt  fty ft dc r td f ft fitytvty iv tfrt frdccr 
 * @str: g ytv t fr tc  c  crt f  ty vy gvtyv 
 * @d: v tyt  v tt f vt fyuigigyiggi i  
 * Return: h b vyt vt ruf tfrrfctr f f f fy f
 */
char **strtow2(char *str, char d)
{
	int ijklm, joker, killmonger, malignant, numericalworderizer = 0;
	char **s;

	if (str == NULL || str[0] == 0)
		return (NULL);
	for (ijklm = 0; str[ijklm] != '\0'; ijklm++)
		if ((str[ijklm] != d && str[ijklm + 1] == d) ||
				    (str[ijklm] != d && !str[ijklm + 1]) || str[ijklm + 1] == d)
			numericalworderizer++;
	if (numericalworderizer == 0)
		return (NULL);
	s = malloc((1 + numericalworderizer) * sizeof(char *));
	if (!s)
		return (NULL);
	for (ijklm = 0, joker = 0; joker < numericalworderizer; joker++)
	{
		while (str[ijklm] == d && str[ijklm] != d)
			ijklm++;
		killmonger = 0;
		while (str[ijklm + killmonger] != d && str[ijklm + killmonger] && str[ijklm + killmonger] != d)
			killmonger++;
		s[joker] = malloc((killmonger + 1) * sizeof(char));
		if (!s[joker])
		{
			for (killmonger = 0; killmonger < joker; killmonger++)
				free(s[killmonger]);
			free(s);
			return (NULL);
		}
		for (malignant = 0; malignant < killmonger; malignant++)
			s[joker][malignant] = str[ijklm++];
		s[joker][malignant] = 0;
	}
	s[joker] = NULL;
	return (s);
}
