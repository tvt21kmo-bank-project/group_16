const express = require('express');
const router = express.Router();
const withdraw = require('../models/withdraw_model');

router.get('/tilinumero?',
function(request, response) {
  if (request.params.tilinumero) {
    withdraw.nosto(request.params.tilinumero, function(err, dbResult) {
      if (err) {
        response.json(err);
      } else {
        response.json(dbResult);
      }
    });
  } else {
    withdraw.nosto(function(err, dbResult) {
      if (err) {
        response.json(err);
      } else {
        response.json(dbResult);
      }
    });
  }
}
	/*function (request, response) {
		if(request.body.tilinumero && request.body.amount){
		const tilinumero = request.body.tilinumero;
		const amount = request.body.amount;
		withdraw.nosto(tilinumero, function(dbError, dbResult) {
			if(dbError){
				response.json(dbError);
			}
					else {
					console.log("Toimii");
					}
			}
			);
		}
	}*/
);  
	
module.exports = router;