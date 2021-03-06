/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSInvalidatable.h>

@class SBSServiceFacilityClient, NSString;

@interface SBSAbstractFacilityService : NSObject <BSInvalidatable> {

	SBSServiceFacilityClient* _client;

}

@property (nonatomic,readonly) SBSServiceFacilityClient * client; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> callbackQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)serviceFacilityClientClass;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(SBSServiceFacilityClient *)client;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
@end

