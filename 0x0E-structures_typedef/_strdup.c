#include "dog.h"
#include <stdlib.h>
#include <string.h>

char *_strdup(char *org)
{
	int org_size;
	static char *dup;
	char *dup_offset;

	/* Allocate memory for duplicate */
	org_size = strlen(org);
	dup = (char *)malloc(sizeof(char) * org_size + 1);
	if (dup == NULL)
		return ((char *)NULL);

	/* Copy string */
	dup_offset = dup;
	while (*org)
	{
		*dup_offset = *org;
		dup_offset++;
		org++;
	}
	*dup_offset = '\0';

	return (dup);
}
