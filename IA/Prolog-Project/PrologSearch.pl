:- [queries].

setSecure(1):-
	Secure = secure.

setSecure(2):-
	Secure = unsecure.

start_search:-
	nl, write("Introduceti tema cautata"), nl,
	read(QueryWord),
	write("Cautarea trebuie sa fie:"), nl,
	write("1. Sigura"), nl,
	write("2. Nesigura"),
	read(Secure),
	Secure == 1 -> get_by_security(secure) ; get_by_security(unsecure).
