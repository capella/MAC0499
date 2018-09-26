pipeline {
    agent any
    stages {
        stage('Build') {
            steps {
                sh 'echo "Hello World"'
                sh 'ls -l'
                sh 'cd SMART/sim/run/ && ./core_build'
            }
        }
    }
}