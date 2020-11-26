:- [queries].

start_search:-
	nl, write("Introduceti tema cautata"), nl,
	read(QueryWord),
	write("Cautarea trebuie sa fie:"), nl,
	write("1. Sigura"), nl,
	write("2. Nesigura"), nl,
	read(Security),
	with_other_apps(QueryWord, Security).

with_other_apps(QueryWord, 1) :-
	write("Tipul cautarea trebuie sa fie:"), nl,
	write("1. Privata"), nl,
	write("2. Comuna"), nl,
	read(Type),
	with_country(QueryWord, secure, Type).

with_other_apps(QueryWord, 2) :-
	write("Tipul cautarea trebuie sa fie:"), nl,
	write("1. Privata"), nl,
	write("2. Comuna"), nl,
	read(Type),
	with_country(QueryWord, unsecure, Type).

with_country(QueryWord, Security, 1) :-
	write("Doriti sa primiti rezultatele in baza tarii?:"), nl,
	write("1. Da"), nl,
	write("2. Nu"), nl,
	read(Country),
	with_language(QueryWord, Security, private, Country).

with_country(QueryWord, Security, 2) :-
	write("Doriti sa primiti rezultatele in baza tarii?:"), nl,
	write("1. Da"), nl,
	write("2. Nu"), nl,
	read(Country),
	with_language(QueryWord, Security, common, Country).

with_language(QueryWord, Security, Other_apps, 1) :-
	write("Doriti sa primiti rezultatele in baza limbii?:"), nl,
	write("1. Da"), nl,
	write("2. Nu"), nl,
	read(Language),
	with_date(QueryWord, Security, Other_apps, md, Language).

with_language(QueryWord, Security, Other_apps, 2) :-
	write("Doriti sa primiti rezultatele in baza limbii?:"), nl,
	write("1. Da"), nl,
	write("2. Nu"), nl,
	read(Language),
	with_date(QueryWord, Security, Other_apps, _, Language).

with_date(QueryWord, Security, Other_apps, Country, 1) :-
	write("Doriti sa primiti rezultatele cele mai noi?:"), nl,
	write("1. Da"), nl,
	write("2. Nu"), nl,
	read(Date),
	make_call(QueryWord, Security, Other_apps, Country, ro, Date).

with_date(QueryWord, Security, Other_apps, Country, 2) :-
	write("Doriti sa primiti rezultatele cele mai noi?:"), nl,
	write("1. Da"), nl,
	write("2. Nu"), nl,
	read(Date),
	make_call(QueryWord, Security, Other_apps, Country, _, Date).

make_call(QueryWord, Security, Other_apps, Country, Language, 1):-
	get_search_results(Security, Other_apps, Country, Language, 26-11-2020, QueryWord).
	
make_call(QueryWord, Security, Other_apps, Country, Language, 2):-
	get_search_results(Security, Other_apps, Country, Language, _, QueryWord).
