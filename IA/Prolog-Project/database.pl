% columns description:
% 1) secure / unsecure
% 2) private / comon
% 3) country
% 4) language
% 5) date

search(secure, private, us, english, null, facebook).
search(secure, private, ru, russian, null, ok).
search(secure, private, us, english, null, instagram).
search(secure, private, md, ro, 24-11-2020, 'Accident ieri la coltu satului').
search(secure, common, md, ro, 26-11-2020, 'Ora 15:30 live din parlament').


search(unsecure, private, md, ro, -, droguri ).
search(unsecure, private, md, ro, -, arme).

