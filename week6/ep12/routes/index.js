var express = require('express');
var router = express.Router();
var MongoClient = require('mongodb').MongoClient

/* GET home page. */
router.get('/', function(req, res, next) {
  res.render('index', { title: 'Express' });
});
router.post('/submit', function(req, res) {
  console.log(req.body)

  MongoClient.connect('mongodb://localhost:27017',function(err,client){
    if(err)
    console.log('error')
    else
    client.db('dummy12').collection('user').insertOne(req.body)  // console.log('database connected')
    console.log("check database")
  })

  res.send('got it')
})


module.exports = router;
