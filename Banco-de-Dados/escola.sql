-- Tabela

CREATE DATABASE Escola;
USE Escola;

CREATE TABLE Aluno(
	idRegistro INT(20) PRIMARY  KEY,
	nome varchar(100) NOT NULL,
	dataNascimento DATE
);
CREATE TABLE Professor(
	idCodigo INT(20) PRIMARY  KEY,
	nome varchar(100) NOT NULL,
	email varchar(30),
	titulacao ENUM('Graduação', 'Especialização', 'Mestrado', 'Doutorado')
);
CREATE TABLE Disciplina(
 idDisciplina INT(20) PRIMARY  KEY,
 nome varchar(30) NOT NULL,
 cargaHoraria INT(20) CHECK(cargaHoraria > 0),
 livro varchar(200) UNIQUE
 );
 CREATE TABLE Turma(
 idCodigo INT(20) PRIMARY  KEY,
 idDisciplina int(20),
 sigla varchar(30) DEFAULT'CTDS2023-1',
 nAlunos varchar(30),
 sala INT(20),
 professor int(20),
 FOREIGN KEY (idDisciplina) REFERENCES Disciplina(idDisciplina),
 FOREIGN KEY (professor) REFERENCES Professor(idCodigo)
);
CREATE TABLE Matricula(
idMatricula INT(20) PRIMARY  KEY,
turma int(20),
aluno int(20),
ano YEAR,
nota DECIMAL(10,2),
FOREIGN KEY (turma) REFERENCES Turma(idCodigo),
FOREIGN KEY (aluno) REFERENCES Aluno(idRegistro)
);
