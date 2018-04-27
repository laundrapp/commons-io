//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/commons-io/src/main/java/org/apache/commons/io/IOCase.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheCommonsIoIOCase")
#ifdef RESTRICT_OrgApacheCommonsIoIOCase
#define INCLUDE_ALL_OrgApacheCommonsIoIOCase 0
#else
#define INCLUDE_ALL_OrgApacheCommonsIoIOCase 1
#endif
#undef RESTRICT_OrgApacheCommonsIoIOCase

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheCommonsIoIOCase_) && (INCLUDE_ALL_OrgApacheCommonsIoIOCase || defined(INCLUDE_OrgApacheCommonsIoIOCase))
#define OrgApacheCommonsIoIOCase_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

/*!
 @brief Enumeration of IO case sensitivity.
 <p>
  Different filing systems have different rules for case-sensitivity.
  Windows is case-insensitive, Unix is case-sensitive. 
 <p>
  This class captures that difference, providing an enumeration to
  control how filename comparisons should be performed. It also provides
  methods that use the enumeration to perform comparisons. 
 <p>
  Wherever possible, you should use the <code>check</code> methods in this
  class to compare filenames.
 @version $Id$
 @since 1.3
 */
@interface OrgApacheCommonsIoIOCase : NSObject < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Compares two strings using the case-sensitivity rule.
 <p>
  This method mimics <code>String.compareTo</code> but takes case-sensitivity
  into account.
 @param str1 the first string to compare, not null
 @param str2 the second string to compare, not null
 @return true if equal using the case rules
 @throw NullPointerExceptionif either string is null
 */
- (jint)checkCompareToWithNSString:(NSString *)str1
                      withNSString:(NSString *)str2;

/*!
 @brief Checks if one string ends with another using the case-sensitivity rule.
 <p>
  This method mimics <code>String.endsWith</code> but takes case-sensitivity
  into account.
 @param str the string to check, not null
 @param end the end to compare against, not null
 @return true if equal using the case rules
 @throw NullPointerExceptionif either string is null
 */
- (jboolean)checkEndsWithWithNSString:(NSString *)str
                         withNSString:(NSString *)end;

/*!
 @brief Compares two strings using the case-sensitivity rule.
 <p>
  This method mimics <code>String.equals</code> but takes case-sensitivity
  into account.
 @param str1 the first string to compare, not null
 @param str2 the second string to compare, not null
 @return true if equal using the case rules
 @throw NullPointerExceptionif either string is null
 */
- (jboolean)checkEqualsWithNSString:(NSString *)str1
                       withNSString:(NSString *)str2;

/*!
 @brief Checks if one string contains another starting at a specific index using the
  case-sensitivity rule.
 <p>
  This method mimics parts of <code>int)</code> 
  but takes case-sensitivity into account.
 @param str the string to check, not null
 @param strStartIndex the index to start at in str
 @param search the start to search for, not null
 @return the first index of the search String,
   -1 if no match or <code>null</code> string input
 @throw NullPointerExceptionif either string is null
 @since 2.0
 */
- (jint)checkIndexOfWithNSString:(NSString *)str
                         withInt:(jint)strStartIndex
                    withNSString:(NSString *)search;

/*!
 @brief Checks if one string contains another at a specific index using the case-sensitivity rule.
 <p>
  This method mimics parts of <code>int, String, int, int)</code> 
  but takes case-sensitivity into account.
 @param str the string to check, not null
 @param strStartIndex the index to start at in str
 @param search the start to search for, not null
 @return true if equal using the case rules
 @throw NullPointerExceptionif either string is null
 */
- (jboolean)checkRegionMatchesWithNSString:(NSString *)str
                                   withInt:(jint)strStartIndex
                              withNSString:(NSString *)search;

/*!
 @brief Checks if one string starts with another using the case-sensitivity rule.
 <p>
  This method mimics <code>String.startsWith(String)</code> but takes case-sensitivity
  into account.
 @param str the string to check, not null
 @param start the start to compare against, not null
 @return true if equal using the case rules
 @throw NullPointerExceptionif either string is null
 */
- (jboolean)checkStartsWithWithNSString:(NSString *)str
                           withNSString:(NSString *)start;

/*!
 @brief Factory method to create an IOCase from a name.
 @param name the name to find
 @return the IOCase object
 @throw IllegalArgumentExceptionif the name is invalid
 */
+ (OrgApacheCommonsIoIOCase *)forNameWithNSString:(NSString *)name;

/*!
 @brief Gets the name of the constant.
 @return the name of the constant
 */
- (NSString *)getName;

/*!
 @brief Does the object represent case sensitive comparison.
 @return true if case sensitive
 */
- (jboolean)isCaseSensitive;

/*!
 @brief Gets a string describing the sensitivity.
 @return a string describing the sensitivity
 */
- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(OrgApacheCommonsIoIOCase)

/*!
 @brief The constant for case sensitive regardless of operating system.
 */
inline OrgApacheCommonsIoIOCase *OrgApacheCommonsIoIOCase_get_SENSITIVE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgApacheCommonsIoIOCase *OrgApacheCommonsIoIOCase_SENSITIVE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheCommonsIoIOCase, SENSITIVE, OrgApacheCommonsIoIOCase *)

/*!
 @brief The constant for case insensitive regardless of operating system.
 */
inline OrgApacheCommonsIoIOCase *OrgApacheCommonsIoIOCase_get_INSENSITIVE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgApacheCommonsIoIOCase *OrgApacheCommonsIoIOCase_INSENSITIVE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheCommonsIoIOCase, INSENSITIVE, OrgApacheCommonsIoIOCase *)

/*!
 @brief The constant for case sensitivity determined by the current operating system.
 Windows is case-insensitive when comparing filenames, Unix is case-sensitive. 
 <p>
  <strong>Note:</strong> This only caters for Windows and Unix. Other operating
  systems (e.g. OSX and OpenVMS) are treated as case sensitive if they use the
  Unix file separator and case-insensitive if they use the Windows file separator
  (see <code>java.io.File</code>).
  <p>
  If you derialize this constant of Windows, and deserialize on Unix, or vice
  versa, then the value of the case-sensitivity flag will change.
 */
inline OrgApacheCommonsIoIOCase *OrgApacheCommonsIoIOCase_get_SYSTEM(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgApacheCommonsIoIOCase *OrgApacheCommonsIoIOCase_SYSTEM;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheCommonsIoIOCase, SYSTEM, OrgApacheCommonsIoIOCase *)

FOUNDATION_EXPORT OrgApacheCommonsIoIOCase *OrgApacheCommonsIoIOCase_forNameWithNSString_(NSString *name);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheCommonsIoIOCase)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_OrgApacheCommonsIoIOCase")
