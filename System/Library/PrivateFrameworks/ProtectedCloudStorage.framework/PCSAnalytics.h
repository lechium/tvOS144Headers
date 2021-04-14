/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Security/SFAnalytics.h>

@interface PCSAnalytics : SFAnalytics
+(id)databasePath;
+(id)logger;
-(void)logSuccessForEvent:(id)arg1 ;
-(void)logRecoverableError:(id)arg1 forEvent:(id)arg2 withAttributes:(id)arg3 ;
-(void)logUnrecoverableError:(id)arg1 forEvent:(id)arg2 withAttributes:(id)arg3 ;
-(void)noteEvent:(id)arg1 ;
-(id)dateOfLastSuccessForEvent:(id)arg1 ;
@end
