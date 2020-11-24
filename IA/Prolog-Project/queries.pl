:- [database].

% queries

get_by_security(Secure):-
    write('Search-uri securizate:'), nl,
	search(Secure, X, X1, X2, X3, SEARCH),
	write(SEARCH), nl,
	fail.