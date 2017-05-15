<!DOCTYPE html>
<html lang="fr">
	<head>
		<meta charset="utf-8" />
		<!--[if lt IE 9]>
			<script src="http://html5shiv.googlecode.com/svn/trunk/html5.js"></script>
		<![endif]-->
		<link rel="stylesheet" href="css/style.css"/>
		<title>New World</title>
		<link rel="icon" href="favicon.ico" />
	</head>
	<body>
		<header>
			<a href="#">France </a> |<a href="php/partsWebsite/form.php"> Connexion/Inscription</a>
		</header>
		<div class="wrapper">
			<nav id="navigation" role="navigation">
				<ul>
					<li><a href="index.php"><h3>N.W.</h3></a></li>
					<li><a href="acheter.php"><h3>Acheter</h3></a></li>
					<li><a href="produire.php"><h3>Produire</h3></a></li>
					<li><a href="distribuer"><h3>Distribuer</h3></a></li>
				</ul>
			</nav>
			<section class="content">
				<article id="presentation">
					<aside id="images">
						<img src="img/jardinier.jpg" alt="jardinier" style="width:302px;height:215px;">
						<img src="img/boucher.jpg" alt="Boucher" style="width:302px;height:215px;">
					</aside>
				</article>
				<article id="formulaire">
					<form>
						<h2>connexion</h2>
						<label>
						login *
  						<input type="text" name="login" />
						</label>
						<label>
						Password *
						<input type="text" name="password" />
						</label>
						<button>Validate</button>
					</form>
				</article>
			</section>
		</div>
	</body>
</html>
