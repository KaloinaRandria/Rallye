create table rallye (
    id int primary key auto_increment,
    edition varchar(50)
);

create table speciale(
    id int primary key auto_increment,
    id_rallye int references rallye(id),
    distance decimal(10,2)
);

create table categorie(
    id int primary key auto_increment,
    nom varchar(100)
);

create table competiteur(
    id int primary key auto_increment,
    nom varchar(100),
    id_categorie int references categorie(id)
);

create table temps_speciales(
    id int primary key auto_increment,
    id_competiteur int references competiteur(id),
    id_speciale int references speciale(id),
    temps TIME(3)
);

create table resultats_generaux(
    id_competiteur int references competiteur(id),
    temps_total TIME(3)
);