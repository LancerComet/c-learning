/**
 * Compile C source files into exe.
 */

const childProcess = require('child_process')
const fs = require('fs')
const path = require('path')

const IGNOREDFILES = ['.git', '.vscode', '.idea', 'modules']

readDir(path.resolve(__dirname))

/**
 * Read directory in Sync.
 * 
 * @param {any} dirPath
 * @returns
 */
function readDir (dirPath) {
  const files = fs.readdirSync(dirPath)
  files.forEach(fileName => {
    if (IGNOREDFILES.indexOf(fileName) > -1) return
    fileName = dirPath + '/' + fileName
    isDirectory(fileName) ? readDir(fileName) : cLangCompiler(fileName)
  })
}

/**
 * Directory checking.
 * 
 * @param {string} path
 * @returns {boolean}
 */
function isDirectory (path) {
  return fs.statSync(path).isDirectory()
}

/**
 * C lang source file compiler.
 * 
 * @param {string} fileName
 * @returns {boolean}
 */
function cLangCompiler (fileName) {
  if (fileName.indexOf('.c') < 0) return
  const outputFileName = fileName.replace('.c', '.exe')
  childProcess.exec(`gcc ${fileName} -o ${outputFileName}`)
  return true
}
