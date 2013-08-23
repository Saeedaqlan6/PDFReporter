package org.oss.pdfreporter.jasperreports.compilers.jeval.functions;

import java.util.Calendar;

import org.oss.pdfreporter.uses.net.sourceforge.jeval.ArgumentTokenizer;
import org.oss.pdfreporter.uses.net.sourceforge.jeval.EvaluationConstants;
import org.oss.pdfreporter.uses.net.sourceforge.jeval.Evaluator;
import org.oss.pdfreporter.uses.net.sourceforge.jeval.function.Function;
import org.oss.pdfreporter.uses.net.sourceforge.jeval.function.FunctionConstants;
import org.oss.pdfreporter.uses.net.sourceforge.jeval.function.FunctionException;
import org.oss.pdfreporter.uses.net.sourceforge.jeval.function.FunctionResult;


/**
 * Truncate date to month or year.
 * @author donatmuller, 2013, last change 11:35:42 PM
 * 
 */
public class TruncateDateTo implements Function {

	private final static String MODE_MONTH = "'M'";
	@Override
	public String getName() {
		return "truncateDateTo";
	}

	@Override
	public FunctionResult execute(Evaluator evaluator, String arguments)
			throws FunctionException {
		Long date = null;

		try {
			final ArgumentTokenizer tokenizer = new ArgumentTokenizer(
					arguments, EvaluationConstants.FUNCTION_ARGUMENT_SEPARATOR);
			String mode = tokenizer.nextToken();
			date = new Double(tokenizer.nextToken()).longValue();
			
			Calendar calendar = Calendar.getInstance();
			calendar.setTimeInMillis(date);
			int year = calendar.get(Calendar.YEAR);
			int month = calendar.get(Calendar.MONTH);
			calendar.clear();
			calendar.set(Calendar.YEAR, year);
			if (mode.equalsIgnoreCase(MODE_MONTH)) {				
				calendar.set(Calendar.MONTH, month);
			}
			date = calendar.getTimeInMillis();
			
		} catch (Exception e) {
			throw new FunctionException("Invalid argument.", e);
		}

		return new FunctionResult(date.toString(), 
				FunctionConstants.FUNCTION_RESULT_TYPE_NUMERIC);
	}

}
