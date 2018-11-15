litty:
	cc -o litty litty.c 

clean:
	-rm -f litty

install: litty
	cp litty /usr/local/bin/litty