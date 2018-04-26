//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/commons-io/src/main/java/org/apache/commons/io/IOCase.java
//

#include "J2ObjC_source.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/NullPointerException.h"
#include "org/apache/commons/io/FilenameUtils.h"
#include "org/apache/commons/io/IOCase.h"

@interface OrgApacheCommonsIoIOCase () {
 @public
  /*!
   @brief The enumeration name.
   */
  NSString *name_;
  /*!
   @brief The sensitivity flag.
   */
  jboolean sensitive_;
}

@end

J2OBJC_FIELD_SETTER(OrgApacheCommonsIoIOCase, name_, NSString *)

/*!
 @brief Serialization version.
 */
inline jlong OrgApacheCommonsIoIOCase_get_serialVersionUID(void);
#define OrgApacheCommonsIoIOCase_serialVersionUID -6343169151696340687LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheCommonsIoIOCase, serialVersionUID, jlong)

__attribute__((unused)) static void OrgApacheCommonsIoIOCase_initWithNSString_withBoolean_(OrgApacheCommonsIoIOCase *self, NSString *name, jboolean sensitive);

__attribute__((unused)) static OrgApacheCommonsIoIOCase *new_OrgApacheCommonsIoIOCase_initWithNSString_withBoolean_(NSString *name, jboolean sensitive) NS_RETURNS_RETAINED;

__attribute__((unused)) static OrgApacheCommonsIoIOCase *create_OrgApacheCommonsIoIOCase_initWithNSString_withBoolean_(NSString *name, jboolean sensitive);

__attribute__((unused)) static id OrgApacheCommonsIoIOCase_readResolve(OrgApacheCommonsIoIOCase *self);

J2OBJC_INITIALIZED_DEFN(OrgApacheCommonsIoIOCase)

OrgApacheCommonsIoIOCase *OrgApacheCommonsIoIOCase_SENSITIVE;
OrgApacheCommonsIoIOCase *OrgApacheCommonsIoIOCase_INSENSITIVE;
OrgApacheCommonsIoIOCase *OrgApacheCommonsIoIOCase_SYSTEM;

@implementation OrgApacheCommonsIoIOCase

+ (OrgApacheCommonsIoIOCase *)forNameWithNSString:(NSString *)name {
  return OrgApacheCommonsIoIOCase_forNameWithNSString_(name);
}

- (NSString *)getName {
  return name_;
}

- (jboolean)isCaseSensitive {
  return sensitive_;
}

- (jint)checkCompareToWithNSString:(NSString *)str1
                      withNSString:(NSString *)str2 {
  if (str1 == nil || str2 == nil) {
    @throw create_JavaLangNullPointerException_initWithNSString_(@"The strings must not be null");
  }
  return sensitive_ ? [str1 compareToWithId:str2] : [str1 java_compareToIgnoreCase:str2];
}

- (jboolean)checkEqualsWithNSString:(NSString *)str1
                       withNSString:(NSString *)str2 {
  if (str1 == nil || str2 == nil) {
    @throw create_JavaLangNullPointerException_initWithNSString_(@"The strings must not be null");
  }
  return sensitive_ ? [str1 isEqual:str2] : [str1 java_equalsIgnoreCase:str2];
}

- (jboolean)checkStartsWithWithNSString:(NSString *)str
                           withNSString:(NSString *)start {
  return [((NSString *) nil_chk(str)) java_regionMatches:!sensitive_ thisOffset:0 aString:start otherOffset:0 count:[((NSString *) nil_chk(start)) java_length]];
}

- (jboolean)checkEndsWithWithNSString:(NSString *)str
                         withNSString:(NSString *)end {
  jint endLen = [((NSString *) nil_chk(end)) java_length];
  return [((NSString *) nil_chk(str)) java_regionMatches:!sensitive_ thisOffset:[str java_length] - endLen aString:end otherOffset:0 count:endLen];
}

