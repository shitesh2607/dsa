import java.sql.*;

public class App {

    private static final String url="jdbc:mysql://localhost:3306/jdbc_db";
    private static final String username="root";
    private static final String password="admin123@";
    public static void main(String[] args) throws Exception {
        System.out.println("Hello, World!");
        
        try {
            Class.forName("com.mysql.cj.jdbc.Drivers");
        }catch(ClassNotFoundException e){
             System.out.println("NODB");
            System.out.println(e.getMessage());
        }

        try {
            Connection connection = DriverManager.getConnection(url, username, password);
            Statement statement = connection.createStatement();
            String querysString = "SELECT * FROM students";
            ResultSet resultSet = statement.executeQuery(querysString);
            while(resultSet.next()){
                int id = resultSet.getInt("id");
                String name = resultSet.getString("name");
                int age = resultSet.getInt("age");
                double marks = resultSet.getDouble("marks");
                System.out.println(id);
                System.out.println(name);
                System.out.println(age);
                System.out.println(marks);
            }
        } catch (SQLException e) {
            // TODO: handle exception
            System.out.println(e.getMessage());
        }
    }
}