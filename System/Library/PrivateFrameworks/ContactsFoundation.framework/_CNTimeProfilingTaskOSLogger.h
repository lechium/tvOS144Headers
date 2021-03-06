/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNTaskTimeProfileLogging.h>

@protocol OS_os_log;
@class NSObject, NSString;

@interface _CNTimeProfilingTaskOSLogger : NSObject <CNTaskTimeProfileLogging> {

	NSObject*<OS_os_log> _os_log;

}

@property (readonly) NSObject*<OS_os_log> os_log;                   //@synthesize os_log=_os_log - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(NSObject*<OS_os_log>)os_log;
-(id)initWithOSLog:(id)arg1 ;
-(void)taskWillBegin:(id)arg1 ;
-(void)task:(id)arg1 didCompleteAfter:(double)arg2 ;
-(void)task:(id)arg1 didFailWithError:(id)arg2 after:(double)arg3 ;
@end

