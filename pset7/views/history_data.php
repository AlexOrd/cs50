<table class="table table-striped">
    <thead>
      <tr>
        <th>Transaction</th>
        <th>Date/Time</th>
        <th>Symbol</th>
        <th>Shares</th>
        <th>Price</th>
      </tr>
    </thead>
    <tbody align="left">
           <?php foreach ($res as $res_tab): ?>
           
               <tr>
                   <td><?= $res_tab["transaction"] ?></td>
                   <td><?= $res_tab["time"] ?></td>
                   <td><?= $res_tab["symbol"] ?></td>
                   <td><?= $res_tab["shares"] ?></td>
                   <td><strong>$<?= number_format($res_tab["price"], 2, ',', '.') ?></strong></td>
               </tr>
           
           <?php endforeach ?>
    </tbody>
 </table>