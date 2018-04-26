//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/commons-io/src/main/java/org/apache/commons/io/comparator/ExtensionFileComparator.java
//

#include "J2ObjC_source.h"
#include "java/io/File.h"
#include "java/util/Comparator.h"
#include "org/apache/commons/io/FilenameUtils.h"
#include "org/apache/commons/io/IOCase.h"
#include "org/apache/commons/io/comparator/AbstractFileComparator.h"
#include "org/apache/commons/io/comparator/ExtensionFileComparator.h"
#include "org/apache/commons/io/comparator/ReverseComparator.h"

@interface OrgApacheCommonsIoComparatorExtensionFileComparator () {
 @public
  /*!
   @brief Whether the comparison is case sensitive.
   */
  OrgApacheCommonsIoIOCase *caseSensitivity_;
}

@end

J2OBJC_FIELD_SETTER(OrgApacheCommonsIoComparatorExtensionFileComparator, caseSensitivity_, OrgApacheCommonsIoIOCase *)

J2OBJC_INITIALIZED_DEFN(OrgApacheCommonsIoComparatorExtensionFileComparator)

id<JavaUtilComparator> OrgApacheCommonsIoComparatorExtensionFileComparator_EXTENSION_COMPARATOR;
id<JavaUtilComparator> OrgApacheCommonsIoComparatorExtensionFileComparator_EXTENSION_REVERSE;
id<JavaUtilComparator> OrgApacheCommonsIoComparatorExtensionFileComparator_EXTENSION_INSENSITIVE_COMPARATOR;
id<JavaUtilComparator> OrgApacheCommonsIoComparatorExtensionFileComparator_EXTENSION_INSENSITIVE_REVERSE;
id<JavaUtilComparator> OrgApacheCommonsIoComparatorExtensionFileComparator_EXTENSION_SYSTEM_COMPARATOR;
id<JavaUtilComparator> OrgApacheCommonsIoComparatorExtensionFileComparator_EXTENSION_SYSTEM_REVERSE;

@implementation OrgApacheCommonsIoComparatorExtensionFileComparator

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype)init {
  OrgApacheCommonsIoComparatorExtensionFileComparator_init(self);
  return self;
}
J2OBJC_IGNORE_DESIGNATED_END

- (instancetype)initWithOrgApacheCommonsIoIOCase:(OrgApacheCommonsIoIOCase *)caseSensitivity {
  OrgApacheCommonsIoComparatorExtensionFileComparator_initWithOrgApacheCommonsIoIOCase_(self, caseSensitivity);
  return self;
}

- (jint)compareWithId:(JavaIoFile *)file1
               withId:(JavaIoFile *)file2 {
  NSString *suffix1 = OrgApacheCommonsIoFilenameUtils_getExtensionWithNSString_([((JavaIoFile *) nil_chk(file1)) getName]);
  NSString *suffix2 = OrgApacheCommonsIoFilenameUtils_getExtensionWithNSString_([((JavaIoFile *) nil_chk(file2)) getName]);
  return [((OrgApacheCommonsIoIOCase *) nil_chk(caseSensitivity_)) checkCompareToWithNSString:suffix1 withNSString:suffix2];
}

- (NSString *)description {
  return JreStrcat("$$@C", [super description], @"[caseSensitivity=", caseSensitivity_, ']');
}

- (void)dealloc {
  RELEASE_(caseSensitivity_);
  [super dealloc];
}

