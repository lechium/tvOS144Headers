/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSFormatter.h>
#import <libobjc.A.dylib/HMFPrivateDescriptionFormatter.h>

@class NSString;

@interface HMDAccountHandleFormatter : NSFormatter <HMFPrivateDescriptionFormatter>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultFormatter;
-(id)stringForObjectValue:(id)arg1 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(id)privateStringForObjectValue:(id)arg1 ;
-(id)accountHandleFromString:(id)arg1 ;
@end

