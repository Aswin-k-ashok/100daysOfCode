var express = require('express');
const { response } = require('../app');
var router = express.Router();

/* GET users listing. */
router.get('/', function(req, res, next) {

  let users=[
    {
      firstName:"john",
      lastName:"wick",
      phoneNo:"83985998289",
      eMail:"merc@cont.com",
      password:"********",
      passwordRe:"********",
    },
    {
      firstName:"john",
      lastName:"wick",
      phoneNo:"83985998289",
      eMail:"merc@cont.com",
      password:"********",
      passwordRe:"********",
    }
  ]

  res.render('admin/view-prod',{admin:true,users});
});

router.get('/add-usr',function(req,res){
   res.render('admin/add-usr')
})

router.post('/add-usr',(req,res)=>{
  console.log(req.body)
})

module.exports = router;
