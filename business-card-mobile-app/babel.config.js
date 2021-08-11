module.exports = function (api) {
  api.cache(true);
  return {
    presets: ["babel-preset-expo", "@babel/preset-react"],
    sourceMaps: true,
    plugins: ["@babel/transform-react-jsx-source", "@babel/plugin-syntax-jsx"],
  };
};
