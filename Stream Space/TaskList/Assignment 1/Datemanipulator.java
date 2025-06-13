import java.time.LocalDate;
import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;
import java.time.temporal.ChronoUnit;
import java.util.Scanner;

public class Datemanipulator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Please enter a date in the format YYYY-MM-DD: ");
        String userInput = scanner.nextLine();

        try {
            // Parse the input date
            LocalDate inputDate = LocalDate.parse(userInput);
            LocalDateTime inputDateTime = inputDate.atStartOfDay(); // Convert to LocalDateTime at start of the day

            // Get the current date and time
            LocalDateTime now = LocalDateTime.now();

            // 1. Format the date in various ways
            DateTimeFormatter formatter1 = DateTimeFormatter.ofPattern("EEEE, MMMM d 'th' yyyy");
            DateTimeFormatter formatter2 = DateTimeFormatter.ofPattern("MMM d 'th' yyyy, h:mm:ss a");
            DateTimeFormatter formatter3 = DateTimeFormatter.ofPattern("EEEE, MMMM d 'th' yyyy, h:mm:ss a");

            System.out.println("Formatted Date 1: " + inputDateTime.format(formatter1));
            System.out.println("Formatted Date 2: " + inputDateTime.format(formatter2));
            System.out.println("Formatted Date 3: " + inputDateTime.format(formatter3));

            // 2. Calculate the difference between the input date and the current date
            long daysBetweenNow = ChronoUnit.DAYS.between(inputDateTime, now);
            long hoursBetweenNow = ChronoUnit.HOURS.between(inputDateTime, now) % 24;
            long minutesBetweenNow = ChronoUnit.MINUTES.between(inputDateTime, now) % 60;
            long secondsBetweenNow = ChronoUnit.SECONDS.between(inputDateTime, now) % 60;

            System.out.printf("Difference from now: %d days, %d hours, %d minutes, %d seconds%n",
                    daysBetweenNow, hoursBetweenNow, minutesBetweenNow, secondsBetweenNow);

            // 3. Calculate the difference between the input date and a current date
            LocalDate currentDate = LocalDate.now(); // Get today's date
            LocalDateTime currentDateTime = currentDate.atStartOfDay();

            long daysBetweenCurrent = ChronoUnit.DAYS.between(inputDateTime, currentDateTime);
            long hoursBetweenCurrent = ChronoUnit.HOURS.between(inputDateTime, currentDateTime) % 24;
            long minutesBetweenCurrent = ChronoUnit.MINUTES.between(inputDateTime, currentDateTime) % 60;
            long secondsBetweenCurrent = ChronoUnit.SECONDS.between(inputDateTime, currentDateTime) % 60;

            System.out.printf("Difference to current date: %d days, %d hours, %d minutes, %d seconds%n",
                    daysBetweenCurrent, hoursBetweenCurrent, minutesBetweenCurrent, secondsBetweenCurrent);

        } catch (Exception e) {
            System.out.println("Invalid date format. Please enter a date in the format YYYY-MM-DD.");
        } finally {
            scanner.close();
        }
    }
}