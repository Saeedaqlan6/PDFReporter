/*******************************************************************************
 * Copyright (c) 2013 Open Software Solutions GmbH.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the GNU Public License v3.0
 * which accompanies this distribution, and is available at
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Contributors:
 *     Open Software Solutions GmbH - initial API and implementation
 ******************************************************************************/
package org.oss.pdfreporter.font;

import java.util.Collection;
import java.util.List;

import org.oss.pdfreporter.font.IFont.FontDecoration;
import org.oss.pdfreporter.font.IFont.FontStyle;
import org.oss.pdfreporter.registry.ISessionObject;

/**
 * STUB FOR COMPILATION ONLY
 * @author donatmuller, 2013, last change 9:57:37 AM
 */
public class FontManager implements IFontManager {

	@Override
	public void dispose() {

	}

	@Override
	public void get(String key) {

	}

	@Override
	public void put(String key, ISessionObject value) {

	}

	@Override
	public void remove(String key) {

	}

	@Override
	public List<String> getFontFamilyNames() {
		return null;
	}

	@Override
	public Collection<IFont> getLoadedFonts() {
		return null;
	}

	@Override
	public IFont loadFont(String filePath, String encoding, boolean embed,
			String asName, FontStyle asStyle) {
		return null;
	}

	@Override
	public IFont getFont(String name, FontStyle style) {
		return null;
	}

	@Override
	public IFont findFont(String name, FontStyle style) {
		return null;
	}

	@Override
	public IFont getModifiedFont(IFont baseFont, float size,
			FontDecoration decoration) {
		return null;
	}

}
