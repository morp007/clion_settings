#parse("IncludeGuard.h")##
#set( $blank = "" )
#[[#ifndef]]# #includeGuard(${NAME} "h")_${blank}
#[[#define]]# #includeGuard(${NAME} "h")_${blank}

${NAMESPACES_OPEN}

class ${NAME} {

};

${NAMESPACES_CLOSE}

#[[#endif]]# // #includeGuard(${NAME} "h")_
