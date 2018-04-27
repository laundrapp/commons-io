//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/commons-io/src/main/java/org/apache/commons/io/input/NullInputStream.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheCommonsIoInputNullInputStream")
#ifdef RESTRICT_OrgApacheCommonsIoInputNullInputStream
#define INCLUDE_ALL_OrgApacheCommonsIoInputNullInputStream 0
#else
#define INCLUDE_ALL_OrgApacheCommonsIoInputNullInputStream 1
#endif
#undef RESTRICT_OrgApacheCommonsIoInputNullInputStream

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheCommonsIoInputNullInputStream_) && (INCLUDE_ALL_OrgApacheCommonsIoInputNullInputStream || defined(INCLUDE_OrgApacheCommonsIoInputNullInputStream))
#define OrgApacheCommonsIoInputNullInputStream_

#define RESTRICT_JavaIoInputStream 1
#define INCLUDE_JavaIoInputStream 1
#include "java/io/InputStream.h"

@class IOSByteArray;

/*!
 @brief A functional, light weight <code>InputStream</code> that emulates
  a stream of a specified size.
 <p>
  This implementation provides a light weight
  object for testing with an <code>InputStream</code>
  where the contents don't matter. 
 <p>
  One use case would be for testing the handling of
  large <code>InputStream</code> as it can emulate that
  scenario without the overhead of actually processing
  large numbers of bytes - significantly speeding up
  test execution times. 
 <p>
  This implementation returns zero from the method that
  reads a byte and leaves the array unchanged in the read
  methods that are passed a byte array.
  If alternative data is required the <code>processByte()</code> and 
 <code>processBytes()</code> methods can be implemented to generate
  data, for example: 
 @code

   public class TestInputStream extends NullInputStream {
       public TestInputStream(int size) {
           super(size);
       }
       protected int processByte() {
           return ... // return required value here
       }
       protected void processBytes(byte[] bytes, int offset, int length) {
           for (int i = offset; i < length; i++) {
               bytes[i] = ... // set array value here
           }         }         }        
  
@endcode
 @since 1.3
 @version $Id$
 */
@interface OrgApacheCommonsIoInputNullInputStream : JavaIoInputStream

#pragma mark Public

/*!
 @brief Create an <code>InputStream</code> that emulates a specified size
  which supports marking and does not throw EOFException.
 @param size The size of the input stream to emulate.
 */
- (instancetype __nonnull)initWithLong:(jlong)size;

/*!
 @brief Create an <code>InputStream</code> that emulates a specified
  size with option settings.
 @param size The size of the input stream to emulate.
 @param markSupported Whether this instance will support  the 
  <code> mark() </code>  functionality.
 @param throwEofException Whether this implementation  will throw an 
 <code>EOFException</code>  or return -1 when the  end of file is reached.
 */
- (instancetype __nonnull)initWithLong:(jlong)size
                           withBoolean:(jboolean)markSupported
                           withBoolean:(jboolean)throwEofException;

/*!
 @brief Return the number of bytes that can be read.
 @return The number of bytes that can be read.
 */
- (jint)available;

/*!
 @brief Close this input stream - resets the internal state to
  the initial values.
 @throw IOExceptionIf an error occurs.
 */
- (void)close;

/*!
 @brief Return the current position.
 @return the current position.
 */
- (jlong)getPosition;

/*!
 @brief Return the size this <code>InputStream</code> emulates.
 @return The size of the input stream to emulate.
 */
- (jlong)getSize;

/*!
 @brief Mark the current position.
 @param readlimit The number of bytes before this marked position  is invalid.
 @throw UnsupportedOperationExceptionif mark is not supported.
 */
- (void)markWithInt:(jint)readlimit;

/*!
 @brief Indicates whether <i>mark</i> is supported.
 @return Whether <i>mark</i> is supported or not.
 */
- (jboolean)markSupported;

