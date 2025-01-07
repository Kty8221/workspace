/**
 * 명명규칙(Naming Rule)
 *  1. 알파벳 대문자(A~Z), 소문자(a~z), 숫자(0~9), 특수문자(_)만 사용 가능
 *  2. 숫자로 시작 불가
 *    ex) 1ABC (X), ABC1(O)
 *  3. 대문자와 소문자는 다르게 인식
 *    ex) ABC != Abc != abc (같지않음)
 *  4. 예약어는 사용 불가
 *    ex) 예약어는 프로그래밍 언어에서 이미 사용하고 있는 키워드
 *         main, printf, sizeof...
 * 
 * 네이밍 케이스(합성어 표현)
 *  예 : student + number
 *  C : Class(객체)
 *  M : Method(함수)
 *  V : Varible(변수)
 * 
 *  1. 파스칼 케이스    → Age, StudentNumber (단어의 첫글자는 무조건 대문자)
 *    - Java(C), Python(C)
 *  2. 카멜 케이스      → age, studentNumber (합성어의 두번째 단어 첫글자에 대문자)
 *    - C(V, M), JAVA(V, M), JSON
 *  3. 스네이크 케이스  → age, student_number (특수문자'_' 이용)
 *    - Python(V, M)
 *  4. 케밥 케이스      → age, student-number (특수문자 '-' 이용)
 *    - 웹디자인(HTML, CSS)
 */

// JAVA 예시
// StudentNumber → Class(객체)
// studentNumber() → Method(함수)
// studentNumber → Variable(변수)