+ (void)initialize {
  if (self == [OrgApacheCommonsIoComparatorExtensionFileComparator class]) {
    JreStrongAssignAndConsume(&OrgApacheCommonsIoComparatorExtensionFileComparator_EXTENSION_COMPARATOR, new_OrgApacheCommonsIoComparatorExtensionFileComparator_init());
    JreStrongAssignAndConsume(&OrgApacheCommonsIoComparatorExtensionFileComparator_EXTENSION_REVERSE, new_OrgApacheCommonsIoComparatorReverseComparator_initWithJavaUtilComparator_(OrgApacheCommonsIoComparatorExtensionFileComparator_EXTENSION_COMPARATOR));
    JreStrongAssignAndConsume(&OrgApacheCommonsIoComparatorExtensionFileComparator_EXTENSION_INSENSITIVE_COMPARATOR, new_OrgApacheCommonsIoComparatorExtensionFileComparator_initWithOrgApacheCommonsIoIOCase_(JreLoadStatic(OrgApacheCommonsIoIOCase, INSENSITIVE)));
    JreStrongAssignAndConsume(&OrgApacheCommonsIoComparatorExtensionFileComparator_EXTENSION_INSENSITIVE_REVERSE, new_OrgApacheCommonsIoComparatorReverseComparator_initWithJavaUtilComparator_(OrgApacheCommonsIoComparatorExtensionFileComparator_EXTENSION_INSENSITIVE_COMPARATOR));
    JreStrongAssignAndConsume(&OrgApacheCommonsIoComparatorExtensionFileComparator_EXTENSION_SYSTEM_COMPARATOR, new_OrgApacheCommonsIoComparatorExtensionFileComparator_initWithOrgApacheCommonsIoIOCase_(JreLoadStatic(OrgApacheCommonsIoIOCase, SYSTEM)));
    JreStrongAssignAndConsume(&OrgApacheCommonsIoComparatorExtensionFileComparator_EXTENSION_SYSTEM_REVERSE, new_OrgApacheCommonsIoComparatorReverseComparator_initWithJavaUtilComparator_(OrgApacheCommonsIoComparatorExtensionFileComparator_EXTENSION_SYSTEM_COMPARATOR));
    J2OBJC_SET_INITIALIZED(OrgApacheCommonsIoComparatorExtensionFileComparator)
  }
}

@end

void OrgApacheCommonsIoComparatorExtensionFileComparator_init(OrgApacheCommonsIoComparatorExtensionFileComparator *self) {
  OrgApacheCommonsIoComparatorAbstractFileComparator_init(self);
  JreStrongAssign(&self->caseSensitivity_, JreLoadStatic(OrgApacheCommonsIoIOCase, SENSITIVE));
}

OrgApacheCommonsIoComparatorExtensionFileComparator *new_OrgApacheCommonsIoComparatorExtensionFileComparator_init() {
  J2OBJC_NEW_IMPL(OrgApacheCommonsIoComparatorExtensionFileComparator, init)
}

OrgApacheCommonsIoComparatorExtensionFileComparator *create_OrgApacheCommonsIoComparatorExtensionFileComparator_init() {
  J2OBJC_CREATE_IMPL(OrgApacheCommonsIoComparatorExtensionFileComparator, init)
}

void OrgApacheCommonsIoComparatorExtensionFileComparator_initWithOrgApacheCommonsIoIOCase_(OrgApacheCommonsIoComparatorExtensionFileComparator *self, OrgApacheCommonsIoIOCase *caseSensitivity) {
  OrgApacheCommonsIoComparatorAbstractFileComparator_init(self);
  JreStrongAssign(&self->caseSensitivity_, caseSensitivity == nil ? JreLoadStatic(OrgApacheCommonsIoIOCase, SENSITIVE) : caseSensitivity);
}

OrgApacheCommonsIoComparatorExtensionFileComparator *new_OrgApacheCommonsIoComparatorExtensionFileComparator_initWithOrgApacheCommonsIoIOCase_(OrgApacheCommonsIoIOCase *caseSensitivity) {
  J2OBJC_NEW_IMPL(OrgApacheCommonsIoComparatorExtensionFileComparator, initWithOrgApacheCommonsIoIOCase_, caseSensitivity)
}

OrgApacheCommonsIoComparatorExtensionFileComparator *create_OrgApacheCommonsIoComparatorExtensionFileComparator_initWithOrgApacheCommonsIoIOCase_(OrgApacheCommonsIoIOCase *caseSensitivity) {
  J2OBJC_CREATE_IMPL(OrgApacheCommonsIoComparatorExtensionFileComparator, initWithOrgApacheCommonsIoIOCase_, caseSensitivity)
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(OrgApacheCommonsIoComparatorExtensionFileComparator)
