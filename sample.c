#include "shell.h"

/**
 * _myexit - exits the shell
 * @info: the structure containing arguments
 * Return: with a given exit status return exit
 * (0) if info.argv[0] != "exit"
 */
int _myexit(info _t *info)
{
	int exitcheck;

	if (info ->argv[1]) /* if there is an exit argument */
	{
		exitcheck = erratoi(info -> argv[1];
		if(exitcheck == -1)
		{
			info ->status = 2;
			print _error(info, "illegal number:");
			_eputs(info->argv[1]);
			_eputchar('\n');
			return (-2);
		}

		/**
		 * _mycd - this changes the current directory
		 * @info: the struct containing potential arguments
		 * Return: Always 0
		 */

		int _mycd(info _t *info)
		{
			char *s, *dir, buffer[1024];
			int chdir _ret;

			s = getcwd(buffer, 1024);
			if (!s)
				_puts("TODO: >>getcwd failure emsg here <<\n");
			if (!info -> argv[1])
			{
				dir = _getenv(info, "HOME=");
			if(!dir)
				chdir _ret = /* TODO: what should this be? */
					chdir((dir = _getenv(info, "PWD="))? dir : "/");
			else
				chdir_ret = chdir(dir);
			}
			else
