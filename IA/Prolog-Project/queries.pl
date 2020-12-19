:- [database].

substring(X,S) :-
	append(_,T,S) ,
	append(X,_,T) ,
	X \= [].

get_var(Name):-
	nb_getval(Name, Value),
	write(Value).

% queries

get_search_results(Security, Other_apps, Country, Language, Date, QueryWord):-
    write('Rezultatele cautarii:'), nl, nl,
	search(Security, Other_apps, Country, Language, Date, QueryWord), nl,
	write(QueryWord), nl,
	fail.