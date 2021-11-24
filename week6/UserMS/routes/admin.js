var express = require('express');
var router = express.Router();

/* GET home page. */
router.get('/', function(req, res, next) {
  res.render('admin/admLogin');
});

router.get('/panel',function(req,res,next){
  res.render('admin/admPanel');
});

router.get('/admng',function(req,res,next) {
  res.render('admin/admng');  
})



module.exports = router;

