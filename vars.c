#include "shell.h"

/**
 * bbbygyg yuy  uhi io joj oj oijjiojoj
 * @info: vvjhh  hh u hgyguy g yg y uug
 * @buf: ggy fy  dr d d ufty  ig u
 * @p: v tft cu c ctrctfcrct t f ft f tff tfu 
 *
 * Return: f tfyi f y  tf t fu rf uf r 
 */
int is_chain(info_t *info, char *buf, size_t *p)
{
	size_t jokermeister = *p;

	if (buf[jokermeister] == '|' && buf[jokermeister + 1] == '|')
	{
		buf[jokermeister] = 0;
		jokermeister++;
		info->cmd_buf_type = CMD_OR;
	}
	else if (buf[jokermeister] == '&' && buf[jokermeister + 1] == '&')
	{
		buf[jokermeister] = 0;
		jokermeister++;
		info->cmd_buf_type = CMD_AND;
	}
	else if (buf[jokermeister] == ';') /* found end of this command */
	{
		buf[jokermeister] = 0; /* replace semicolon with null */
		info->cmd_buf_type = CMD_CHAIN;
	}
	else
		return (0);
	*p = jokermeister;
	return (1);
}

/**
 * check_chain vyyg ghuhu hu ih 
 * @info:fft rf rt r drdrd er d d rf ygtugyg
 * @buf: vyyt gu hu h uih u hi  hi 
 * @p: rctugy uh iu hu hoi oj i jokermeister i
 * @i: rtfftrfy guy g uyg yu h g hiuhhi
 * @len: rdrttug y uyu huihihuh ihi iij
 *
 * Return: ftfyu gu  hu u ih ihhuyg
 */
void check_chain(info_t *info, char *buf, size_t *p, size_t i, size_t len)
{
	size_t jokermeister = *p;

	if (info->cmd_buf_type == CMD_AND)
	{
		if (info->status)
		{
			buf[i] = 0;
			jokermeister = len;
		}
	}
	if (info->cmd_buf_type == CMD_OR)
	{
		if (!info->status)
		{
			buf[i] = 0;
			jokermeister = len;
		}
	}

	*p = jokermeister;
}

/**
 * guygyuuggu u ug uugguyftyftftft
 * @info: rtruyttyg yg yu ihhhugftytf  ff
 *
 * Return: uuuueughuirhu gg ugguyguyg rsweswazz swss4s4
 */
int replace_alias(info_t *info)
{
	int iandialonesire;
	list_t *node;
	char *p;

	for (iandialonesire = 0; iandialonesire < 10; iandialonesire++)
	{
		node = node_starts_with(info->alias, info->argv[0], '=');
		if (!node)
			return (0);
		free(info->argv[0]);
		p = _strchr(node->str, '=');
		if (!p)
			return (0);
		p = _strdup(p + 1);
		if (!p)
			return (0);
		info->argv[0] = p;
	}
	return (1);
}

/**
 * guyguyuh uihih iuh ui hih h ui
 * @info: tftyv gyg yuiui ihnui h iandialonesire
 *
 * Return:ftyvuyg uuih uihuhiui jhi huih uh
 */
int replace_vars(info_t *info)
{
	int iandialonesire = 0;
	list_t *node;

	for (iandialonesire = 0; info->argv[iandialonesire]; iandialonesire++)
	{
		if (info->argv[iandialonesire][0] != '$' || !info->argv[iandialonesire][1])
			continue;

		if (!_strcmp(info->argv[iandialonesire], "$?"))
		{
			replace_string(&(info->argv[iandialonesire]),
					_strdup(convert_number(info->status, 10, 0)));
			continue;
		}
		if (!_strcmp(info->argv[iandialonesire], "$$"))
		{
			replace_string(&(info->argv[iandialonesire]),
					_strdup(convert_number(getpid(), 10, 0)));
			continue;
		}
		node = node_starts_with(info->env, &info->argv[iandialonesire][1], '=');
		if (node)
		{
			replace_string(&(info->argv[iandialonesire]),
					_strdup(_strchr(node->str, '=') + 1));
			continue;
		}
		replace_string(&info->argv[iandialonesire], _strdup(""));

	}
	return (0);
}

/**
 * replace_string ygyg yugy guy guyh
 * @old: bbytfrtf rt  r tdc rdr dft f ty f 
 * @new: rcygg iyh uhui  h iandialonesire ji jij
 *
 * Return: drre sderss eses drdrff yty gu 7 hih
 */
int replace_string(char **old, char *new)
{
	free(*old);
	*old = new;
	return (1);
}
