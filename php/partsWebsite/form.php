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
					<form>
						<h2>first connexion</h2>
						<label>
							login
  							<input type="text" name="firstName" />
						</label>
						<label>
							new password *
							<input type="text"name="login" pattern="{8,255}"/>
						</label>
						<label>
							Confirm New password *
							<input type="text"name="cofirmPassword" pattern=""/>
						</label>
						<button>Validate</button>
					</form>
					<form>
						<h2>Formulaire d'inscription</h2>
						<label>
							firstName * :
  							<input type="text" name="firstName" pattern="[a-zA-Z]{2,102}"/>
						</label>
						<label>
							name *
							<input type="text" name="name" pattern="[a-zA-Z]{2,102}" />
						</label>
						<label>
							email *
							<input type="text"name="email" pattern="[a-z0-9._%+-]+@[a-z0-9.-]+\.[a-z]{2,4}" />
						</label>
						<label>
							adresse *
							<input type="text" name="adresse" pattern="[a-zA-Z]{2,102}" />
						</label>
						<label>
							city *
							<input type="text"name="city" pattern="[a-zA-Z]{2,45}" />
						</label>
						<label>
							postalCode *
							<input type="text"name="postalCode" pattern="[0-9]{5}" />
						</label>
						<label>
							login *
							<input type="text"name="login" pattern="[a-zA-Z0-9]{8,225}" />
						</label>
						<label>
							cellphone
							<input type="text"name="cellphone" pattern="[0-9]{10}" />
						</label>
						<label>
							phone
							<input type="text"name="phone" pattern="[0-9]{10}" />
						</label>
						<label>	
							<input type="radio" name="gender" value="consumer" checked />
							consumer
						</label>
						<label>
							<input type="radio" name="gender" value="producer" />	
							producer
						</label>
						<label>
    							<input type="radio" name="gender" value="pointOfSale" />
							point of sale
						</label>
						<label>
							RIB
							<input type="text"name="bankDetails" pattern="[A-Z0-9]{23}" />
						</label>
						<label>
							IBAN
							<input type="text"name="iban" pattern="[A-Z0-9]{34}"/>
						</label>
						<select name="Secret question" size="1">
							<option value="question1">What is the maiden name of your mother ?</option>
           						<option value="question2">What is the name of your first pet ?</option>
           						<option value="question3">what's the first school you attended ?</option>
           						<option value="question4">what is your birthplace ?</option>
          						<option value="question5">What is your favorite color ?</option>
							<option value="question5">What is your favorite number ?</option>
          						<option value="question7" selected>What is love ?</option>
						</select>
						<button>Validate</button>
					</form>
				</article>
			</section>
		</div>
		<footer>
			
		</footer>
	</body>
</html>
