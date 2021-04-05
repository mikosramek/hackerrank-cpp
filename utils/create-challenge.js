const fs = require('fs');
const path = require('path');

const template = require('./cpp-template');

const createFile = (difficulty, baseName) => {
  const folderPath = path.resolve(__dirname, '..', difficulty);
  fs.writeFileSync(
    `${folderPath}/${baseName}.cpp`,
    template,
    (err) => {
      if (err) throw err;
    }
  );
  // fs.writeFileSync(
  //   `${folderPath}/${baseName}.out`,
  //   template,
  //   (err) => {
  //     if (err) throw err;
  //   }
  // );
};

const createChallenge = () => {
  const args = process.argv.slice(2);
  if (args.length < 2) return console.error('Either no difficulty or challenge name provided.');
  const diff = args[0];
  const baseName = args[1];
  switch(diff) {
    case 'easy':
    case 'medium':
    case 'hard':
      createFile(diff, baseName)
      break;
    default:
      console.error(`Difficulty not properly specified (${diff} !== easy|medium|hard)!`);
  }
};

createChallenge();
