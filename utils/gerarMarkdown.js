// node .\utils\gerarMarkdown.js (semana)
const fs = require('fs')
const args = process.argv.slice(2)
const directoryPath = `C:\\Users\\Client\\Desktop\\Projetos LeoBardo\\ufrj-treinamento-obi\\semana-0${args[0]}`
fs.readdir(directoryPath, function (err, files) {
  if (err) {
    return console.log('Deu um erro ai: ' + err)
  }

  const cppFiles = files.filter((file) => (file.match(/.+(?=\.cpp)/)))

  const cppFilesFormated = cppFiles.map((file) => file
    .replace('.cpp', '')
    .replace('_', '')
    .replace(/[A-Z]/g, (m) => (' ' + m))
  )

  let markdownHeader = `<h2 id="toc"> Exercícios feitos na semana ${args[0]} </h2>\n\n`
  markdownHeader += `Aqui contém todos os exercícios feitos na semana ${args[0]}, o problema apresentado no exercício, a documentação do código e o código em si.\n\n`
  markdownHeader += `Navegue entre os exercícios abaixo:\n\n`
  let markdownTOC = ''
  let markdownContent = ''

  cppFilesFormated.forEach((name, index) => {
    let number = name.substring(0, 4)
    let problemName = name.substring(5, name.length)
    markdownTOC += `* [${number} - ${problemName}](#${number})\n`

    markdownContent += `\n<hr id="${number}">\n\n`
    markdownContent += `## ${number} - ${problemName}\n\n`
    markdownContent += `Mensagem de exemplo.\n\n`
    markdownContent += `[Acesse o problema.](https://www.urionlinejudge.com.br/judge/pt/problems/view/${number})\n\n`
    markdownContent += `[Veja minha solução ao problema.](https://github.com/LeoBardineo/ufrj-treinamento-obi/blob/main/semana-0${args[0]}/${cppFiles[index]})\n\n`
    markdownContent += `[Volte aos tópicos de exercícios.](#toc)\n`
  })

  fs.writeFile(`./semana-0${args[0]}/README.md`, markdownHeader + markdownTOC + markdownContent, (err) => {
    if (err) {
      console.log(err)
    }
  }
  )
})
