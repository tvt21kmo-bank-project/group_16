const db = require('../database');

const withdraw={
	nosto: function(tilinumero, callback) {
      return db.query('SELECT saldo FROM tili WHERE tilinumero = ?',[tilinumero], callback); 
	  }
};

module.exports = withdraw;