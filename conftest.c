/* confdefs.h */
#define PACKAGE_NAME "libxml2"
#define PACKAGE_TARNAME "libxml2"
#define PACKAGE_VERSION "2.9.12"
#define PACKAGE_STRING "libxml2 2.9.12"
#define PACKAGE_BUGREPORT ""
#define PACKAGE_URL ""
#define PACKAGE "libxml2"
#define VERSION "2.9.12"
#define HAVE_STDIO_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STRING_H 1
#define HAVE_INTTYPES_H 1
#define HAVE_STDINT_H 1
#define HAVE_STRINGS_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_UNISTD_H 1
#define STDC_HEADERS 1
#define HAVE_DLFCN_H 1
#define LT_OBJDIR ".libs/"
#define HAVE_DIRENT_H 1
#define HAVE_FCNTL_H 1
#define HAVE_UNISTD_H 1
#define HAVE_CTYPE_H 1
#define HAVE_DIRENT_H 1
#define HAVE_ERRNO_H 1
#define HAVE_MALLOC_H 1
#define HAVE_STDARG_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_STDINT_H 1
#define HAVE_INTTYPES_H 1
#define HAVE_TIME_H 1
#define HAVE_MATH_H 1
#define HAVE_LIMITS_H 1
#define HAVE_FLOAT_H 1
#define HAVE_STDLIB_H 1
#define HAVE_SYS_SOCKET_H 1
#define HAVE_NETINET_IN_H 1
#define HAVE_ARPA_INET_H 1
#define HAVE_NETDB_H 1
#define HAVE_SYS_TIME_H 1
#define HAVE_SYS_SELECT_H 1
#define HAVE_POLL_H 1
#define HAVE_SYS_MMAN_H 1
#define HAVE_SYS_TIMEB_H 1
#define HAVE_SIGNAL_H 1
#define HAVE_ARPA_NAMESER_H 1
#define HAVE_RESOLV_H 1
#define HAVE_DLFCN_H 1
#define HAVE_STRFTIME 1
#define HAVE_STRFTIME 1
#define HAVE_LOCALTIME 1
#define HAVE_GETTIMEOFDAY 1
#define HAVE_FTIME 1
#define HAVE_STAT 1
#define HAVE_SIGNAL 1
#define HAVE_RAND 1
#define HAVE_RAND_R 1
#define HAVE_SRAND 1
#define HAVE_TIME 1
#define HAVE_ISASCII 1
#define HAVE_MMAP 1
#define HAVE_MUNMAP 1
#define HAVE_PUTENV 1
#define HAVE_VA_COPY 1
#define VA_LIST_IS_ARRAY 1
#define XML_SOCKLEN_T socklen_t
#define GETHOSTBYNAME_ARG_CAST /**/
#define SEND_ARG2_CAST /**/
#define HAVE_ATTRIBUTE_DESTRUCTOR 1
#define ATTRIBUTE_DESTRUCTOR __attribute__((destructor))
#define SUPPORT_IP6 /**/
#define HAVE_GETADDRINFO /**/
#define HAVE_ISNAN /**/
#define HAVE_ISINF /**/
#define HAVE_DLOPEN /**/
#define ICONV_CONST 
#define HAVE_PRINTF 1
/* end confdefs.h.  */
/* Define sprintf to an innocuous variant, in case <limits.h> declares sprintf.
   For example, HP-UX 11i <limits.h> declares gettimeofday.  */
#define sprintf innocuous_sprintf

/* System header to define __stub macros and hopefully few prototypes,
   which can conflict with char sprintf (); below.  */

#include <limits.h>
#undef sprintf

/* Override any GCC internal prototype to avoid an error.
   Use char because int might match the return type of a GCC
   builtin and then its argument prototype would still apply.  */
#ifdef __cplusplus
extern "C"
#endif
char sprintf ();
/* The GNU C library defines this for functions which it implements
    to always fail with ENOSYS.  Some functions are actually named
    something starting with __ and the normal name is an alias.  */
#if defined __stub_sprintf || defined __stub___sprintf
choke me
#endif

int
main (void)
{
return sprintf ();
  ;
  return 0;
}
