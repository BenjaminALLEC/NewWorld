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
