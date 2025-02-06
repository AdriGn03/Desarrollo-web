set AUTOCOMMIT=off;
start transaction;
insert into clientes values(50564344,'adrian','garrote','aranjuez');
rollback;

create fulltext index indice_nuevo on clientes(nombre,apellido); 
drop index;

/*crea una vista que contenga todos el total de coches distribuido por los concesionarios de madrid*/
create view vista_coches(codcoche,cifc) as 
select count(codcoche),cifc from distribucion where cifc in (select cifc from concesionario where ciudad like 'madrid') group by cifc;

drop view vista_coches;

create user paco identified by 'examenretraso';

grant select on *.* to paco;


delete from cervezas c 
where stock*0.10 < (select avg(cantidad) from reparto where codc = c.codc) ;

insert into bares values(5,'La Frontera','222222z','Ontigola');

insert into repartos 
select codem,5,codc,current_date(),200
from reparto where codem in
 (select codem from empleados where nombre like 'vicente merario')
 and codc in (select codc from cervezas);
 
 update bares set codb= 004,
 nombre= (select nombre from bares where codb = 004),
 cifc = (select cifc from bares where codb = 004),
 localidad = (select localidad from bares where codb = 004 ) where codb = 003;

update reaparto set cantidad = cantidad - 1 where codb in
 (select codb from bares where cifc like '111111X')
and codc in (select codc from cervezas where envase like lata)
and fecha = (select max(fecha) from repartos 
where codb in (select codb from bares where cifc like '111111X'));


update empleados set sueldo = sueldo * 1.05 where codem in 
(select codem from repartos 
group by codem having count(codem) order by count(codem) desc limit 1);

UPDATE empleados 
SET sueldo = sueldo * 1.05 
WHERE codem IN (
    SELECT codem 
    FROM repartos 
    GROUP BY codem 
    HAVING COUNT(codem) = (
        SELECT MAX(contador_dias)
        FROM (
            SELECT codem, COUNT(codem) AS contador_dias
            FROM repartos
            GROUP BY codem
        ) AS subquery
    )
);
