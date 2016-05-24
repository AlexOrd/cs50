<div class="alert alert-info">
  A share of <strong><?= htmlspecialchars($stock["name"]) ?></strong> 
  (<?= htmlspecialchars($stock["symbol"]) ?>) coast <strong>$<?= htmlspecialchars(number_format($stock["price"], 2, ',', ' ')) ?></strong> 
</div>
