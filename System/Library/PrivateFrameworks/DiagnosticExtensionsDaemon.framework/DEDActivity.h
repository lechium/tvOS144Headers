/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_os_activity;
@class NSObject;

@interface DEDActivity : NSObject {

	NSObject*<OS_os_activity> _cleanup;

}

@property (retain) NSObject*<OS_os_activity> cleanup;              //@synthesize cleanup=_cleanup - In the implementation block
+(id)sharedInstance;
-(NSObject*<OS_os_activity>)cleanup;
-(void)setCleanup:(NSObject*<OS_os_activity>)arg1 ;
-(id)newCleanupActivity;
-(id)currentCleanupActivity;
@end

