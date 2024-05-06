import utest.Runner;
import utest.ui.Report;

class RunAll {
  public static function main() {
  	trace('hai');
    var runner = new Runner();
    runner.addCase(new tests.TestImage());
    runner.addCase(new tests.TestSound());
    Report.create(runner);

    runner.run();
  }
}