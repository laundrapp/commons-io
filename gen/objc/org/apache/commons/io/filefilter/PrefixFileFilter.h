//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/commons-io/src/main/java/org/apache/commons/io/filefilter/PrefixFileFilter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheCommonsIoFilefilterPrefixFileFilter")
#ifdef RESTRICT_OrgApacheCommonsIoFilefilterPrefixFileFilter
#define INCLUDE_ALL_OrgApacheCommonsIoFilefilterPrefixFileFilter 0
#else
#define INCLUDE_ALL_OrgApacheCommonsIoFilefilterPrefixFileFilter 1
#endif
#undef RESTRICT_OrgApacheCommonsIoFilefilterPrefixFileFilter

#if !defined (OrgApacheCommonsIoFilefilterPrefixFileFilter_) && (INCLUDE_ALL_OrgApacheCommonsIoFilefilterPrefixFileFilter || defined(INCLUDE_OrgApacheCommonsIoFilefilterPrefixFileFilter))
#define OrgApacheCommonsIoFilefilterPrefixFileFilter_

#define RESTRICT_OrgApacheCommonsIoFilefilterAbstractFileFilter 1
#define INCLUDE_OrgApacheCommonsIoFilefilterAbstractFileFilter 1
#include "org/apache/commons/io/filefilter/AbstractFileFilter.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class IOSObjectArray;
@class JavaIoFile;
@class OrgApacheCommonsIoIOCase;
@protocol JavaUtilList;

/*!
 @brief Filters filenames for a certain prefix.
 <p>
  For example, to print all files and directories in the 
  current directory whose name starts with <code>Test</code>:
  
 @code

  File dir = new File(".");
  String[] files = dir.list( new PrefixFileFilter("Test") );
  for ( int i = 0; i &lt; files.length; i++ ) {
      System.out.println(files[i]);
  } 
  
@endcode
 @since 1.0
 @version $Id$
 - seealso: FileFilterUtils#prefixFileFilter(String)
 - seealso: FileFilterUtils#prefixFileFilter(String, IOCase)
 */
@interface OrgApacheCommonsIoFilefilterPrefixFileFilter : OrgApacheCommonsIoFilefilterAbstractFileFilter < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Constructs a new Prefix file filter for a list of prefixes.
 @param prefixes the prefixes to allow, must not be null
 @throw IllegalArgumentExceptionif the prefix list is null
 @throw ClassCastExceptionif the list does not contain Strings
 */
- (instancetype)initWithJavaUtilList:(id<JavaUtilList>)prefixes;

/*!
 @brief Constructs a new Prefix file filter for a list of prefixes
  specifying case-sensitivity.
 @param prefixes the prefixes to allow, must not be null
 @param caseSensitivity how to handle case sensitivity, null means case-sensitive
 @throw IllegalArgumentExceptionif the prefix list is null
 @throw ClassCastExceptionif the list does not contain Strings
 @since 1.4
 */
- (instancetype)initWithJavaUtilList:(id<JavaUtilList>)prefixes
        withOrgApacheCommonsIoIOCase:(OrgApacheCommonsIoIOCase *)caseSensitivity;

/*!
 @brief Constructs a new Prefix file filter for a single prefix.
 @param prefix the prefix to allow, must not be null
 @throw IllegalArgumentExceptionif the prefix is null
 */
- (instancetype)initWithNSString:(NSString *)prefix;

/*!
 @brief Constructs a new Prefix file filter for a single prefix 
  specifying case-sensitivity.
 @param prefix the prefix to allow, must not be null
 @param caseSensitivity how to handle case sensitivity, null means case-sensitive
 @throw IllegalArgumentExceptionif the prefix is null
 @since 1.4
 */
- (instancetype)initWithNSString:(NSString *)prefix
    withOrgApacheCommonsIoIOCase:(OrgApacheCommonsIoIOCase *)caseSensitivity;

/*!
 @brief Constructs a new Prefix file filter for any of an array of prefixes.
 <p>
  The array is not cloned, so could be changed after constructing the
  instance. This would be inadvisable however.
 @param prefixes the prefixes to allow, must not be null
 @throw IllegalArgumentExceptionif the prefix array is null
 */
- (instancetype)initWithNSStringArray:(IOSObjectArray *)prefixes;

/*!
 @brief Constructs a new Prefix file filter for any of an array of prefixes
  specifying case-sensitivity.
 <p>
  The array is not cloned, so could be changed after constructing the
  instance. This would be inadvisable however.
 @param prefixes the prefixes to allow, must not be null
 @param caseSensitivity how to handle case sensitivity, null means case-sensitive
 @throw IllegalArgumentExceptionif the prefix is null
 @since 1.4
 */
- (instancetype)initWithNSStringArray:(IOSObjectArray *)prefixes
         withOrgApacheCommonsIoIOCase:(OrgApacheCommonsIoIOCase *)caseSensitivity;

/*!
 @brief Checks to see if the filename starts with the prefix.
 @param file the File to check
 @return true if the filename starts with one of our prefixes
 */
- (jboolean)acceptWithJavaIoFile:(JavaIoFile *)file;

/*!
 @brief Checks to see if the filename starts with the prefix.
 @param file the File directory
 @param name the filename
 @return true if the filename starts with one of our prefixes
 */
