#pragma once

/* net.h */
int dial(const char *addr, const char *port);

typedef struct Bufio {
	int pos; /* pos == sizeof buf => ignore current line, read until CRLF */
	char buf[1024];
} Bufio;

Bufio *bufio_init(void);
int bufio_read(Bufio *bi, int fd, void (*callback)(char *s));


/* xdg.h */
const char *get_luapath(void);
