<form action="register.php" method="post">
    <fieldset>
        <br/>
        <div class="form-group">
            <input autocomplete="off" autofocus class="form-control" name="username" placeholder="Username" type="text"/>
        </div>
        <div class="form-group">
            <input class="form-control" name="password" placeholder="Password" type="password"/>
        </div>
        <div class="form-group">
            <input class="form-control" name="confirm" placeholder="Confirm password" type="password"/>
        </div>
        <div class="form-group">
            <button class="btn btn-danger btn-lg" type="submit">
                <span aria-hidden="true" class="glyphicon glyphicon-play-circle"></span>
                Register
            </button>
        </div>
    </fieldset>
</form>
<div>
    or <a href="login.php">Log In</a> for an account
</div>