- (jint)checkIndexOfWithNSString:(NSString *)str
                         withInt:(jint)strStartIndex
                    withNSString:(NSString *)search {
  jint endIndex = [((NSString *) nil_chk(str)) java_length] - [((NSString *) nil_chk(search)) java_length];
  if (endIndex >= strStartIndex) {
    for (jint i = strStartIndex; i <= endIndex; i++) {
      if ([self checkRegionMatchesWithNSString:str withInt:i withNSString:search]) {
        return i;
      }
    }
  }
  return -1;
}

- (jboolean)checkRegionMatchesWithNSString:(NSString *)str
                                   withInt:(jint)strStartIndex
                              withNSString:(NSString *)search {
  return [((NSString *) nil_chk(str)) java_regionMatches:!sensitive_ thisOffset:strStartIndex aString:search otherOffset:0 count:[((NSString *) nil_chk(search)) java_length]];
}

- (NSString *)description {
  return name_;
}

- (void)dealloc {
  RELEASE_(name_);
  [super dealloc];
}

+ (void)initialize {
  if (self == [OrgApacheCommonsIoIOCase class]) {
    JreStrongAssignAndConsume(&OrgApacheCommonsIoIOCase_SENSITIVE, new_OrgApacheCommonsIoIOCase_initWithNSString_withBoolean_(@"Sensitive", true));
    JreStrongAssignAndConsume(&OrgApacheCommonsIoIOCase_INSENSITIVE, new_OrgApacheCommonsIoIOCase_initWithNSString_withBoolean_(@"Insensitive", false));
    JreStrongAssignAndConsume(&OrgApacheCommonsIoIOCase_SYSTEM, new_OrgApacheCommonsIoIOCase_initWithNSString_withBoolean_(@"System", !OrgApacheCommonsIoFilenameUtils_isSystemWindows()));
    J2OBJC_SET_INITIALIZED(OrgApacheCommonsIoIOCase)
  }
}

@end

OrgApacheCommonsIoIOCase *OrgApacheCommonsIoIOCase_forNameWithNSString_(NSString *name) {
  OrgApacheCommonsIoIOCase_initialize();
  if ([((NSString *) nil_chk(((OrgApacheCommonsIoIOCase *) nil_chk(OrgApacheCommonsIoIOCase_SENSITIVE))->name_)) isEqual:name]) {
    return OrgApacheCommonsIoIOCase_SENSITIVE;
  }
  if ([((OrgApacheCommonsIoIOCase *) nil_chk(OrgApacheCommonsIoIOCase_INSENSITIVE))->name_ isEqual:name]) {
    return OrgApacheCommonsIoIOCase_INSENSITIVE;
  }
  if ([((OrgApacheCommonsIoIOCase *) nil_chk(OrgApacheCommonsIoIOCase_SYSTEM))->name_ isEqual:name]) {
    return OrgApacheCommonsIoIOCase_SYSTEM;
  }
  @throw create_JavaLangIllegalArgumentException_initWithNSString_(JreStrcat("$$", @"Invalid IOCase name: ", name));
}

void OrgApacheCommonsIoIOCase_initWithNSString_withBoolean_(OrgApacheCommonsIoIOCase *self, NSString *name, jboolean sensitive) {
  NSObject_init(self);
  JreStrongAssign(&self->name_, name);
  self->sensitive_ = sensitive;
}

OrgApacheCommonsIoIOCase *new_OrgApacheCommonsIoIOCase_initWithNSString_withBoolean_(NSString *name, jboolean sensitive) {
  J2OBJC_NEW_IMPL(OrgApacheCommonsIoIOCase, initWithNSString_withBoolean_, name, sensitive)
}

OrgApacheCommonsIoIOCase *create_OrgApacheCommonsIoIOCase_initWithNSString_withBoolean_(NSString *name, jboolean sensitive) {
  J2OBJC_CREATE_IMPL(OrgApacheCommonsIoIOCase, initWithNSString_withBoolean_, name, sensitive)
}

id OrgApacheCommonsIoIOCase_readResolve(OrgApacheCommonsIoIOCase *self) {
  return OrgApacheCommonsIoIOCase_forNameWithNSString_(self->name_);
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(OrgApacheCommonsIoIOCase)
