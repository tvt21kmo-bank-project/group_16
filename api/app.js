var express = require('express');
var path = require('path');
var cookieParser = require('cookie-parser');
var logger = require('morgan');

var asiakasRouter = require('./routes/asiakas');
var loginRouter = require('./routes/login');
var withdrawRouter = require('./routes/withdraw');
var asiakastililinkkiRouter = require('./routes/asiakastililinkki');
var tiliRouter = require('./routes/tili');
var korttiRouter = require('./routes/kortti');
var tilitapahtumatRouter = require('./routes/tilitapahtumat');

var app = express();

const helmet = require('helmet');
const cors = require('cors');

app.use(helmet());
app.use(cors());



app.use(logger('dev'));
app.use(express.json());
app.use(express.urlencoded({ extended: false }));
app.use(cookieParser());
app.use(express.static(path.join(__dirname, 'public')));

app.use('/asiakas', asiakasRouter);
app.use('/login', loginRouter);
app.use('/withdraw', withdrawRouter);
app.use('/asiakastililinkki', asiakastililinkkiRouter);
app.use('/tili', tiliRouter);
app.use('/kortti', korttiRouter);
app.use('/tilitapahtumat', tilitapahtumatRouter);

module.exports = app;