/*!
 @brief Read a byte.
 @return Either The byte value returned by <code>processByte()</code>
  or <code>-1</code> if the end of file has been reached and 
 <code>throwEofException</code> is set to <code>false</code>.
 @throw EOFExceptionif the end of file is reached and 
 <code>throwEofException</code> is set to <code>true</code>.
 @throw IOExceptionif trying to read past the end of file.
 */
- (jint)read;

/*!
 @brief Read some bytes into the specified array.
 @param bytes The byte array to read into
 @return The number of bytes read or <code>-1</code>
  if the end of file has been reached and 
 <code>throwEofException</code> is set to <code>false</code>.
 @throw EOFExceptionif the end of file is reached and 
 <code>throwEofException</code> is set to <code>true</code>.
 @throw IOExceptionif trying to read past the end of file.
 */
- (jint)readWithByteArray:(IOSByteArray *)bytes;

/*!
 @brief Read the specified number bytes into an array.
 @param bytes The byte array to read into.
 @param offset The offset to start reading bytes into.
 @param length The number of bytes to read.
 @return The number of bytes read or <code>-1</code>
  if the end of file has been reached and 
 <code>throwEofException</code> is set to <code>false</code>.
 @throw EOFExceptionif the end of file is reached and 
 <code>throwEofException</code> is set to <code>true</code>.
 @throw IOExceptionif trying to read past the end of file.
 */
- (jint)readWithByteArray:(IOSByteArray *)bytes
                  withInt:(jint)offset
                  withInt:(jint)length;

/*!
 @brief Reset the stream to the point when mark was last called.
 @throw UnsupportedOperationExceptionif mark is not supported.
 @throw IOExceptionIf no position has been marked
  or the read limit has been exceed since the last position was
  marked.
 */
- (void)reset;

/*!
 @brief Skip a specified number of bytes.
 @param numberOfBytes The number of bytes to skip.
 @return The number of bytes skipped or <code>-1</code>
  if the end of file has been reached and 
 <code>throwEofException</code> is set to <code>false</code>.
 @throw EOFExceptionif the end of file is reached and 
 <code>throwEofException</code> is set to <code>true</code>.
 @throw IOExceptionif trying to read past the end of file.
 */
- (jlong)skipWithLong:(jlong)numberOfBytes;

#pragma mark Protected

/*!
 @brief Return a byte value for the  <code>read()</code> method.
 <p>
  This implementation returns zero.
 @return This implementation always returns zero.
 */
- (jint)processByte;

/*!
 @brief Process the bytes for the <code>read(byte[], offset, length)</code>
  method.
 <p>
  This implementation leaves the byte array unchanged.
 @param bytes The byte array
 @param offset The offset to start at.
 @param length The number of bytes.
 */
- (void)processBytesWithByteArray:(IOSByteArray *)bytes
                          withInt:(jint)offset
                          withInt:(jint)length;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheCommonsIoInputNullInputStream)

FOUNDATION_EXPORT void OrgApacheCommonsIoInputNullInputStream_initWithLong_(OrgApacheCommonsIoInputNullInputStream *self, jlong size);

FOUNDATION_EXPORT OrgApacheCommonsIoInputNullInputStream *new_OrgApacheCommonsIoInputNullInputStream_initWithLong_(jlong size) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsIoInputNullInputStream *create_OrgApacheCommonsIoInputNullInputStream_initWithLong_(jlong size);

FOUNDATION_EXPORT void OrgApacheCommonsIoInputNullInputStream_initWithLong_withBoolean_withBoolean_(OrgApacheCommonsIoInputNullInputStream *self, jlong size, jboolean markSupported, jboolean throwEofException);

FOUNDATION_EXPORT OrgApacheCommonsIoInputNullInputStream *new_OrgApacheCommonsIoInputNullInputStream_initWithLong_withBoolean_withBoolean_(jlong size, jboolean markSupported, jboolean throwEofException) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsIoInputNullInputStream *create_OrgApacheCommonsIoInputNullInputStream_initWithLong_withBoolean_withBoolean_(jlong size, jboolean markSupported, jboolean throwEofException);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheCommonsIoInputNullInputStream)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_OrgApacheCommonsIoInputNullInputStream")
