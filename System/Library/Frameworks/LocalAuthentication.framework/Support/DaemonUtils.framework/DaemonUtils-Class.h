/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/DaemonUtils.framework/DaemonUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <DaemonUtils/DaemonUtils-Structs.h>
@class NSObject;

@interface DaemonUtils : NSObject {

	NSObject*<OS_dispatch_queue> _serverQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serverQueue;              //@synthesize serverQueue=_serverQueue - In the implementation block
+(id)sharedInstance;
+(id)queue;
+(void)dispatchReallyAfter:(long long)arg1 tolerance:(double)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
+(id)_callerUUID;
+(id)callerDisplayNameWithPid:(int)arg1 auditToken:(SCD_Struct_Ca0)arg2 bundleId:(id*)arg3 ;
+(BOOL)_isSiriExtensionOf:(id)arg1 runningWithAuditToken:(SCD_Struct_Ca0)arg2 ;
+(BOOL)deviceHasSEP;
+(BOOL)deviceHasPearl;
+(BOOL)deviceSupports3D;
+(BOOL)deviceSupportsSecureDoubleClick;
-(id)init;
-(NSObject*<OS_dispatch_queue>)serverQueue;
@end

