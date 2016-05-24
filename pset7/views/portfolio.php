
 <table class="table table-striped">
    <thead>
      <tr>
        <th>Name</th>
        <th>Symbol</th>
        <th>Shares</th>
        <th>Price</th>
        <th>TOTAL</th>
      </tr>
    </thead>
    <tbody align="left">
           <?php foreach ($positions as $position): ?>
           
               <tr>
                   <td><?= $position["name"] ?></td>
                   <td><?= $position["symbol"] ?></td>
                   <td><?= $position["shares"] ?></td>
                   <td>$<?= number_format($position["price"], 2, ',', '.') ?></td>
                   <td><strong>$<?= number_format($position["total"], 2, ',', '.') ?></strong></td>
               </tr>
           
           <?php endforeach ?>
           <tr>
            <td></td>
            <td></td><td></td><td>Symbols coast :</td>
            <td><strong>$<?= number_format($total_m, 2, ',', '.') ?></strong></td>
           </tr>
           <tr>
            <td>CASH</td>
            <td></td><td></td><td></td>
            <td><strong>$<?= number_format($money, 2, ',', '.') ?></strong></td>
           </tr>
    </tbody>
 </table>

  