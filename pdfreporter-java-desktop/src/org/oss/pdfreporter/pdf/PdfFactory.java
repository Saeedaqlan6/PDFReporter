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
package org.oss.pdfreporter.pdf;

import org.oss.pdfreporter.pdf.AbstractPdfFactory;
import org.oss.pdfreporter.pdf.DocumentException;
import org.oss.pdfreporter.pdf.IDocument;
import org.oss.pdfreporter.registry.ApiRegistry;

public class PdfFactory extends AbstractPdfFactory {

	public static void registerFactory() {
		ApiRegistry.register(new PdfFactory());
	}
	
	private PdfFactory() {
		super(1);
	}
	

	@Override
	protected IDocument newDocumentInternal(String filePath)
			throws DocumentException {
		return new Document(filePath);
	}

}
