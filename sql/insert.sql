-- Locality --
INSERT INTO Locality VALUES 
(0123456789, 'jeSaispas', '05000', 'jeSaispas');

INSERT INTO Locality VALUES 
(2468101214, 'jeSaispas', '05500', 'jeSaispas');

INSERT INTO Locality VALUES 
(0123456780, 'jeSaispas', '05000', 'jeSaispas');


-- PointSale --
INSERT INTO PointSale VALUES 
(1, 'rue des Doritos', '05000', 'SolderMag','jeSaispas','Gap', '0156449569', 1);

INSERT INTO PointSale VALUES 
(2, 'rue des fleurs', '05000', 'Super7','jeSaispas','Gap', '0656494599', 1);

INSERT INTO PointSale VALUES 
(3, 'rue du Laurier', '05500', 'MagBio','jeSaispas','Saint-Bonnet', '0492559569', 2);


-- Shelf --
INSERT INTO Shelf VALUES 
(1, 'Fruit');

INSERT INTO Shelf VALUES 
(2, 'Legume');

INSERT INTO Shelf VALUES 
(3, 'Frommage');

-- Consumer --
INSERT INTO Consumer VALUES 
(1, 'Herve', 'Aymes', '1996-07-17', 'rue de la peine', 'gap', '05000', 'nrv-rpz04@gmail.com', '0612345678', '0492123456', 'nrv', 'azerty1','manager', 'What is love ?', 'Jim', 2002-07-17, 1);

INSERT INTO Consumer VALUES
(2, 'Jerome', 'Baron', '1996-04-05', 'rue des peuplier', 'gap', '05000', 'shark@gmail.com', '0692995978', '0492727476', 'shark05', 'azerty2','controler', 'What is love ?', 'une requette sql', 2002-07-17, 1);

INSERT INTO Consumer VALUES 
(3, 'Corentin', 'Dervieux', '1996-08-22', 'chemin du petit poucet', 'gap', '05000', 'coco@gmail.com', '0612485678', '0478843456', 'cocoChanel', 'azerty3', 20, 'consumer', 'What is love ?', 'je sais pas', 2002-07-17, 1);

-- Personal --
INSERT INTO Personal VALUES 
(1, 'Benjamin', 'ALLEC', '1996-04-30', 'chemin du roure', 'Saint-Bonnet', '05500', 'allec@gmail.com', 'manager', '123465978451659','0616345682', '0492131255', 'ballec', 'azerty', 2002-07-17, 0);

