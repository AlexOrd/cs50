<form action="sell.php" method="post">
    <br/>
    <fieldset>
        <div class="form-group">
            <select class="form-control" name="sym">
                <option disabled selected value="">Symbol</option>
                
                <?php foreach ($symbols as $symbol): ?>
                <option value='<?= $symbol["symbol"]; ?>'><?= $symbol["symbol"]; ?></option>
                <?php endforeach ?>
                
            </select>
        </div>
        <div class="form-group">
            <button class="btn btn-info " type="submit">Sell</button>
        </div>
    </fieldset>
</form>
