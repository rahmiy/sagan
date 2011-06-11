/* $Id$ */
/*
** Copyright (C) 2009-2011 Quadrant Information Security <quadrantsec.com>
** Copyright (C) 2009-2011 Champ Clark III <cclark@quadrantsec.com>
**
** This program is free software; you can redistribute it and/or modify
** it under the terms of the GNU General Public License Version 2 as
** published by the Free Software Foundation.  You may not use, modify or
** distribute this program under any other version of the GNU General
** Public License.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software
** Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
*/

/* sagan.h
 *
 * Sagan prototypes and definitions.
 *
 */

#ifdef HAVE_CONFIG_H
#include "config.h"             /* From autoconf */
#endif

/* Various buffers used during configurations loading */

#define CLASSBUF	1024
#define RULEBUF		5128
#define CONFBUF		1024

#define MAXPATH 	255		/* Max path for files/directories */
#define MAXHOST         32		/* Max host length */
#define MAXPROGRAM	32		/* Max syslog 'program' length */
#define MAXDATE		25		/* Max syslog 'date' length */
#define MAXTIME		10		/* Max syslog 'time length */
#define MAXFACILITY	25		/* Max syslog 'facility' length */
#define MAXPRIORITY	20		/* Max syslog 'priority' length */
#define MAXTAG		32		/* Max syslog 'tag' length */
#define MAXLEVEL	15		/* Max syslog 'level' length */

/* Used for the syslog "msgslot" array.  This can be increased,  but 
 * anything > || == 30 causes SEGFAULTs under FreeBSD 
 * Champ Clark - 02/28/2010
 */

#define MAX_MSGSLOT	25		/* Slots for syslog message passing */

#define MAX_THREADS     4096            /* Max system threads */
#define MAX_SYSLOGMSG   63556		/* Max length of a syslog message */

#define MAX_PCRE	5		/* Max PCRE within a rule */
#define MAX_CONTENT	5		/* Max 'content' within a rule */
#define MAX_REFERENCE	10		/* Max references within a rule */

#define MAXUSER         32
#define	MAXPASS		64

#define BUFLEN 		8192		/* For libesmtp */
#define MAXIP		16		/* Max IP length.  Change to 64 for future IPv6 support */

#define LOCKFILE 	"/var/run/sagan/sagan.pid"
#define SAGANLOG	"/var/log/sagan/sagan.log"
#define ALERTLOG	"/var/log/sagan/alert"
#define SAGANLOGPATH	"/var/log/sagan"

#define RUNAS		"sagan"

/* defaults if the user doesn't define */

#define MAX_EXT_THREADS         50

#if defined(HAVE_LIBMYSQLCLIENT_R) || defined(HAVE_LIBPQ)
#define MAX_LOGZILLA_THREADS	50
#define MAX_DB_THREADS          50
#endif

#ifdef HAVE_LIBESMTP
#define MAX_EMAIL_THREADS	50
#endif 

#ifdef HAVE_LIBPRELUDE
#define MAX_PRELUDE_THREADS	50
#endif

