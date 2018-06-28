// MySQL'un güncel sürümü olan R41-4 includesinin en altına koyunuz.

stock cache_get_field_content_int(row_idx, const column_name[])
{
	new destination;
	cache_get_value_name_int(row_idx, column_name, destination);
	return destination;
}

stock Float:cache_get_field_content_float(row_idx, const column_name[])
{
	new Float:destination;
	cache_get_value_name_float(row_idx, column_name, destination);
	return destination;
}

stock cache_get_field_content(row_idx, const column_name[], destination[], max_len = sizeof(destination))
{
	cache_get_value_name(row_idx, column_name, destination, max_len);
	return -1;
}

stock cache_get_data(&rows, &fields)
{
	cache_get_row_count(rows);
	cache_get_field_count(fields);
	return -1;
}
