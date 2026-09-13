-- Script de criação do banco de dados de uma escola

CREATE DATABASE Escola;
USE Escola;

CREATE TABLE Aluno(
	registro INT(5) PRIMARY KEY,
	nome VARCHAR(150) NOT NULL,
	dataNascimento DATE
);

CREATE TABLE Professor(
	codigo INT(5) PRIMARY KEY,
	nome VARCHAR(150) NOT NULL,
	email VARCHAR(250),
	titulacao ENUM('Graduação', 'Especialização', 'Mestrado', 'Doutorado')
);

CREATE TABLE Disciplina(
	id INT(5) PRIMARY KEY AUTO_INCREMENT,
	nome VARCHAR(150) NOT NULL,
	cargaHoraria INT(5) CHECK(cargaHoraria > 0),
	livro VARCHAR(250) UNIQUE
);

CREATE TABLE Turma(
	codigo INT(5) PRIMARY KEY,
	disciplina INT(5),
	sigla VARCHAR(10) DEFAULT "CTDS2023-1",
	nAlunos INT(10),
	sala VARCHAR(20),
	professor INT(5),
	
	FOREIGN KEY (disciplina) REFERENCES Disciplina (id),
	FOREIGN KEY (professor) REFERENCES Professor (codigo)
);

CREATE TABLE Matricula(
	id INT(5) PRIMARY KEY AUTO_INCREMENT,
	turma INT(5),
	aluno INT(5),
	ano YEAR,
	nota DECIMAL(5,2),
	
	FOREIGN KEY (turma) REFERENCES Turma (codigo),
	FOREIGN KEY (aluno) REFERENCES Aluno (registro)
);


ALTER TABLE Aluno ADD COLUMN cidade_de_origem VARCHAR(150) DEFAULT "Jaraguá do Sul";

ALTER TABLE Disciplina MODIFY COLUMN nome VARCHAR(150);

ALTER TABLE Matricula ADD COLUMN frequencia INT(10);

ALTER TABLE Matricula MODIFY COLUMN nota DECIMAL(5,2) CHECK (nota > 0);


INSERT INTO Aluno (registro, nome, dataNascimento, cidade_de_origem)
			VALUES(000123, 'Maria Aparecida dos Santos', '2000-08-10', 'Cuibá');
            
SELECT * FROM matricula;

INSERT INTO Aluno (registro, nome, dataNascimento, cidade_de_origem)
			VALUES(000124, 'João Fujão', '1999-10-10', NULL);
            
INSERT INTO Aluno (registro, nome, dataNascimento)
			VALUES(000125, 'Cauê Fujão', '2000-10-10');
            
INSERT INTO Professor (codigo, nome, email, titulacao)
			VALUES(10001, 'Frank', 'frank@gmail.com', 'teste');
            
INSERT INTO Professor (codigo, nome, email, titulacao)
			VALUES(10002, 'Alexandre O Grande', 'alexandre@gmail.com', 'Mestrado');
            
INSERT INTO Disciplina (nome, cargaHoraria, livro)
			VALUES('Redes de Computadores', 40, 'Introdução a Camada OSI');

INSERT INTO Disciplina (nome, cargaHoraria, livro)
			VALUES('Programação Back End', 80, 'Introdução ao PHP');
            
INSERT INTO TURMA (codigo, disciplina, sigla, nAlunos, sala, professor)
			VALUES(100, 1, 'CTDS2026-1', 11, 'B302', 10001);
            
INSERT INTO Matricula (turma, aluno, ano, nota)
			VALUES(100, 000125, 2026, 6);
            
INSERT INTO Matricula (turma, aluno, ano, nota)
			VALUES(100, 000124, 2026, -6);