
SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

DROP TABLE IF EXISTS `Propose`;
DROP TABLE IF EXISTS `Lot`;
DROP TABLE IF EXISTS `Product`;
DROP TABLE IF EXISTS `Category`;
DROP TABLE IF EXISTS `ProducerControl`;
DROP TABLE IF EXISTS `Visit`;
DROP TABLE IF EXISTS `Personal`;
DROP TABLE IF EXISTS `Consumer`;
DROP TABLE IF EXISTS `Shelf`;
DROP TABLE IF EXISTS `PointSale`;
DROP TABLE IF EXISTS `Locality`;

CREATE TABLE `Locality`(
	`noInsee` varchar(10),
	`name` varchar(50),
	`postalCode` varchar(10),
	`routing` varchar(50),
		PRIMARY KEY(noInsee)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=36831 ;

CREATE TABLE `PointSale`(
	`idPointSale` INTEGER NOT NULL,
	`address` varchar(50),
	`postalCode` varchar(10),
	`name` varchar(50),
	`activity` varchar(50),
	`city` varchar(30),
	`phone` varchar(20),
	`responsible` INTEGER,
		PRIMARY KEY(idPointSale),
		FOREIGN KEY (city) REFERENCES villes_france_free(ville_nom),
  		FOREIGN KEY (postalCode) REFERENCES villes_france_free(ville_code_postal)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=36831 ;

CREATE TABLE `Shelf`(
	`idShelf` INTEGER NOT NULL,
	`wording` varchar(30),
		PRIMARY KEY(idShelf)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=36831 ;

CREATE TABLE `Consumer`(
	`idUser` INTEGER NOT NULL,
	`firstName` varchar(102),
	`lastname` VARCHAR(102),
	`birthDate` date,
	`adresse` varchar(255),
	`city` varchar(50),
	`postalCode` varchar(10),
	`email` varchar(50),
	`phone` VARCHAR(15),
	`cellphone` VARCHAR(15),
	`login`varchar(255),
	`password` varchar(255),
	`typeUser` varchar(25),
	`secretQuestion` varchar(255),
	`reply` varchar(255),
	`dateRegistration` date,
	`checked` tinyint(1),
		PRIMARY KEY(idUser)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=36831 ;

CREATE TABLE `Personal`(
	`idPersonal` INTEGER NOT NULL,
	`firstName` VARCHAR(25),
	`lastName` VARCHAR(25),
	`birthDate` date,
	`adresse` varchar(255),
	`city` varchar(50),
	`postalCode` varchar(10),
	`email` VARCHAR(35),
	`typesPersonnel` VARCHAR(25),
	`iban` VARCHAR(30),
	`phone` VARCHAR(15),
	`cellphone` VARCHAR(15),
	`login` VARCHAR(60),
	`password` VARCHAR(60),
	`HireDate` DATE,
	`Removes` tinyint(1),
		PRIMARY KEY(idPersonal)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=36831 ;

CREATE TABLE `Visit`(
	`idVisit` INTEGER NOT NULL,
	`wordingVisit` VARCHAR(25),
	`dateVisit` DATE,
	`Planner` INTEGER NOT NULL,
	`Controller` INTEGER NOT NULL,
		PRIMARY KEY(idVisit),
		FOREIGN KEY (Controller) REFERENCES Personal(idPersonal)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=36831 ;

CREATE TABLE `ProducerControl`(
	`concludingVisit` BOOL,
	`rejectionPattern` VARCHAR(250),
	`timeStartControl` TIME,
	`rderNumberVisit` INTEGER,
	`idVisit` INTEGER NOT NULL,
	`idUser` INTEGER NOT NULL,
		primary key(idVisit, idUser),
		foreign key (idVisit) references Visit(idVisit),
 		foreign key (idUser) references Consumer(idUser)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=36831 ;

CREATE TABLE `Category`(
	`idCategory` INTEGER NOT NULL,
	`wording` varchar(30),
	`no` INTEGER NOT NULL,
		primary key(no),
		foreign key (no) references Shelf(idShelf)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=36831 ;

CREATE TABLE `Product`(
	`idProduct` INTEGER NOT NULL,
	`wording` varchar(100),
	`pu` float,
	`Qty` INTEGER,
	`no` INTEGER NOT NULL,
		primary key(idProduct),
		foreign key (no) references Category(no)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=36831 ;

CREATE TABLE `Lot`(
	`idLot` INTEGER NOT NULL,
	`amount` float,
	`DateHarvest` date,
	`nbJourConservation` INTEGER,
	`salesUnit` varchar(50),
	`productionMode` varchar(25),
	`manualPickup` tinyint(1),
	`unitPrice` float,
	`num` INTEGER NOT NULL,
	`idUser` INTEGER NOT NULL,
		primary key(num,idUser,idLot),
	 	foreign key (num) references Product(idProduct),
		foreign key (idUser) references Consumer(idUser)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=36831 ;

CREATE TABLE `Propose`(
	`idPropose` INTEGER NOT NULL,
	`num` INTEGER NOT NULL,
	`idUser` INTEGER NOT NULL,
	`nolot` INTEGER NOT NULL,
		primary key(idPropose,num,idUser,nolot),
	 	foreign key (idPropose) references PointSale(idPointSale),
	 	foreign key (num,idUser,nolot) references Lot(num,idUser,idLot)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=36831 ;
