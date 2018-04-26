//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/commons-io/src/main/java/org/apache/commons/io/ThreadMonitor.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheCommonsIoThreadMonitor")
#ifdef RESTRICT_OrgApacheCommonsIoThreadMonitor
#define INCLUDE_ALL_OrgApacheCommonsIoThreadMonitor 0
#else
#define INCLUDE_ALL_OrgApacheCommonsIoThreadMonitor 1
#endif
#undef RESTRICT_OrgApacheCommonsIoThreadMonitor

#if !defined (OrgApacheCommonsIoThreadMonitor_) && (INCLUDE_ALL_OrgApacheCommonsIoThreadMonitor || defined(INCLUDE_OrgApacheCommonsIoThreadMonitor))
#define OrgApacheCommonsIoThreadMonitor_

#define RESTRICT_JavaLangRunnable 1
#define INCLUDE_JavaLangRunnable 1
#include "java/lang/Runnable.h"

@class JavaLangThread;

/*!
 @brief Monitors a thread, interrupting it of it reaches the specified timout.
 <p>
  This works by sleeping until the specified timout amount and then
  interrupting the thread being monitored. If the thread being monitored
  completes its work before being interrupted, it should <code>interrupt()<code>
  the <i>monitor</i> thread. 
 <p>
   
 @code

        long timeoutInMillis = 1000;
        try {
            Thread monitor = ThreadMonitor.start(timeoutInMillis);
            // do some work here
            ThreadMonitor.stop(monitor);
        } catch (InterruptedException e) {
            // timed amount was reached
        } 
  
@endcode
 @version $Id$
 */
@interface OrgApacheCommonsIoThreadMonitor : NSObject < JavaLangRunnable >

#pragma mark Public

/*!
 @brief Sleep until the specified timout amount and then
  interrupt the thread being monitored.
 - seealso: Runnable#run()
 */
- (void)run;

/*!
 @brief Start monitoring the current thread.
 @param timeout The timout amount in milliseconds  or no timeout if the value is zero or less
 @return The monitor thread or <code>null</code>
  if the timout amount is not greater than zero
 */
+ (JavaLangThread *)startWithLong:(jlong)timeout;

/*!
 @brief Start monitoring the specified thread.
 @param thread The thread The thread to monitor
 @param timeout The timout amount in milliseconds  or no timeout if the value is zero or less
 @return The monitor thread or <code>null</code>
  if the timout amount is not greater than zero
 */
+ (JavaLangThread *)startWithJavaLangThread:(JavaLangThread *)thread
                                   withLong:(jlong)timeout;

/*!
 @brief Stop monitoring the specified thread.
 @param thread The monitor thread, may be <code>null</code>
 */
+ (void)stopWithJavaLangThread:(JavaLangThread *)thread;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheCommonsIoThreadMonitor)

FOUNDATION_EXPORT JavaLangThread *OrgApacheCommonsIoThreadMonitor_startWithLong_(jlong timeout);

FOUNDATION_EXPORT JavaLangThread *OrgApacheCommonsIoThreadMonitor_startWithJavaLangThread_withLong_(JavaLangThread *thread, jlong timeout);

FOUNDATION_EXPORT void OrgApacheCommonsIoThreadMonitor_stopWithJavaLangThread_(JavaLangThread *thread);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheCommonsIoThreadMonitor)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheCommonsIoThreadMonitor")
