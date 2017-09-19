const path = require('path');

module.exports = {
  entry: {
    home: './src/reason/home.re'
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
