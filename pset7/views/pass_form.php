<form action="pass.php" method="post">
    <fieldset>
        <br/>
        <div class="form-group">
            <input autocomplete="off" autofocus class="form-control" name="password" placeholder="OLD password" type="text"/>
        </div>
        <div class="form-group">
            <input class="form-control" name="new_pas" placeholder="Password" type="password"/>
        </div>
        <div class="form-group">
            <input class="form-control" name="confirm" placeholder="Confirm password" type="password"/>
        </div>
        <div class="form-group">
            <button class="btn btn-danger btn-lg" type="submit">
                <span aria-hidden="true" class="glyphicon glyphicon-play-circle"></span>
                Change password
            </button>
        </div>
    </fieldset>
</form>