- (jboolean)acceptWithJavaIoFile:(JavaIoFile *)file
                    withNSString:(NSString *)name;

/*!
 @brief Provide a String representaion of this file filter.
 @return a String representaion
 */
- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheCommonsIoFilefilterPrefixFileFilter)

FOUNDATION_EXPORT void OrgApacheCommonsIoFilefilterPrefixFileFilter_initWithNSString_(OrgApacheCommonsIoFilefilterPrefixFileFilter *self, NSString *prefix);

FOUNDATION_EXPORT OrgApacheCommonsIoFilefilterPrefixFileFilter *new_OrgApacheCommonsIoFilefilterPrefixFileFilter_initWithNSString_(NSString *prefix) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsIoFilefilterPrefixFileFilter *create_OrgApacheCommonsIoFilefilterPrefixFileFilter_initWithNSString_(NSString *prefix);

FOUNDATION_EXPORT void OrgApacheCommonsIoFilefilterPrefixFileFilter_initWithNSString_withOrgApacheCommonsIoIOCase_(OrgApacheCommonsIoFilefilterPrefixFileFilter *self, NSString *prefix, OrgApacheCommonsIoIOCase *caseSensitivity);

FOUNDATION_EXPORT OrgApacheCommonsIoFilefilterPrefixFileFilter *new_OrgApacheCommonsIoFilefilterPrefixFileFilter_initWithNSString_withOrgApacheCommonsIoIOCase_(NSString *prefix, OrgApacheCommonsIoIOCase *caseSensitivity) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsIoFilefilterPrefixFileFilter *create_OrgApacheCommonsIoFilefilterPrefixFileFilter_initWithNSString_withOrgApacheCommonsIoIOCase_(NSString *prefix, OrgApacheCommonsIoIOCase *caseSensitivity);

FOUNDATION_EXPORT void OrgApacheCommonsIoFilefilterPrefixFileFilter_initWithNSStringArray_(OrgApacheCommonsIoFilefilterPrefixFileFilter *self, IOSObjectArray *prefixes);

FOUNDATION_EXPORT OrgApacheCommonsIoFilefilterPrefixFileFilter *new_OrgApacheCommonsIoFilefilterPrefixFileFilter_initWithNSStringArray_(IOSObjectArray *prefixes) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsIoFilefilterPrefixFileFilter *create_OrgApacheCommonsIoFilefilterPrefixFileFilter_initWithNSStringArray_(IOSObjectArray *prefixes);

FOUNDATION_EXPORT void OrgApacheCommonsIoFilefilterPrefixFileFilter_initWithNSStringArray_withOrgApacheCommonsIoIOCase_(OrgApacheCommonsIoFilefilterPrefixFileFilter *self, IOSObjectArray *prefixes, OrgApacheCommonsIoIOCase *caseSensitivity);

FOUNDATION_EXPORT OrgApacheCommonsIoFilefilterPrefixFileFilter *new_OrgApacheCommonsIoFilefilterPrefixFileFilter_initWithNSStringArray_withOrgApacheCommonsIoIOCase_(IOSObjectArray *prefixes, OrgApacheCommonsIoIOCase *caseSensitivity) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsIoFilefilterPrefixFileFilter *create_OrgApacheCommonsIoFilefilterPrefixFileFilter_initWithNSStringArray_withOrgApacheCommonsIoIOCase_(IOSObjectArray *prefixes, OrgApacheCommonsIoIOCase *caseSensitivity);

FOUNDATION_EXPORT void OrgApacheCommonsIoFilefilterPrefixFileFilter_initWithJavaUtilList_(OrgApacheCommonsIoFilefilterPrefixFileFilter *self, id<JavaUtilList> prefixes);

FOUNDATION_EXPORT OrgApacheCommonsIoFilefilterPrefixFileFilter *new_OrgApacheCommonsIoFilefilterPrefixFileFilter_initWithJavaUtilList_(id<JavaUtilList> prefixes) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsIoFilefilterPrefixFileFilter *create_OrgApacheCommonsIoFilefilterPrefixFileFilter_initWithJavaUtilList_(id<JavaUtilList> prefixes);

FOUNDATION_EXPORT void OrgApacheCommonsIoFilefilterPrefixFileFilter_initWithJavaUtilList_withOrgApacheCommonsIoIOCase_(OrgApacheCommonsIoFilefilterPrefixFileFilter *self, id<JavaUtilList> prefixes, OrgApacheCommonsIoIOCase *caseSensitivity);

FOUNDATION_EXPORT OrgApacheCommonsIoFilefilterPrefixFileFilter *new_OrgApacheCommonsIoFilefilterPrefixFileFilter_initWithJavaUtilList_withOrgApacheCommonsIoIOCase_(id<JavaUtilList> prefixes, OrgApacheCommonsIoIOCase *caseSensitivity) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsIoFilefilterPrefixFileFilter *create_OrgApacheCommonsIoFilefilterPrefixFileFilter_initWithJavaUtilList_withOrgApacheCommonsIoIOCase_(id<JavaUtilList> prefixes, OrgApacheCommonsIoIOCase *caseSensitivity);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheCommonsIoFilefilterPrefixFileFilter)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheCommonsIoFilefilterPrefixFileFilter")
