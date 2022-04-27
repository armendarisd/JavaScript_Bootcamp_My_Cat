var argumentos = process.argv; 
let fs = require('fs');

fs.readFile(argumentos[2], 'utf-8', (err, data) => {
  if(err) {
    console.log('error: ', err);
  } else {
    console.log(data);
  }
});


