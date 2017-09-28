const path = require('path');

module.exports = {
  entry: {
    home: './lib/js/src/reason/home.js'
  },
  output: {
    filename: '[name].js',
    path: __dirname + '/dist/'
  },
  module: {
    rules: [
      {
        test: /\.re$/, use: 'bs-loader'
      }
    ]
  }
}
