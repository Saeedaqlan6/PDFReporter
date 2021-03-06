/*******************************************************************************
 * Copyright (c) 2015 Open Software Solutions GmbH.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the GNU Lesser Public License v3.0
 * which accompanies this distribution, and is available at
 * http://www.gnu.org/licenses/lgpl-3.0.html
 * 
 * Contributors:
 *     Open Software Solutions GmbH
 ******************************************************************************/
package org.oss.pdfreporter.compilers.jeval.functions;

import org.oss.pdfreporter.uses.net.sourceforge.jeval.Evaluator;
import org.oss.pdfreporter.uses.net.sourceforge.jeval.function.Function;
import org.oss.pdfreporter.uses.net.sourceforge.jeval.function.FunctionConstants;
import org.oss.pdfreporter.uses.net.sourceforge.jeval.function.FunctionException;
import org.oss.pdfreporter.uses.net.sourceforge.jeval.function.FunctionResult;

public class IsNull implements Function {
	private static String QUOTED_NULL = "'#null#'";
	private static String TRUE = "1.0";
	private static String FALSE = "0.0";

	@Override
	public String getName() {
		return "isNull";
	}

	@Override
	public FunctionResult execute(Evaluator evaluator, String arguments) throws FunctionException {
		String result = arguments.equals(QUOTED_NULL) ? TRUE : FALSE;
		return new FunctionResult(result, 
				FunctionConstants.FUNCTION_RESULT_TYPE_NUMERIC);
	}

}
