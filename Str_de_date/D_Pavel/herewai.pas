Program p1;
type tpunct=record
       x,y:integer;
      end;
tstiva=array[1..100] of tpunct;
tcoada=array[1..100] of tpunct;

var a:array[1..50,1..50] of integer;
    stiva:tstiva;
    coada:tcoada;
    i,j,m,n,sr,sc,br,bc,s:integer;// sr, sc - coordon. soarecelui
    vc, vs: integer; //vc - varful coadei
    sfc, k:integer;
    f: boolean;


begin
randomize;
write('introdu dimensiunile labirintului: ');
readln(m,n);
for i:=1 to m do 
   for j:=1 to n do
     a[i,j]:=random(2)-1;

writeln('matricea initiala');
for i:=1 to m do begin
  for j:=1 to n do
     {if a[i,j]=0 then }
     write(a[i,j]:4);// else write(a[i,j],' ');
  writeln;
end;
writeln('introdu coordonatele soarecelui: ');
readln(sr,sc);
a[sr,sc]:=1;
i:=sr;
j:=sc;
writeln('introdu coordonatele branzei: ');
readln(br,bc);
vc:=1;sfc:=1;// sfc - sfarsitul coaDEI
coada[vc].x:=sr;
coada[vc].y:=sc;
repeat
// scoatem elent din coadas, adica vc:=vc+1;
f:=false;
if (i-1>0) and (a[i-1,j]=0) then begin 
              a[i-1,j]:=a[i,j]+1; sfc:=sfc+1; coada[sfc].x:=i-1; coada[sfc].y:=j;f:=true;
              //writeln(coada[sfc].x, coada[sfc].y);
end;
if (i+1<=m) and (a[i+1,j]=0) then begin a[i+1,j]:=a[i,j]+1;sfc:=sfc+1; coada[sfc].x:=i+1; coada[sfc].y:=j;f:=true;
             //writeln(coada[sfc].x, coada[sfc].y);
end;
if (j-1>0) and (a[i,j-1]=0) then begin a[i,j-1]:=a[i,j]+1; sfc:=sfc+1; coada[sfc].x:=i; coada[sfc].y:=j-1;f:=true;
             //writeln(coada[sfc].x, coada[sfc].y);
end;
if (j+1<=n) and (a[i,j+1]=0) then begin a[i,j+1]:=a[i,j]+1; sfc:=sfc+1; coada[sfc].x:=i; coada[sfc].y:=j+1;f:=true;
             //writeln(coada[sfc].x, coada[sfc].y);
end;
 if f=false then begin vc:=vc+1; i:=coada[vc].x; j:=coada[vc].y; end;
until (coada[vc].x = br) and (coada[vc].y = bc);
writeln('matricea 2');
for i:=1 to m do begin
  for j:=1 to n do
     {if a[i,j]=0 then }
     write(a[i,j]:4);// else write(a[i,j],' ');
  writeln;
end;
k:=a[br, bc];
writeln('k =', k);
vs:=1;
stiva[vs].x:= br;
stiva[vs].y:=bc;
i:=br;
j:=bc;

repeat
  f:=false;
  if (i-1>0) and (a[i-1,j]=k-1) then begin 
              vs:=vs+1; stiva[vs].x:=i-1; stiva[vs].y:=j;  f:=true;
              //writeln(stiva[vs].x, stiva[vs].y);
end;
if (i+1<=m) and (a[i+1,j]=k-1)  and (f=false) then begin 
             vs:=vs+1;  stiva[vs].x:=i+1; stiva[vs].y:=j;  f:=true;
             //writeln(stiva[vs].x, stiva[vs].y);
end;
if (j+1<=n) and (a[i,j+1]=k-1)   and (f=false) then begin 
            vs:=vs+1; stiva[vs].x:=i; stiva[vs].y:=j+1;   f:=true;
            //writeln(stiva[vs].x, stiva[vs].y);
end;
if (j-1>0) and (a[i,j-1]=k-1)  and (f=false) then begin 
           vs:=vs+1; stiva[vs].x:=i; stiva[vs].y:=j-1; 
           //writeln(stiva[vs].x, stiva[vs].y);
end;
i:=stiva[vs].x; j:=stiva[vs].y;
k:= k-1; 
until k=1;
//writeln('nr_elem_stiva: ', vs); 
for i:=vs downto 1 do 
  write('(', stiva[i].x, ', ', stiva[i].y, ');  '); 
end.