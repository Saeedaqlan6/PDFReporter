package org.oss.pdfreporter.sql;

import java.io.Closeable;
import java.math.BigDecimal;

/**
 * A Database result record.
 * @author donatmuller, 2013, last change 9:40:34 AM
 */
public interface IResultSet extends Closeable{
	boolean next() throws SQLException;
	boolean getBoolean(int columnIndex) throws SQLException;
	byte getByte(int columnIndex) throws SQLException;
	double getDouble(int columnIndex) throws SQLException;
	float getFloat(int columnIndex) throws SQLException;
	int getInt(int columnIndex) throws SQLException;
	long getLong(int columnIndex) throws SQLException;
	short getShort(int columnIndex) throws SQLException;
	String getString(int columnIndex) throws SQLException;
	BigDecimal getDecimal(int columnIndex) throws SQLException;
	IDate getDate(int columnIndex) throws SQLException;
	ITimestamp getTimestamp(int columnIndex) throws SQLException;
	ITime getTime(int columnIndex) throws SQLException;
	IDateTime getDateTime(int columnIndex) throws SQLException;
	IBlob getBlob(int columnIndex) throws SQLException;
	Object getObject(int columnIndex) throws SQLException;
	IResultMetaData getMetaData() throws SQLException;
	boolean wasNull() throws SQLException;
}
