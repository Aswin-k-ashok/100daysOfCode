var express = require('express');
var router = express.Router();

/* GET users listing. */
router.get('/', function(req, res, next) {
  res.render('user/usrLogin');
});

router.get('/home',function(req,res,next){
  res.render('user/userHome')
});



router.get('/sign',function(req,res,next){
  res.render('user/usrSign')
})

module.exports = router;
